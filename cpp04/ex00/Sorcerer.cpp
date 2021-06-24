/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:23:30 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/21 14:23:32 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(): name("no-name"), title("no-title")
{
    std::cout << name << ", " << title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &sorcerer)
{
    *this = sorcerer;

    return;
}

Sorcerer & Sorcerer::operator=(Sorcerer const & rhs)
{
    if (this != &rhs)
    {
        this->setName(rhs.getName());
        this->setTitle(rhs.getTitle());
    }
    return *this;
}

std::string Sorcerer::announce(void) const
{
    std::string str;
    str = "I am " + this->getName() + ", " + this->getTitle() + ", and i like ponies!\n";
    return (str);
}

std::ostream &operator<<(std::ostream &o, Sorcerer const &rhs)
{
    o << rhs.announce();
    return o;
}

Sorcerer::Sorcerer(std::string name, std::string title): name(name), title(title)
{
    std::cout << name << ", " << title << ", is born!" << std::endl;
}

void Sorcerer::setName(std::string name)
{
    this->name = name;
}

std::string Sorcerer::getName() const
{
    return (this->name);
}

void Sorcerer::setTitle(std::string title)
{
    this->title = title;
}

std::string Sorcerer::getTitle() const
{
    return (this->title);
}

void Sorcerer::polymorph(Victim const &a) const
{
    a.getPolymorphed();
}

Sorcerer::~Sorcerer()
{
    std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same!" << std::endl;
}
