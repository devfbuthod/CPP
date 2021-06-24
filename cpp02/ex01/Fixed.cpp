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

    return;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Assignment operator called" << std::endl;
    if ( this != &rhs )
     this->value = rhs.getRawBits();
    return *this;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = value << nb_bits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = (int)roundf(value * (1 << nb_bits));
}

int Fixed::getRawBits(void) const
{
    return (this->value);
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "Assignation operator called" << std::endl;
    this->value = raw;
}

float Fixed::toFloat(void) const
{
    return ((float)(value / roundf((1 << nb_bits))));
}

int Fixed::toInt(void) const
{
    return (value >> nb_bits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return o;
}

Fixed::~Fixed()
{
    std::cout  << "Destructor called" << std::endl;
}