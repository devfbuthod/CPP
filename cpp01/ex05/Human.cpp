/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 11:46:54 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/24 11:46:55 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{

}

const Brain &Human::getBrain() const
{
    return (this->brain);
}

std::string Human::identify() const
{
    return (this->getBrain().identify());
}