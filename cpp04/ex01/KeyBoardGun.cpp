/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KeyboardGun.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:07:37 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/21 14:07:39 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "KeyBoardGun.hpp"

KeyboardGun::KeyboardGun()
{
    this->setName("KeyBoard Gun");
    this->setAPCost(20);
    this->setDamage(1);
}

KeyboardGun::KeyboardGun(const KeyboardGun & rhs)
{
    *this = rhs;

    return;
}

KeyboardGun & KeyboardGun::operator=(KeyboardGun const & rhs)
{
    if (this != &rhs)
    {
        this->setName(rhs.getName());
        this->setDamage(rhs.getDamage());
        this->setAPCost(rhs.getAPCost()); 
    }
    return (*this);
}

void KeyboardGun::attack() const
{
    std::cout << "* QWERTYYYYYYYYYYY *" << std::endl;
}

KeyboardGun::~KeyboardGun()
{

}
