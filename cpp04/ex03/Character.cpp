/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 13:11:14 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/19 13:11:17 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
    for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
}

Character & Character::operator=(const Character & rhs)
{
    if (&rhs != this)
    {
        name = rhs.getName();
        for (int i = 0; i < 4; i++)
            materias[i] = rhs.materias[i];
    }
    return (*this);
}

Character::Character(std::string pname): name(pname)
{
    for (int i = 0; i < 4; i++)
		this->materias[i] = NULL;
}

Character::Character(const Character &rhs)
{
    *this = rhs;
    return;
}

std::string const & Character::getName() const
{
    return (name);
}

void Character::equip(AMateria* m)
{
    int i;

    i = 0;
    if (m == NULL)
        std::cout << "Materia corrupted" << std::endl;
    else
    {
        while (materias[i] != NULL && i < 4)
            i++;
        if (i == 4)
            std::cout << "Plus de place pour stocker une materia" << std::endl;
        else
            materias[i] = m;
    }
} 

void Character::unequip(int idx)
{
    int i;

    i = 0;
    if (idx < 0 || idx > 3)
        std::cout << "Bad index" << std::endl;
    else {
        while (i < idx && materias[i])
            i++;
        if (materias[i] != NULL)
            materias[i] = NULL;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if ((idx >= 0 && idx <= 3) && materias[idx] != NULL)
        materias[idx]->use(target);
}

Character::~Character()
{

}