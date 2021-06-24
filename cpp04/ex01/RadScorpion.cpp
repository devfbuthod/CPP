/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:30:13 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/21 14:30:15 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion()
{
    std::cout << "* click click click *"  << std::endl;
    this->setType("RadScorpion");
    this->setHP(80);
}

RadScorpion & RadScorpion::operator=(RadScorpion const & rhs)
{
    if ( this != &rhs)
    {
        this->setType(rhs.getType());
        this->setHP(rhs.getHP());
    }
    return (*this);
}

RadScorpion::RadScorpion(const RadScorpion & rhs)
{
    *this = rhs;

    return;
}

void RadScorpion::takeDamage(int damage)
{
    if (this->getHP() > damage)
		this->setHP(this->getHP() - damage);
	else
		this->setHP(0);
}

RadScorpion::~RadScorpion()
{
    std::cout << "* SPROTCH *" << std::endl;
}
