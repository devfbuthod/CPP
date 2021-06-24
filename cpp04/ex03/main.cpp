/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 13:12:19 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/19 13:12:20 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Fire.hpp"

int main()
{
    std::cout << "Learn materia" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Fire());

	ICharacter* moi = new Character("moi");

	std::cout << std::endl << "Creating materia source and equip" << std::endl;
	AMateria* tmp;
	AMateria* tmp1;
	AMateria* tmp2;
	AMateria* tmp3;
	AMateria* tmp4;
	AMateria* tmp5;
	tmp = src->createMateria("ice");
	moi->equip(tmp);
	tmp1 = src->createMateria("cure");
	moi->equip(tmp1);
	tmp2 = src->createMateria("fire");
	moi->equip(tmp2);
	tmp3 = src->createMateria("cure");
	moi->equip(tmp3);
	tmp4 = src->createMateria("ice");
	moi->equip(tmp4);
	tmp5 = src->createMateria("fire");
	moi->equip(tmp5);

	ICharacter* bob = new Character("bob");

	std::cout << std::endl << "Testing use and see xp" << std::endl;
	moi->use(0, *bob);
	moi->use(1, *bob);
	moi->use(2, *bob);
	std::cout << tmp->getXP() << " xp from tmp" << std::endl;
	std::cout << tmp1->getXP() << " xp from tmp1" << std::endl;
	moi->use(0, *bob);
	moi->use(0, *bob);
	moi->use(0, *bob);
	moi->use(0, *bob);
	moi->use(3, *bob);
	moi->use(-3, *bob);
	moi->use(33, *bob);
	moi->use(4, *bob);
	std::cout << tmp->getXP() << " xp from tmp -> use(0, ...)" << std::endl;
	std::cout << tmp1->getXP() << " xp from tmp1 -> use(1, ...)" << std::endl;
	std::cout << tmp2->getXP() << " xp from tmp2 -> use(2, ...)" << std::endl;
	std::cout << tmp3->getXP() << " xp from tmp3 -> use(3, ...)" << std::endl;

	std::cout << std::endl << "Testing equip / unequip" << std::endl;
	std::cout << tmp3->getXP() << " xp from tmp3" << std::endl;
	moi->unequip(3);
	moi->unequip(8);
	moi->unequip(-3);
	moi->use(3, *bob);
	moi->equip(tmp3);
	std::cout << tmp3->getXP() << " xp from tmp3" << std::endl;

	delete bob;
	delete moi;
	delete src;

	return 0;
}