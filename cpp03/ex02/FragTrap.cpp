/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:07:25 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/29 14:07:26 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Aaaaargh ! Bonjour chasseur de l'arche !" << std::endl;
    this->setMaxHitPoints(100);
    this->setHitPoints(100);
    this->setMaxEnergyPoints(100);
    this->setEnergyPoints(100);
    this->setLevel(1);
    this->setName("no-name");
    this->setMeleeDamAtt(30);
    this->setRangedDamAtt(20);
    this->setArmDamRed(5);
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "Aaaaargh ! Bonjour chasseur de l'arche !" << std::endl;
    this->setMaxHitPoints(100);
    this->setHitPoints(100);
    this->setMaxEnergyPoints(100);
    this->setEnergyPoints(100);
    this->setLevel(1);
    this->setName(name);
    this->setMeleeDamAtt(30);
    this->setRangedDamAtt(20);
    this->setArmDamRed(5);
}

FragTrap::FragTrap(const FragTrap &fragTrap)
{
    *this = fragTrap;

    return;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
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

void FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->getName() << " attaque " << target << " à distance, causant " << this->getRangedDamAtt() << " points de dégats !" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "FR4G-TP " << this->getName() << " attaque " << target << " en melee, causant " << this->getMeleeDamAtt() << " points de dégats !" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    if (this->getEnergyPoints() >= 25)
    {
        this->setEnergyPoints(this->getEnergyPoints() - 25);
        int nbr = rand()%5;
        if (nbr == 0)
            std::cout << this->getName() << " appelle les chiens de Tina pour bouffer la gueule de " << target << std::endl;
        else if (nbr == 1)
            std::cout << this->getName() << " demande de l'aide à son grand frère Wilhelm pour trouer le corps de " << target << std::endl;
        else if (nbr == 2)
            std::cout << this->getName() << " invoque BNK3R et lui ordonne de détruire " << target << std::endl;
        else if (nbr == 3)
            std::cout << this->getName() << " balance sa tourelle et la met en mode automatique sur " << target << std::endl;
        else if (nbr == 4)
            std::cout << this->getName() << " sort une trompette de sa caboche et casse les oreilles de " << target << std::endl;
    }
    else
        std::cout << "Oh non ! " << this->getName() << " n'a plus d'énergie et ne peut pas lancer son attaque ultime !" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout  << "Je meuuuuuuurs ..." << std::endl;
}