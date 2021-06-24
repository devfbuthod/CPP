/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 10:25:11 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/30 10:25:12 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	srand(time(NULL));
	SuperTrap a("SUP-TP");
	SuperTrap b = a;
	SuperTrap c(a);

	NinjaTrap d("boby");
	ScavTrap e("bobette");
	FragTrap f("gorillaz");
	
	std::cout << a.getHitPoints() << std::endl;
	std::cout << a.getMaxHitPoints() << std::endl;
	std::cout << a.getEnergyPoints() << std::endl;
	std::cout << a.getMaxEnergyPoints() << std::endl;
	std::cout << a.getLevel() << std::endl;
	std::cout << a.getName() << std::endl;
	std::cout << a.getMeleeDamAtt() << std::endl;
	std::cout << a.getRangedDamAtt() << std::endl;
	std::cout << a.getArmDamRed() << std::endl;

	std::cout << "TEST A" << std::endl;
	a.meleeAttack("Rat");
	a.rangedAttack("Badass Psycho");
	std::cout << "before attack : " << a.getHitPoints() << "hp and you can get max : " << a.getMaxHitPoints() << std::endl;
	a.takeDamage(45);
	std::cout << "after attack : " << a.getHitPoints() << "hp and you can get max : " << a.getMaxHitPoints() << std::endl;
	a.beRepaired(50);
	std::cout << "after heal : " << a.getHitPoints() << "hp and you can get max : " << a.getMaxHitPoints() << std::endl;
	a.beRepaired(50);
	std::cout << a.getHitPoints() << "hp and you can get max : " << a.getMaxHitPoints() << std::endl;
	a.beRepaired(50);
	std::cout << a.getHitPoints() << "hp and you can get max : " << a.getMaxHitPoints() << std::endl;
	a.vaulthunter_dot_exe("Handsome Jack");
	a.vaulthunter_dot_exe("Handsome Jack");
	a.ninjaShoebox(d);
	a.ninjaShoebox(e);

	std::cout << "TEST B" << std::endl;
	b.meleeAttack("Rat");
	b.rangedAttack("Badass Psycho");
	b.takeDamage(45);
	b.beRepaired(50);
	b.vaulthunter_dot_exe("Handsome Jack");
	b.vaulthunter_dot_exe("Handsome Jack");
	b.ninjaShoebox(d);
	b.ninjaShoebox(e);

	std::cout << "TEST C" << std::endl;
	c.meleeAttack("Rat");
	c.rangedAttack("Badass Psycho");
	c.takeDamage(45);
	c.beRepaired(50);
	c.vaulthunter_dot_exe("Handsome Jack");
	c.vaulthunter_dot_exe("Handsome Jack");
	c.ninjaShoebox(d);
	c.ninjaShoebox(e);
  	return (0);
}
