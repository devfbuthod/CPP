/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:30:34 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/21 14:30:35 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
{
    std::cout << "Gaaah. Break everything !"  << std::endl;
    this->setType("Super Mutant");
    this->setHP(170);
}

SuperMutant & SuperMutant::operator=(SuperMutant const & rhs)
{
    if ( this != &rhs)
    {
        this->setType(rhs.getType());
        this->setHP(rhs.getHP());
    }
    return (*this);
}

SuperMutant::SuperMutant(const SuperMutant & rhs)
{
    *this = rhs;

    return;
}

void SuperMutant::takeDamage(int damage)
{
    if (this->getHP() > damage - 3)
		this->setHP(this->getHP() - damage + 3);
	else
		this->setHP(0);
}

SuperMutant::~SuperMutant()
{
    std::cout << "Aaargh ..." << std::endl;
}
