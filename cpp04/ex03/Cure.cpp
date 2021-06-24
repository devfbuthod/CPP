/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 13:11:28 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/19 13:11:29 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
    typeM = "cure";
}

Cure & Cure::operator=(const Cure & rhs)
{
    if (this != &rhs)
    {
        _xp = rhs._xp;
        typeM = rhs.typeM;
    }
    return (*this);
}

Cure::Cure(const AMateria &rhs)
{
    typeM = rhs.getType();
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
    _xp = _xp + 10;
}

Cure::~Cure() {}
