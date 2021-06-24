/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 10:58:42 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/18 10:58:44 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string type, std::string name)
{
    this->type = type;
    this->name = name;
}

std::string Zombie::getType()
{
    return (type);
}

std::string Zombie::getName()
{
    return (name);
}

void Zombie::announce()
{
    std::cout << "<" << this->getName() << " (" << this->getType() << ")> Braiiiiiiinnnssss ..." << std::endl;
}