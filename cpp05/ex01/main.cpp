/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 11:57:39 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/23 11:57:41 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    std::cout << "-----Test sans probleme-----" << std::endl;
    try
    {
        Form formulaire = Form("formulaire", 120, 40);
    }
    catch (Form::GradeTooHighException & e)
    {
        std::cout << "ERROR: " << e.exception() << std::endl;
    }
    catch (Form::GradeTooLowException & e)
    {
        std::cout << "ERROR: " << e.exception() << std::endl;
    }
    std::cout << "-----Fin de test sans probleme-----" << std::endl;

    std::cout << std::endl;

    std::cout << "-----Test too low grade-----" << std::endl;
    try
    {
        Form formulaire = Form("formulaire", 151, 40);
    }
    catch (Form::GradeTooHighException & e)
    {
        std::cout << "ERROR: " << e.exception() << std::endl;
    }
    catch (Form::GradeTooLowException & e)
    {
        std::cout << "ERROR: " << e.exception() << std::endl;
    }
    std::cout << "-----Fin de test too low grade-----" << std::endl;

    std::cout << std::endl;

    std::cout << "-----Test too high grade-----" << std::endl;
    try
    {
        Form formulaire = Form("formulaire", 36, 0);
    }
    catch (Form::GradeTooHighException & e)
    {
        std::cout << "ERROR: " << e.exception() << std::endl;
    }
    catch (Form::GradeTooLowException & e)
    {
        std::cout << "ERROR: " << e.exception() << std::endl;
    }
    std::cout << "-----Fin de test too high grade-----" << std::endl;

    std::cout << std::endl;

    Form formulaire = Form("formulaire", 52, 14);
    std::cout << formulaire << std::endl;

    std::cout << "-----Test sans probleme-----" << std::endl;
    try
    {
        Bureaucrat homme = Bureaucrat("Pompidou", 2);
        Form formulaire = Form("formulaire", 120, 40);

        formulaire.beSigned(homme);
    }
    catch (Form::GradeTooHighException & e)
    {
        std::cout << "ERROR: " << e.exception() << std::endl;
    }
    catch (Form::GradeTooLowException & e)
    {
        std::cout << "ERROR: " << e.exception() << std::endl;
    }
    std::cout << "-----Fin de test sans probleme-----" << std::endl;

    std::cout << std::endl;

    std::cout << "-----Test too low grade-----" << std::endl;
    try
    {
        Bureaucrat homme = Bureaucrat("Pompidou", 2);
        Form formulaire = Form("formulaire", 1, 40);

        formulaire.beSigned(homme);
    }
    catch (Form::GradeTooHighException & e)
    {
        std::cout << "ERROR: " << e.exception() << std::endl;
    }
    catch (Form::GradeTooLowException & e)
    {
        std::cout << "ERROR: " << e.exception() << std::endl;
    }
    std::cout << "-----Fin de test too low grade-----" << std::endl;

    std::cout << std::endl;

    Bureaucrat homme1 = Bureaucrat("Pompidou", 1);
    Bureaucrat stagiaire = Bureaucrat("Stagiaire", 150);
    Form formulaire2 = Form("formulaire pour le covid", 2, 40);

    homme1.signForm(formulaire2);
    stagiaire.signForm(formulaire2);
}
