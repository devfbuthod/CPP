/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 09:26:46 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/23 09:26:48 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): name("random_guy")
{
    grade = 150;
}

Bureaucrat::Bureaucrat(std::string bName, int bGrade): name(bName)
{
    if (bGrade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (bGrade < 1)
        throw Bureaucrat::GradeTooHighException();
    else
        grade = bGrade;
}

Bureaucrat::Bureaucrat(const Bureaucrat & rhs): name(rhs.name)
{
    grade = rhs.grade;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & rhs)
{
    if (this == &rhs)
        return(*this);
	return *new(this) Bureaucrat(rhs);
}

std::string Bureaucrat::getName() const
{
    return (name);
}

int Bureaucrat::getGrade() const
{
    return (grade);
}

void    Bureaucrat::increment()
{
    if (grade > 1)
        grade = grade - 1;
    else
        throw Bureaucrat::GradeTooHighException();
}

void    Bureaucrat::decrement()
{
    if (grade < 150)
        grade = grade + 1;
    else
        throw Bureaucrat::GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::exception() const throw ()
{
	return ("grade is too high");
}

const char* Bureaucrat::GradeTooLowException::exception() const throw ()
{
	return ("grade is too low");
}

std::ostream & operator<<( std::ostream & o, Bureaucrat const & i )
{
	o << i.getName() << ", bureaucrat grade " << i.getGrade();
	return o;
}

Bureaucrat::~Bureaucrat()
{

}