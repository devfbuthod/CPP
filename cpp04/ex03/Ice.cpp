/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 13:11:51 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/19 13:11:53 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
    typeM = "ice";
}

Ice & Ice::operator=(const Ice & rhs)
{
    if (this != &rhs)
    {
        _xp = rhs._xp;
        typeM = rhs.typeM;
    }
    return (*this);
}

Ice::Ice(const AMateria &rhs)
{
    typeM = rhs.getType();
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
    _xp = _xp + 10;
}

Ice::~Ice() {}