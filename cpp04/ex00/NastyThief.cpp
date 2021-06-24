/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NastyThief.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:23:13 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/21 14:23:14 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "NastyThief.hpp"

NastyThief::NastyThief()
{
    setName("Nasty thief");
    std::cout << "heheheh" << std::endl;
}

NastyThief::NastyThief(const NastyThief &NastyThief): Victim(NastyThief.getName())
{
    std::cout << "heheheh" << std::endl;
}

NastyThief & NastyThief::operator=(NastyThief const & rhs)
{
    if (this != &rhs)
        Victim::operator=(rhs);
    return *this;
}

NastyThief::NastyThief(std::string name): Victim(name)
{
    std::cout << "heheheh" << std::endl;
}

void NastyThief::getPolymorphed() const
{
    std::cout << this->getName() << " was just polymorphed into a pink cat!" << std::endl;
}

NastyThief::~NastyThief()
{
    std::cout << "ouuuutch" << std::endl;
}
