/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 11:57:57 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/23 11:57:58 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(): name("random form"), gSign(1), gExec(1)
{
    is_signed = false;
}

Form::Form(std::string name, int gSign, int gExec): name(name), gSign(gSign), gExec(gExec)
{
    if (gSign > 150 || gExec > 150)
        throw Form::GradeTooLowException();
    if (gSign < 1 || gExec < 1)
        throw Form::GradeTooHighException();
    is_signed = false;
}

Form & Form::operator=(const Form & rhs)
{
    if (this != &rhs)
    {
        if (gSign > 150 || gExec > 150)
            throw Form::GradeTooLowException();
        if (gSign < 1 || gExec < 1)
            throw Form::GradeTooHighException();
        std::string& str = const_cast<std::string&>(this->name);
		str = rhs.getName();
		this->is_signed = rhs.getIsSigned();
		int& n = const_cast<int&>(this->gSign);
		n = rhs.getSignGrade();
		n = const_cast<int&>(this->gExec);
		n = rhs.getExecGrade();
    }
    return *this;
}

Form::Form(const Form & rhs): name(rhs.name), gSign(rhs.gSign), gExec(rhs.gExec)
{
    is_signed = rhs.is_signed;
}

std::string Form::getName() const
{
    return (name);
}

bool Form::getIsSigned() const
{
    return (is_signed);
}

int Form::getSignGrade() const
{
    return (gSign);
}

int Form::getExecGrade() const
{
    return (gExec);
}

void Form::beSigned(const Bureaucrat & src)
{
    if (src.getGrade() <= this->getSignGrade())
        is_signed = true;
    else
        throw Form::GradeTooLowException();
}

std::ostream & operator<<( std::ostream & o, Form const & i )
{
	o << i.getName() << ", is signed : " << (i.getIsSigned() == true ? "yes" : "no") << ", grade to sign it : "<<i.getSignGrade() << ", grade to execute it : "<< i.getExecGrade() << std::endl;
	return o;
}

const char* Form::GradeTooHighException::exception() const throw ()
{
    return ("grade is too high");
}

const char* Form::GradeTooLowException::exception() const throw ()
{
    return ("grade is too low");
}

Form::~Form()
{

}
