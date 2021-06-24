/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:07:32 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/29 14:07:34 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
    std::cout << "Ninjaaaaaaaaaaaaaaa !" << std::endl;
    this->setMaxHitPoints(60);
    this->setHitPoints(60);
    this->setMaxEnergyPoints(120);
    this->setEnergyPoints(120);
    this->setLevel(1);
    this->setName("no-name");
    this->setMeleeDamAtt(60);
    this->setRangedDamAtt(5);
    this->setArmDamRed(0);
}

NinjaTrap::NinjaTrap(std::string name)
{
    std::cout << "Ninjaaaaaaaaaaaaaaa !" << std::endl;
    this->setMaxHitPoints(60);
    this->setHitPoints(60);
    this->setMaxEnergyPoints(120);
    this->setEnergyPoints(120);
    this->setLevel(1);
    this->setName(name);
    this->setMeleeDamAtt(60);
    this->setRangedDamAtt(5);
    this->setArmDamRed(0);
}

NinjaTrap::NinjaTrap(const NinjaTrap &ninjaTrap)
{
    std::cout << "Ninjaaaaaaaaaaaaaaa !" << std::endl;
    *this = ninjaTrap;

    return;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & rhs)
{
    std::cout << "Ninjaaaaaaaaaaaaaaa !" << std::endl;
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

void NinjaTrap::rangedAttack(std::string const & target)
{
    std::cout << "NinjaTrap " << this->getName() << " lance un shuriken " << target << ", il lui inflige " << this->getRangedDamAtt() << " points de dégats !" << std::endl;
}

void NinjaTrap::meleeAttack(std::string const & target)
{
    std::cout << "NinjaTrap " << this->getName() << " NINJA! " << target << ", cela lui inflige " << this->getMeleeDamAtt() << " points de dégats !" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const & target)
{
    if (this->getEnergyPoints() >= 25)
    {
        this->setEnergyPoints(this->getEnergyPoints() - 25);
        std::cout << "Attaque spécial du NINJAAAAAAAAAAAA !! " << this->getName() << " zigouille " << target.getName() << std::endl;
    }
    else
        std::cout << "Oh non ! " << this->getName() << " n'a plus d'énergie et ne peut pas lancer son attaque speciale de ninja trop forte !" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap const & target)
{
    if (this->getEnergyPoints() >= 25)
    {
        this->setEnergyPoints(this->getEnergyPoints() - 25);
        std::cout << "Omae wa mou shindeiru !! " << this->getName() << " coupe en morceau " << target.getName() << std::endl;
    }
    else
        std::cout << "Oh non ! " << this->getName() << " n'a plus d'énergie et ne peut pas lancer son attaque speciale de ninja trop forte !" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const & target)
{
    if (this->getEnergyPoints() >= 25)
    {
        this->setEnergyPoints(this->getEnergyPoints() - 25);
        std::cout << "DESTRUCTION !! " << this->getName() << " éclate " << target.getName() << std::endl;
    }
    else
        std::cout << "Oh non ! " << this->getName() << " n'a plus d'énergie et ne peut pas lancer son attaque speciale de ninja trop forte !" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap const & target)
{
    if (this->getEnergyPoints() >= 25)
    {
        this->setEnergyPoints(this->getEnergyPoints() - 25);
        std::cout << "Desole papa ... " << this->getName() << " marche sur le pied de " << target.getName() << std::endl;
    }
    else
        std::cout << "Oh non ! " << this->getName() << " n'a plus d'énergie et ne peut pas lancer son attaque speciale de ninja trop forte !" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
    std::cout  << "Tu dois continuer ta route vers l'arche sans moi ... mon heure est venue ..." << std::endl;
}