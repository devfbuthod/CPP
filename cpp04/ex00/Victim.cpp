/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:23:42 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/21 14:23:43 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(): name("no-name")
{
    std::cout << "A random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &victim)
{
    *this = victim;

    return;
}

Victim & Victim::operator=(Victim const & rhs)
{
    if (this != &rhs)
    {
        this->setName(rhs.getName());
    }
    return *this;
}

Victim::Victim(std::string name)
{
    this->name = name;
    std::cout << "A random victim called " << name << " just appeared!" << std::endl;
}

std::string Victim::announce(void) const
{
    std::string str;
    str = "I'm " + this->getName() + " and i like otters!\n";
    return (str);
}

std::ostream &operator<<(std::ostream &o, Victim const &rhs)
{
    o << rhs.announce();
    return o;
}

void Victim::setName(std::string name)
{
    this->name = name;
}

std::string Victim::getName() const
{
    return (this->name);
}

void Victim::getPolymorphed() const
{
    std::cout << this->getName() << " was just polymorphed in a cute little sheep!" << std::endl;
}

Victim::~Victim()
{
    std::cout << "The victim " << this->name << " died for no apparent reasons!" << std::endl;
}
