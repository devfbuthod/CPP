/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:07:32 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/29 14:07:34 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(): NinjaTrap(), FragTrap()
{
    std::cout << "SuperTrap en action !" << std::endl;
    setName("no-name");
    setMaxHitPoints(100);
    setHitPoints(100);
    setMaxEnergyPoints(120);
    setEnergyPoints(120);
	setLevel(1);
	setMeleeDamAtt(60);
    setRangedDamAtt(20);
    setArmDamRed(5);
}

SuperTrap::SuperTrap(std::string name): NinjaTrap(), FragTrap()
{
    std::cout << "SuperTrap en action !" << std::endl;
    setName(name);
    setMaxHitPoints(100);
    setHitPoints(100);
    setMaxEnergyPoints(120);
    setEnergyPoints(120);
	setLevel(1);
	setMeleeDamAtt(60);
    setRangedDamAtt(20);
    setArmDamRed(5);
}

SuperTrap::SuperTrap(const SuperTrap &superTrap)
{
    std::cout << "SuperTrap en action !" << std::endl;
    *this = superTrap;
}

SuperTrap & SuperTrap::operator=(SuperTrap const & rhs)
{
    std::cout << "SuperTrap en action !" << std::endl;
    setMaxHitPoints(rhs.getMaxHitPoints());
    setHitPoints(rhs.getHitPoints());
    setMaxEnergyPoints(rhs.getMaxEnergyPoints());
    setEnergyPoints(rhs.getMaxEnergyPoints());
    setLevel(rhs.getLevel());
    setMeleeDamAtt(rhs.getMeleeDamAtt());
    setRangedDamAtt(rhs.getRangedDamAtt());
    setRangedDamAtt(rhs.getArmDamRed());
    setName(rhs.getName());
    return *this;
}

void SuperTrap::rangedAttack(std::string const & target)
{
    this->FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const & target)
{
    this->NinjaTrap::meleeAttack(target);
}

SuperTrap::~SuperTrap()
{
    std::cout  << "SuperTrap était pourtant invincible mais il a été battu !" << std::endl;
}