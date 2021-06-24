/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:28:30 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/21 14:28:32 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(): name("no-name"), damage(0), AP(0)
{
    
}

AWeapon::AWeapon(const AWeapon & rhs)
{
    *this = rhs;

    return;
}

AWeapon & AWeapon::operator=(AWeapon const & rhs)
{
    if (this != &rhs)
    {
        this->setName(rhs.getName());
        this->setDamage(rhs.getDamage());
        this->setAPCost(rhs.getAPCost()); 
    }
    return (*this);
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
{
    this->name = name;
    this->AP = apcost;
    this->damage = damage;
}

std::string AWeapon::getName() const
{
    return (this->name);
}

void AWeapon::setName(std::string name)
{
    this->name = name;
}

int AWeapon::getAPCost() const
{
    return (this->AP);
}

void AWeapon::setAPCost(int apcost)
{
    this->AP = apcost;
}

int AWeapon::getDamage() const
{
    return (this->damage);
}

void AWeapon::setDamage(int damage)
{
    this->damage = damage;
}

AWeapon::~AWeapon()
{

}
