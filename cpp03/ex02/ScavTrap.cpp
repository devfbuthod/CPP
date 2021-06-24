/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 10:24:56 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/30 10:24:58 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "J'ai été créé pour jouer avec vous ! Super non ?!" << std::endl;
    this->setMaxHitPoints(100);
    this->setHitPoints(100);
    this->setMaxEnergyPoints(50);
    this->setEnergyPoints(50);
    this->setLevel(1);
    this->setName("no-name");
    this->setMeleeDamAtt(20);
    this->setRangedDamAtt(15);
    this->setArmDamRed(3);
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "J'ai été créé pour jouer avec vous ! Super non ?!" << std::endl;
    this->setMaxHitPoints(100);
    this->setHitPoints(100);
    this->setMaxEnergyPoints(50);
    this->setEnergyPoints(50);
    this->setLevel(1);
    this->setName(name);
    this->setMeleeDamAtt(20);
    this->setRangedDamAtt(15);
    this->setArmDamRed(3);
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap)
{
    *this = scavTrap;

    return;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
    if (this != &rhs)
    {
        this->setHitPoints(rhs.getHitPoints());
        this->setMaxHitPoints(rhs.getMaxHitPoints());
        this->setEnergyPoints(rhs.getEnergyPoints());
        this->setMaxEnergyPoints(rhs.getMaxEnergyPoints());
        this->setLevel(rhs.getLevel());
        this->setName(rhs.getName());
        this->setMeleeDamAtt(rhs.getMeleeDamAtt());
        this->setRangedDamAtt(rhs.getRangedDamAtt());
        this->setArmDamRed(rhs.getArmDamRed());
    }
    return *this;
}

void ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "SC4V-TP " << this->getName() << " jete une pierre à " << target << ", il lui inflige " << this->getRangedDamAtt() << " points de dégats !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "SC4V-TP " << this->getName() << " donne un coup à " << target << ", cela lui inflige " << this->getMeleeDamAtt() << " points de dégats !" << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
    int nbr = rand()%3;
        std::cout << "Bonjour " << target << " permets moi de te proposer le challenge suivant : ";
    if (nbr == 0)
        std::cout << "Pierre, feuille, ciseau " << std::endl;
    else if (nbr == 1)
        std::cout << "Battle de regard " << std::endl;
    else if (nbr == 2)
        std::cout << "L'insulte la plus mignonne " << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout  << "ouuutch ... un autre frère me remplacera ..." << std::endl;
}