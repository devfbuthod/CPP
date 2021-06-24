/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:29:51 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/21 14:29:53 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
{
    this->setName("Plasma Rifle");
    this->setAPCost(5);
    this->setDamage(21);
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle & rhs)
{
    *this = rhs;

    return;
}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle const & rhs)
{
    if (this != &rhs)
    {
        this->setName(rhs.getName());
        this->setDamage(rhs.getDamage());
        this->setAPCost(rhs.getAPCost()); 
    }
    return (*this);
}

void PlasmaRifle::attack() const
{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::~PlasmaRifle()
{

}
