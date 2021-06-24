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

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	srand(time(NULL));
    FragTrap a("FR4G-TP");
	ScavTrap b("SC4V-TP");
	NinjaTrap c("NINJA-TP");
	NinjaTrap d = c;
	NinjaTrap e(c);

	c.meleeAttack("Rat");
	c.rangedAttack("Badass Psycho");
	c.takeDamage(45);
	c.beRepaired(50);
	c.ninjaShoebox(a);
	c.ninjaShoebox(b);

	d.meleeAttack("Rat");
	d.rangedAttack("Badass Psycho");
	d.takeDamage(45);
	d.beRepaired(50);
	d.setEnergyPoints(100);
	d.ninjaShoebox(a);
	d.ninjaShoebox(c);

	e.meleeAttack("Rat");
	e.rangedAttack("Badass Psycho");
	e.takeDamage(45);
	e.beRepaired(50);
	e.setEnergyPoints(100);
	e.ninjaShoebox(b);
	e.ninjaShoebox(c);
  	return (0);
}
