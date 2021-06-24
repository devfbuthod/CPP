/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Piscineux.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:14:01 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/21 14:14:03 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Piscineux.hpp"

Piscineux::Piscineux()
{
    std::cout << "* comment on se register aux pc ? *"  << std::endl;
    this->setType("Piscineux");
    this->setHP(10);
}

Piscineux & Piscineux::operator=(Piscineux const & rhs)
{
    if ( this != &rhs)
    {
        this->setType(rhs.getType());
        this->setHP(rhs.getHP());
    }
    return (*this);
}

Piscineux::Piscineux(const Piscineux & rhs)
{
    *this = rhs;

    return;
}

void Piscineux::takeDamage(int damage)
{
    if (this->getHP() > damage)
		this->setHP(this->getHP() - damage);
	else
		this->setHP(0);
}

Piscineux::~Piscineux()
{
    std::cout << "* PLOUF *" << std::endl;
}
