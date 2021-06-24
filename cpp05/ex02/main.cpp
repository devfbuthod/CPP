/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 15:24:06 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/23 15:24:08 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
    ShrubberyCreationForm form = ShrubberyCreationForm("Arbre");
    RobotomyRequestForm form2 = RobotomyRequestForm("Robotomise moi ca");
    PresidentialPardonForm form3 = PresidentialPardonForm("The pardon");
    Bureaucrat homme = Bureaucrat("Pompidou", 120);
    Bureaucrat homme2 = Bureaucrat("Pompon", 80);
    Bureaucrat homme3 = Bureaucrat("Chef", 1);

    try
    {
        form.execute(homme);
    }
    catch (Form::FormNotSigned & e)
    {
        std::cout << "ERROR: " << e.exception() << std::endl;
    }
    catch (Form::GradeTooLowException & e)
    {
        std::cout << "ERROR: " << e.exception() << std::endl;
    }

    try
    {
        form2.execute(homme2);
    }
    catch (Form::FormNotSigned & e)
    {
        std::cout << "ERROR: " << e.exception() << std::endl;
    }
    catch (Form::GradeTooLowException & e)
    {
        std::cout << "ERROR: " << e.exception() << std::endl;
    }

    try
    {
        form3.beSigned(homme3);
        homme3.executeForm(form3);
    }
    catch (Form::FormNotSigned & e)
    {
        std::cout << "ERROR: " << e.exception() << std::endl;
    }
    catch (Form::GradeTooLowException & e)
    {
        std::cout << "ERROR: " << e.exception() << std::endl;
    }


    form.beSigned(homme3);
    form2.beSigned(homme3);
    form3.beSigned(homme3);

    homme3.executeForm(form);
    homme3.executeForm(form2);
    homme3.executeForm(form3);
}
