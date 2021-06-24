/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 10:36:40 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/25 10:36:41 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{

}

Intern::Intern(const Intern & rhs)
{
    static_cast<void>(rhs);
}

Intern & Intern::operator=(const Intern & rhs)
{
    static_cast<void>(rhs);
	return *this;
}

static Form* newPresidentialPardonForm(std::string const & target) { return (new PresidentialPardonForm(target));}
static Form* newRobotomyRequestForm(std::string const & target) { return (new RobotomyRequestForm(target));}
static Form* newShrubberyCreationForm(std::string const & target) { return (new ShrubberyCreationForm(target));}

Form* Intern::makeForm(std::string fName, std::string fTarget)
{
	(void)fTarget;
    int i = 0;
	typedef Form* (*marker)(std::string const & fTarget);
	typedef struct 
	{
		std::string fName; 
		marker create; 
	} 	nameForms;
	
	nameForms	formslist[]=
	{
		{"presidential pardon", &newPresidentialPardonForm},
		{"robotomy request", &newRobotomyRequestForm},
		{"shrubbery creation", &newShrubberyCreationForm}
	};
	while (i < 3)
	{
		if (formslist[i].fName == fName)
		{
			std::cout << "Intern creates " << fName << std::endl;
			Form* value = formslist[i].create(fName);
			return (value);
		}
		i++;
	}
	std::cout << fName << " is of unknown form type" << std::endl;
	return (NULL);
}

Intern::~Intern()
{

}