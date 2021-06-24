/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:30:47 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/21 14:30:49 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Enemy.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"
#include "KeyBoardGun.hpp"
#include "Piscineux.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	std::cout << std::endl;

	std::cout << "-- crafting weapon --" << std::endl;
	Enemy* b = new RadScorpion();
	Enemy* c = new SuperMutant();
	Enemy* d = new Piscineux();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* kbg = new KeyboardGun();
	AWeapon* bl;
	bl = pf;
	std::cout << std::endl;

	std::cout << b << " " << c << std::endl << std::endl;

	std::cout << "-- testing equip / attack --" << std::endl;

	me->equip(kbg);
	me->attack(d);
	std::cout << *me;

	me->equip(bl);
	me->attack(b);
	std::cout << *me;

	me->equip(pr);
	std::cout << *me;

	me->equip(pr);
	std::cout << *me;

	me->attack(b);
	if (b)
        std::cout << b->getType() << " has " << b->getHP() << " HP." << std::endl;
	std::cout << *me;
	std::cout << std::endl;

	std::cout << "-- testing ap --" << std::endl;
	me->attack(c);
	me->attack(c);
	std::cout << *me;
	me->attack(c);
	me->attack(c);
	me->attack(c);
	std::cout << *me;
	me->attack(c);
	me->attack(c);
	me->attack(c);
	std::cout << *me;
	std::cout << std::endl;

	std::cout << "-- recovery ap --" << std::endl;
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->attack(c);
	std::cout << std::endl;

	std::cout << "-- recovery ap max --" << std::endl;
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	std::cout << *me;
	me->recoverAP();
	me->recoverAP();
	std::cout << *me;
	std::cout << std::endl;

	std::cout << "-- testing ennemy resistance --" << std::endl;
	std::cout << *me;
	std::cout << "The weapon do " << pr->getDamage() << " dmg." << std::endl;
	if (b)
        std::cout << b->getType() << " has " << b->getHP() << " HP. (before)" << std::endl;
	me->attack(b);
	if (b)
        std::cout << b->getType() << " has " << b->getHP() << " HP. (after)" << std::endl;
	if (c)
        std::cout << c->getType() << " has " << c->getHP() << " HP. (before)" << std::endl;
	me->attack(c);
	if (c)
        std::cout << c->getType() << " has " << c->getHP() << " HP. (after)" << std::endl;
	std::cout << std::endl;

	std::cout << "-- killing ennemy --" << std::endl;
	if (c)
        std::cout << c->getType() << " has " << c->getHP() << " HP. 1" << std::endl;
	me->recoverAP();
	me->recoverAP();
	me->attack(c);
	me->attack(c);
	if (c)
        std::cout << c->getType() << " has " << c->getHP() << " HP. 2" << std::endl;
	me->recoverAP();
	me->recoverAP();
	me->attack(c);
	if (c)
        std::cout << c->getType() << " has " << c->getHP() << " HP. 3" << std::endl;
	std::cout << *me;

	delete pf;
	delete pr;
	delete me;
	return (0);
}
