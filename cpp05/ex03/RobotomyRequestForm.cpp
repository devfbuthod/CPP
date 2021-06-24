/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 15:25:38 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/23 15:25:41 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(): Form("RobotomyRequestForm", 72, 45)
{
    setTarget("the-robotomized");
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45)
{
    setTarget(target);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & rhs): Form("RobotomyRequestForm", 72, 45)
{
    setTarget(rhs.getTarget());
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs)
{
    if (this != &rhs)
        Form::operator=(rhs);
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat & rhs) const
{
    if (rhs.getGrade() <= getExecGrade() && getIsSigned())
    {
        std::cout << "Bz --- Bzzzz -- Bzzzz -- Bz Bz..." << std::endl;
        std::cout << rhs.getName() << " a bien été robotomizée" << std::endl;
        std::cout << rhs.getName() << " executs " << getTarget() << std::endl;
    }
    else if (rhs.getGrade() <= getExecGrade())
        throw Form::FormNotSigned();
    else
        throw Form::GradeTooLowException();
}

RobotomyRequestForm::~RobotomyRequestForm()
{

}
