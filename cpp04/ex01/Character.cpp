/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:28:39 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/21 14:28:41 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    this->name = "no-name";
    this->PA = 40;
    this->weapon = NULL;
}

Character & Character::operator=(Character const & rhs)
{
    if (this != &rhs)
    {
        this->setName(rhs.getName());
        this->setPA(rhs.getPA());
        this->setWeapon(rhs.getWeapon());
    }

    return (*this);
}

Character::Character(const Character & rhs)
{
    *this = rhs;

    return;
}

Character::Character(std::string const & name)
{
    this->name = name;
    this->PA = 40;
    this->weapon = NULL;
}

void Character::recoverAP()
{
    if (this->getPA() + 10 >= 40)
        this->setPA(40);
    else
        this->setPA(this->getPA() + 10);
}

void Character::equip(AWeapon* weapon)
{
    this->weapon = weapon;
}

void Character::attack(Enemy* enemy)
{
    if (this->getWeapon() != NULL)
    {
        if (this->getPA() >= this->getWeapon()->getAPCost())
        {
            std::cout << this->getName() << " attaque " << enemy->getType() << " with a " << this->getWeapon()->getName() << std::endl;
            this->getWeapon()->attack();
            this->setPA(this->getPA() - this->getWeapon()->getAPCost());
            if (enemy->getHP() - this->getWeapon()->getDamage() < 0)
            {
                enemy->setHP(0);
                delete(enemy);
            }
            else
                enemy->takeDamage(this->getWeapon()->getDamage());
        }
        else
            std::cout << "Impossible d'attaquer, votre nombre de PA est insuffisant" << std::endl;
    }
}

void Character::setName(std::string name)
{
    this->name = name;
}

std::string Character::getName() const
{
    return (this->name);
}

void Character::setPA(int PA)
{
    this->PA = PA;
}

int Character::getPA() const
{
    return(this->PA);
}

void Character::setWeapon(AWeapon* weapon)
{
    this->weapon = weapon;
}

AWeapon* Character::getWeapon() const
{
    return (this->weapon);
}

std::string Character::getInfos(void) const
{
    std::string str;
    if (this->getWeapon() != NULL)
        str = this->getName() + " has " + std::to_string(this->getPA()) + "AP and carries a " + this->getWeapon()->getName() + "\n";
    else
        str = this->getName() + " has " + std::to_string(this->getPA()) + "AP and is unarmed\n";
    return (str);
}

std::ostream & operator<<(std::ostream &o, Character const &rhs)
{
    o << rhs.getInfos();
    return (o);
}

Character::~Character()
{

}
