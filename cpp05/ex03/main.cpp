/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 10:38:47 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/25 10:38:49 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    Intern someRandomIntern;
    Bureaucrat chef("JIMMY", 1);
    Form* rrf;

    std::cout << "-------Tests qui fonctionnent-------" << std::endl;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    rrf = someRandomIntern.makeForm("presidential pardon", "Window");
    rrf = someRandomIntern.makeForm("shrubbery creation", "Yolo");

    std::cout << std::endl;

    std::cout << "-------Tests qui ne fonctionnent pas-------" << std::endl;
    rrf = someRandomIntern.makeForm("robotomyrequest", "Bender");
    rrf = someRandomIntern.makeForm("presidential      pardon", "Window");
    rrf = someRandomIntern.makeForm("super", "Yolo");
}