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
    this->hit_points = 100;
    this->max_hit_points = 100;
    this->energy_points = 100;
    this->max_energy_points = 100;
    this->level = 1;
    this->name = "no-name";
    this->melee_dam_att = 30;
    this->ranged_dam_att = 20;
    this->arm_dam_red = 5;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "Aaaaargh ! Bonjour chasseur de l'arche !" << std::endl;
    this->hit_points = 100;
    this->max_hit_points = 100;
    this->energy_points = 100;
    this->max_energy_points = 100;
    this->level = 1;
    this->name = name;
    this->melee_dam_att = 30;
    this->ranged_dam_att = 20;
    this->arm_dam_red = 5;
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

void FragTrap::takeDamage(unsigned int amount)
{
    int dmg_taken = amount - getArmDamRed();

    if (dmg_taken <= 0)
        std::cout << "FR4G-TP " << this->getName() << " ne subit aucun degat " << std::endl;
    else
    {
        std::cout << "FR4G-TP " << this->getName() << " se fait écraser par un Garogo et perd " << dmg_taken << " point(s) de vie" << std::endl;
        this->setHitPoints(this->getHitPoints() - dmg_taken);
    }   
}

void FragTrap::beRepaired(unsigned int amount)
{
    std::cout << "FR4G-TP " << this->getName() << " se fait soigner par Maya la sirène de " << amount << " point(s) de vie" << std::endl;
    this->setHitPoints(this->getHitPoints() + amount);
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

void FragTrap::setHitPoints(int hit_points)
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

int FragTrap::getHitPoints()  const
{
    return (this->hit_points);
}

void FragTrap::setMaxHitPoints(int max_hit_points)
{
    this->max_hit_points = max_hit_points;
}

int FragTrap::getMaxHitPoints() const
{
    return (this->max_hit_points);
}

void FragTrap::setEnergyPoints(int energy_points)
{
    if (energy_points <= this->getMaxEnergyPoints())
        this->energy_points = energy_points;
    else
        this->energy_points = this->getMaxEnergyPoints();
}

int FragTrap::getEnergyPoints() const
{
    return (this->energy_points);
}

void FragTrap::setMaxEnergyPoints(int max_energy_points)
{
    this->max_energy_points = max_energy_points;
}

int FragTrap::getMaxEnergyPoints() const
{
    return (this->max_energy_points);
}

void FragTrap::setLevel(int level)
{
    this->level = level;
}

int FragTrap::getLevel() const
{
    return (this->level);
}

void FragTrap::setName(std::string name)
{
    this->name = name;
}

std::string FragTrap::getName() const
{
    return (this->name);
}

void FragTrap::setMeleeDamAtt(int melee_dam_att)
{
    this->melee_dam_att = melee_dam_att;
}

int FragTrap::getMeleeDamAtt() const
{
    return (this->melee_dam_att);
}

void FragTrap::setRangedDamAtt(int ranged_dam_att)
{
    this->ranged_dam_att = ranged_dam_att;
}

int FragTrap::getRangedDamAtt() const
{
    return (this->ranged_dam_att);
}

void FragTrap::setArmDamRed(int arm_dam_red)
{
    this->arm_dam_red = arm_dam_red;
}

int FragTrap::getArmDamRed() const
{
    return (this->arm_dam_red);
}

FragTrap::~FragTrap()
{
    std::cout  << "Je meuuuuuuurs ..." << std::endl;
}