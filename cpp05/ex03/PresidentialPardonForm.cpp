/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 15:25:09 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/23 15:25:10 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(): Form("Pardon", 25, 5)
{
    setTarget("the-pardon");
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("Pardon", 25, 5)
{
    setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & rhs): Form("Pardon", 25, 5)
{
    setTarget(rhs.getTarget());
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & rhs)
{
    if (this != &rhs)
        Form::operator=(rhs);
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat & rhs) const
{
    if (rhs.getGrade() <= getExecGrade() && getIsSigned())
    {
        std::cout << rhs.getName() << " a été pardonnée par Zafod Beeblebrox" << std::endl;
        std::cout << rhs.getName() << " executs " << getTarget() << std::endl;
    }
    else if (rhs.getGrade() <= getExecGrade())
        throw Form::FormNotSigned();
    else
        throw Form::GradeTooLowException();
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}
