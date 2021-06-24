/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 09:30:19 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/29 09:30:20 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;

    return ;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Assignment operator called" << std::endl;
    if ( this != &rhs )
        this->value = rhs.getRawBits();
    return *this;
}

Fixed::Fixed(int value)
{
    std::cout << "Parametric constructor called" << std::endl;
    this->value = value;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (this->value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "Assignation operator called" << std::endl;
    this->value = raw;
}

Fixed::~Fixed()
{
    std::cout  << "Destructor called" << std::endl;
}