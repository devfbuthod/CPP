/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 13:12:05 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/19 13:12:07 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        materias[i] = NULL;
}

MateriaSource & MateriaSource::operator=(const MateriaSource & rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < 4; i++)
            materias[i] = rhs.materias[i];
    }
    return (*this);
}

MateriaSource::MateriaSource(const MateriaSource & rhs)
{
    for (int i = 0; i < 4; i++)
    {
        if (rhs.materias[i] != NULL)
            this->materias[i] = rhs.materias[i];
        else
            this->materias[i] = NULL;
    }
}

void MateriaSource::learnMateria(AMateria* m)
{
    int i = 0;

	for (i = 0; i < 4 && this->materias[i] != NULL; i++);

	if (i < 4)
		this->materias[i] = m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
		if (this->materias[i] != NULL && this->materias[i]->getType() == type)
				return (this->materias[i]->clone());
	return (0);
}
