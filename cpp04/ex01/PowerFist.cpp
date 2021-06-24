/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:30:02 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/21 14:30:04 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist()
{
    this->setName("Power Fist");
    this->setAPCost(8);
    this->setDamage(50);
}

PowerFist::PowerFist(const PowerFist & rhs)
{
    *this = rhs;

    return;
}

PowerFist & PowerFist::operator=(PowerFist const & rhs)
{
    if (this != &rhs)
    {
        this->setName(rhs.getName());
        this->setDamage(rhs.getDamage());
        this->setAPCost(rhs.getAPCost()); 
    }
    return (*this);
}

void PowerFist::attack() const
{
    std::cout << "* pschhh... SBAM ! *" << std::endl;
}

PowerFist::~PowerFist()
{

}
