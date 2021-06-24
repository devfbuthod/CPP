/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 09:26:59 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/23 09:27:00 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    std::cout << "-----Test sans probleme-----" << std::endl;
    try
    {
        Bureaucrat homme = Bureaucrat("Pompidou", 149);
    }
    catch (Bureaucrat::GradeTooHighException & e)
    {
        std::cout << "ERROR: " << e.exception() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException & e)
    {
        std::cout << "ERROR: " << e.exception() << std::endl;
    }
    std::cout << "-----Fin de test sans probleme-----" << std::endl;

    std::cout << std::endl;

    std::cout << "-----Test too low grade-----" << std::endl;
    try
    {
        Bureaucrat homme = Bureaucrat("Pompidou", 151);
    }
    catch (Bureaucrat::GradeTooHighException & e)
    {
        std::cout << "ERROR: " << e.exception() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException & e)
    {
        std::cout << "ERROR: " << e.exception() << std::endl;
    }
    std::cout << "-----Fin de test too low grade-----" << std::endl;

    std::cout << std::endl;

    std::cout << "-----Test too high grade-----" << std::endl;
    try
    {
        Bureaucrat homme = Bureaucrat("Pompidou", 0);
    }
    catch (Bureaucrat::GradeTooHighException & e)
    {
        std::cout << "ERROR: " << e.exception() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException & e)
    {
        std::cout << "ERROR: " << e.exception() << std::endl;
    }
    std::cout << "-----Fin de test too high grade-----" << std::endl;

    std::cout << std::endl;

    std::cout << "-----Test increment/decrement without parameters-----" << std::endl;
    try
    {
        Bureaucrat homme;
        std::cout << homme << std::endl;
        homme.increment();
        homme.increment();
        std::cout << homme << std::endl;
        homme.decrement();
        homme.decrement();
        homme.decrement();
        homme.decrement();
        std::cout << homme << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException & e)
    {
        std::cout << "ERROR: " << e.exception() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException & e)
    {
        std::cout << "ERROR: " << e.exception() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "-----Test increment/decrement with parameters-----" << std::endl;
    Bureaucrat homme2 = Bureaucrat("Pompidou", 28);
    try
    {
        std::cout << homme2 << std::endl;
        homme2.increment();
        homme2.increment();
        std::cout << homme2 << std::endl;
        homme2.decrement();
        homme2.decrement();
        homme2.decrement();
        homme2.decrement();
        std::cout << homme2 << std::endl;
    }
    catch (Bureaucrat::GradeTooHighException & e)
    {
        std::cout << "ERROR: " << e.exception() << std::endl;
    }
    catch (Bureaucrat::GradeTooLowException & e)
    {
        std::cout << "ERROR: " << e.exception() << std::endl;
    }
    std::cout << "-----Test copy constructor-----" << std::endl;
    Bureaucrat homme3 = Bureaucrat(homme2);
    std::cout << homme3 << std::endl;
    std::cout << std::endl;
    Bureaucrat homme4 = homme3;
    std::cout << homme3 << std::endl;

    return (0);
}
