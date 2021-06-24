/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:02:56 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/30 11:02:57 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Construction du Clap-Trap" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Construction du Clap-Trap" << std::endl;
    setName(name);
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap)
{
    std::cout << "Construction du Clap-Trap" << std::endl;
    *this = clapTrap;

    return;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
{
    std::cout << "Construction du Clap-Trap" << std::endl;
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

void ClapTrap::rangedAttack(std::string const & target)
{
    std::cout << "ClapTrap " << this->getName() << " jete une pierre à " << target << ", il lui inflige " << this->getRangedDamAtt() << " points de dégats !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target)
{
    std::cout << "ClapTrap " << this->getName() << " donne un coup à " << target << ", cela lui inflige " << this->getMeleeDamAtt() << " points de dégats !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->getArmDamRed() < (int)amount)
    {
        this->setHitPoints(this->getHitPoints() - amount + getArmDamRed());
        std::cout << this->getName() << " se fait écraser par un Garogo et perd " << amount - this->getArmDamRed() << " point(s) de vie" << std::endl;
    }
    else
        std::cout << this->getName() << " ne subit aucun degat " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << "FR4G-TP " << this->getName() << " se fait soigner par Maya la sirène de " << amount << " point(s) de vie" << std::endl;
    this->setHitPoints(this->getHitPoints() + amount);
}

void ClapTrap::setHitPoints(int hit_points)
{
    if (hit_points <= 0)
    {
        std::cout << "FR4G-TP " << this->getName() << " est mort en aillant vaillamant combattu ..." << std::endl;
        this->hit_points = 0;
    }
    else if (hit_points <= this->getMaxHitPoints())
        this->hit_points = hit_points;
    else
        this->hit_points = this->getMaxHitPoints();
}

int ClapTrap::getHitPoints()  const
{
    return (this->hit_points);
}

void ClapTrap::setMaxHitPoints(int max_hit_points)
{
    this->max_hit_points = max_hit_points;
}

int ClapTrap::getMaxHitPoints() const
{
    return (this->max_hit_points);
}

void ClapTrap::setEnergyPoints(int energy_points)
{
    if (energy_points <= this->getMaxEnergyPoints())
        this->energy_points = energy_points;
    else
        this->energy_points = this->getMaxEnergyPoints();
}

int ClapTrap::getEnergyPoints() const
{
    return (this->energy_points);
}

void ClapTrap::setMaxEnergyPoints(int max_energy_points)
{
    this->max_energy_points = max_energy_points;
}

int ClapTrap::getMaxEnergyPoints() const
{
    return (this->max_energy_points);
}

void ClapTrap::setLevel(int level)
{
    this->level = level;
}

int ClapTrap::getLevel() const
{
    return (this->level);
}

void ClapTrap::setName(std::string name)
{
    this->name = name;
}

std::string ClapTrap::getName() const
{
    return (this->name);
}

void ClapTrap::setMeleeDamAtt(int melee_dam_att)
{
    this->melee_dam_att = melee_dam_att;
}

int ClapTrap::getMeleeDamAtt() const
{
    return (this->melee_dam_att);
}

void ClapTrap::setRangedDamAtt(int ranged_dam_att)
{
    this->ranged_dam_att = ranged_dam_att;
}

int ClapTrap::getRangedDamAtt() const
{
    return (this->ranged_dam_att);
}

void ClapTrap::setArmDamRed(int arm_dam_red)
{
    if (arm_dam_red < 0)
        this->arm_dam_red = 0;
    else
        this->arm_dam_red = arm_dam_red;
}

int ClapTrap::getArmDamRed() const
{
    return (this->arm_dam_red);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destruction du Clap-Trap" << std::endl;
}