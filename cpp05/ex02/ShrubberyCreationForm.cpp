/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 15:25:54 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/23 15:25:56 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 137, 145)
{
    setTarget("forest");
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 137, 145)
{
    setTarget(target);
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & rhs): Form("ShrubberyCreationForm", 137, 145)
{
    setTarget(rhs.getTarget());
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs)
{
    if (this != &rhs)
        Form::operator=(rhs);
	return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & rhs) const
{
    if (rhs.getGrade() <= getExecGrade() && getIsSigned())
    {
        std::ofstream objetfichier;
        std::string name = getTarget() + "_shrubbery";
        objetfichier.open(name, std::ios::out);
        objetfichier << "          .     .  .      +     .      .          .\n\
     .       .      .     #       .           .\n\
        .      .         ###            .      .      .\n\
      .      .   \"#:. .:##\"##:. .:#\"  .      .\n\
          .      . \"####\"###\"####\"  .\n\
       .     \"#:.    .:#\"###\"#:.    .:#\"  .        .       .\n\
  .             \"#########\"#########\"        .        .\n\
        .    \"#:.  \"####\"###\"####\"  .:#\"   .       .\n\
     .     .  \"#######\"\"##\"##\"\"#######\"                  .\n\
                .\"##\"#####\"#####\"##\"           .      .\n\
    .   \"#:. ...  .:##\"###\"###\"##:.  ... .:#\"     .\n\
      .     \"#######\"##\"#####\"##\"#######\"      .     .\n\
    .    .     \"#####\"\"#######\"\"#####\"    .      .\n\
            .     \"      000      \"    .     .\n\
       .         .   .   000     .        .       .\n\
.. .. ..................O000O........................ ......\n" << std::endl;
        objetfichier.close();
        std::cout << rhs.getName() << " executs " << getTarget() << std::endl;
    }
    else if (rhs.getGrade() <= getExecGrade())
        throw Form::FormNotSigned();
    else
        throw Form::GradeTooLowException();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{

}
