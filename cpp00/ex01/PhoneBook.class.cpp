/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 13:17:39 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/15 13:17:40 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream> 

PhoneBook::PhoneBook(){}

PhoneBook::PhoneBook(std::string fname, std::string lname, std::string nname, 
            std::string log, std::string p_number, std::string b_date, 
            std::string f_meal, std::string underw_c, std::string d_secret)
{
    this->fname = fname;
    this->lname = lname;
    this->nname = nname;
    this->log = log;
    this->p_number = p_number;
    this->b_date = b_date;
    this->f_meal = f_meal;
    this->underw_c = underw_c;
    this->d_secret = d_secret;
}

std::string PhoneBook::getFname() const
{
    return fname;
}

std::string PhoneBook::getLname() const
{
    return lname;
}

std::string PhoneBook::getNname() const
{
    return nname;
}

std::string PhoneBook::getLog() const
{
    return log;
}

std::string PhoneBook::getPnumber() const
{
    return p_number;
}

std::string PhoneBook::getFmeal() const
{
    return f_meal;
}

std::string PhoneBook::getBdate() const
{
    return b_date;
}

std::string PhoneBook::getUnderwc() const
{
    return underw_c;
}

std::string PhoneBook::getDsecret() const
{
    return d_secret;
}

void ft_format(std::string str)
{
    int i;

    i = 0;
    if (str.length() > 10)
        std::cout << str.substr(0, 9) << ".|";
    else
    {
        while (str.length() + i < 10)
        {
            std::cout << " ";
            i++;
        }
        std::cout << str;
        std::cout << "|";
    }
}

PhoneBook PhoneBook::add_new_phone()
{
    std::string fname, lname, nname, log, p_number, b_date, f_meal, underw_c, d_secret;

    std::cout << "Entrez un prénom : " << std::endl;
    std::cin >> fname;
    std::cin.clear();
    std::cin.ignore(10000,'\n');
    std::cout << "Entrez un nom : " << std::endl;
    std::cin >> lname;
    std::cin.clear();
    std::cin.ignore(10000,'\n');
    std::cout << "Entrez un surnom : " << std::endl;
    std::cin >> nname;
    std::cin.clear();
    std::cin.ignore(10000,'\n');
    std::cout << "Entrez un numero de téléphone : " << std::endl;
    std::cin >> p_number;
    std::cin.clear();
    std::cin.ignore(10000,'\n');
    std::cout << "Entrez une date d'anniversaire : " << std::endl;
    std::cin >> b_date;
    std::cin.clear();
    std::cin.ignore(10000,'\n');
    std::cout << "Entrez un plat préféré : " << std::endl;
    std::cin >> f_meal;
    std::cin.clear();
    std::cin.ignore(10000,'\n');
    std::cout << "Entrez la couleur de sous-vetement : " << std::endl;
    std::cin >> underw_c;
    std::cin.clear();
    std::cin.ignore(10000,'\n');
    std::cout << "Entrez un sombre secret : " << std::endl;
    std::cin >> d_secret;

    PhoneBook pb = PhoneBook(fname, lname, nname, log, p_number, b_date, f_meal, underw_c, d_secret);
    return pb;
}

void PhoneBook::search_book_phone(PhoneBook tab, int i)
{
    std::cout << "|         " << i << "|";
    ft_format(tab.getFname());
    ft_format(tab.getLname());
    ft_format(tab.getNname());
    std::cout << std::endl;
}

void PhoneBook::print_infos()
{
    std::cout << getFname() << std::endl;
    std::cout << getLname() << std::endl;
    std::cout << getNname() << std::endl;
    std::cout << getPnumber() << std::endl;
    std::cout << getFmeal() << std::endl;
    std::cout << getBdate() << std::endl;
    std::cout << getUnderwc() << std::endl;
    std::cout << getDsecret() << std::endl;
}

PhoneBook::~PhoneBook()
{
    //std::cout << "Destruction de PhoneBook" << std::endl;
}
