/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:23:19 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/21 14:23:21 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon()
{
    setName("Peon");
    std::cout << "Zog zog." << std::endl;
}

Peon::Peon(const Peon &peon): Victim(peon.getName())
{
    std::cout << "Zog zog." << std::endl;
}

Peon & Peon::operator=(Peon const & rhs)
{
    if (this != &rhs)
        Victim::operator=(rhs);
    return *this;
}

Peon::Peon(std::string name): Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

void Peon::getPolymorphed() const
{
    std::cout << this->getName() << " was just polymorphed into a pink pony!" << std::endl;
}

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}
