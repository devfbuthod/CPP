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
    this->hit_points = 100;
    this->max_hit_points = 100;
    this->energy_points = 50;
    this->max_energy_points = 50;
    this->level = 1;
    this->name = "no-name";
    this->melee_dam_att = 20;
    this->ranged_dam_att = 15;
    this->arm_dam_red = 3;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "J'ai été créé pour jouer avec vous ! Super non ?!" << std::endl;
    this->hit_points = 100;
    this->max_hit_points = 100;
    this->energy_points = 50;
    this->max_energy_points = 50;
    this->level = 1;
    this->name = name;
    this->melee_dam_att = 20;
    this->ranged_dam_att = 15;
    this->arm_dam_red = 3;
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

void ScavTrap::takeDamage(unsigned int amount)
{
    int dmg_taken = amount - getArmDamRed();

    if (dmg_taken <= 0)
        std::cout << "SC4V-TP " << this->getName() << " ne subit aucun degat " << std::endl;
    else
    {
        std::cout << "SC4V-TP " << this->getName() << " prend un vilain coup de porte dans l'oeil qui lui inflige " << dmg_taken << " point(s) de vie" << std::endl;
        this->setHitPoints(this->getHitPoints() - dmg_taken);
    }
}

void ScavTrap::beRepaired(unsigned int amount)
{
    std::cout << "SC4V-TP " << this->getName() << " boit un peu d'huile de moteur et lui rend donc " << amount << " point(s) de vie" << std::endl;
    this->setHitPoints(this->getHitPoints() + amount);
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

void ScavTrap::setHitPoints(int hit_points)
{
    if (hit_points <= 0)
    {
        std::cout << "SC4V-TP " << this->getName() << " est mort en aillant vaillamant protégé le repère des méchants ..." << std::endl;
        this->hit_points = 0;
    }
    else if (hit_points <= this->getMaxHitPoints())
        this->hit_points = hit_points;
    else
        this->hit_points = this->getMaxHitPoints();
}

int ScavTrap::getHitPoints()  const
{
    return (this->hit_points);
}

void ScavTrap::setMaxHitPoints(int max_hit_points)
{
    this->max_hit_points = max_hit_points;
}

int ScavTrap::getMaxHitPoints() const
{
    return (this->max_hit_points);
}

void ScavTrap::setEnergyPoints(int energy_points)
{
    if (energy_points <= this->getMaxEnergyPoints())
        this->energy_points = energy_points;
    else
        this->energy_points = this->getMaxEnergyPoints();
}

int ScavTrap::getEnergyPoints() const
{
    return (this->energy_points);
}

void ScavTrap::setMaxEnergyPoints(int max_energy_points)
{
    this->max_energy_points = max_energy_points;
}

int ScavTrap::getMaxEnergyPoints() const
{
    return (this->max_energy_points);
}

void ScavTrap::setLevel(int level)
{
    this->level = level;
}

int ScavTrap::getLevel() const
{
    return (this->level);
}

void ScavTrap::setName(std::string name)
{
    this->name = name;
}

std::string ScavTrap::getName() const
{
    return (this->name);
}

void ScavTrap::setMeleeDamAtt(int melee_dam_att)
{
    this->melee_dam_att = melee_dam_att;
}

int ScavTrap::getMeleeDamAtt() const
{
    return (this->melee_dam_att);
}

void ScavTrap::setRangedDamAtt(int ranged_dam_att)
{
    this->ranged_dam_att = ranged_dam_att;
}

int ScavTrap::getRangedDamAtt() const
{
    return (this->ranged_dam_att);
}

void ScavTrap::setArmDamRed(int arm_dam_red)
{
    if (arm_dam_red < 0)
        this->arm_dam_red = 0;
    else
        this->arm_dam_red = arm_dam_red;
}

int ScavTrap::getArmDamRed() const
{
    return (this->arm_dam_red);
}

ScavTrap::~ScavTrap()
{
    std::cout  << "ouuutch ... un autre frère me remplacera ..." << std::endl;
}