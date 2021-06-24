/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 13:52:43 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/21 13:52:45 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fire.hpp"

Fire::Fire()
{
    typeM = "fire";
}

Fire & Fire::operator=(const Fire & rhs)
{
    if (this != &rhs)
    {
        _xp = rhs._xp;
        typeM = rhs.typeM;
    }
    return (*this);
}

Fire::Fire(const AMateria &rhs)
{
    typeM = rhs.getType();
}

void Fire::use(ICharacter& target)
{
    std::cout << "* burn " << target.getName() << " ass *" << std::endl;
    _xp = _xp + 10;
}

Fire::~Fire() {}
