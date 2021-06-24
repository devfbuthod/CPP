/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 13:11:02 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/19 13:11:04 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
    _xp = 0;
}

AMateria & AMateria::operator=(const AMateria & rhs)
{
    if (this != &rhs)
        this->_xp = rhs._xp;
    return (*this);
}

AMateria::AMateria(const AMateria &rhs)
{
    *this = rhs;
    return;
}

AMateria::AMateria(std::string const & type)
{
    _xp = 0;
    typeM = type;
}

std::string const & AMateria::getType() const
{
    return (typeM);
}

unsigned int AMateria::getXP() const
{
    return (_xp);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
    _xp = _xp + 10;
}

AMateria::~AMateria()
{

}