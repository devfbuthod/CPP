/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 14:40:07 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/25 14:40:09 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <math.h>
#include <limits.h>
#include <float.h>
#include <iomanip>

int put_error(int i)
{
    if (i == 0)
        std::cout << "Nombre de parametre rentre incorrect" << std::endl;
    else if (i == 1)
        std::cout << "La chaine doit imperativement etre un caractere, un int, un float ou encore un double" << std::endl;
    return (1);
}

int		to_get_prec( std::string str )
{
	int set = 0;
	int prev = str.find(".");

	if (prev >= 0 && str[prev + 1])
	{
		std::string trunc = str.substr(prev + 1, str.length());
		for (int prec = 0; (prec < static_cast<int>(trunc.length()) && trunc[prec + 1] != 'f'); prec++)
			set = prec + 1;
	}
	return (set);
}

void print_c(std::string str, double nb)
{
    (void)str;
    std::cout << "char : ";
    if (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "+inf" || str == "nan")
        std::cout << "impossible" << std::endl;
    else
    {
        if (isprint(nb))
            std::cout << static_cast<char>(nb) << std::endl;
        else
            std::cout << "Non displayable" << std::endl;
    }
}

void print_i(std::string str, double nb)
{
    if (nb > INT_MAX)
        std::cout << "int : +inf" << std::endl;
    else if (nb < INT_MIN)
        std::cout << "int : -inf" << std::endl;
    else if (str == "-inff" || str == "+inff" || str == "nanf" || str == "-inf" || str == "+inf" || str == "nan")
        std::cout << "int : impossible" << std::endl;
    else
    {
        std::cout << "int : " << static_cast<int>(nb) << std::endl;
    }
}

void print_f(std::string str, double nb)
{
    int set = to_get_prec( str );

    std::cout << "float : ";
    if (nb > FLT_MAX)
        std::cout << "+inff" << std::endl;
    else if (nb > FLT_MAX)
        std::cout << "-inff" << std::endl;
    else if (set > 0)
    {
        if (str[str.length() - 1] == 'f')
            set += 1;
        std::cout << std::fixed << std::setprecision(set) << static_cast<float>(nb) << "f" << std::endl;
    }
    else
        std::cout << std::fixed << std::setprecision(1) << static_cast<float>(nb) << "f" << std::endl;
}

void print_d(std::string str, double nb)
{
    int set = to_get_prec(str);
    std::cout << "double : ";
    if (set > 0)
    {
        if (str[str.length() - 1] == 'f')
            set += 1;
        std::cout << std::fixed << std::setprecision(set) << static_cast<double>(nb) << std::endl;
    }
    else
        std::cout << std::fixed << std::setprecision(1) << static_cast<double>(nb) <<  std::endl;
}

int is_c(std::string str)
{
    if (str.length() == 1)
        if (isprint(str[0]) && !isdigit(str[0]))
            return (1);
    return (0);
}

int is_i(std::string str)
{
    int i;

    i = 0;
    if (str[0] == '+' || str[0] == '-')
        i += 1;
    while (str[i] && isdigit(str[i]))
        i++;
    if (i == (int)str.length())
        return (1);
    return (0);
}

int is_f(std::string str)
{
    int i;
    int point;
    int e;

    point = 0;
    i = 0;
    e = 0;
    if (str[0] == '+' || str[0] == '-')
        i += 1;
    while (str[i] && ((isdigit(str[i]) || str[i] == '.') || (str[i] == 'e' || str[i] == '+' || str[i] == '-')))
    {
        if (str[i] == '.')
        {
            if (point == 0)
                point = 1;
            else
                return (0);
        }
        else if (str[i] == 'e')
        {
            if (e == 0)
                e = 1;
            else
                return (0);
        }
        i++;
    }
    if (str[i] == 'f')
        i++;
    if (i == (int)str.length())
        return (1);
    return (0);
}

int is_d(std::string str)
{
    int i;
    int point;
    int e;

    point = 0;
    i = 0;
    e = 0;
    if (str[0] == '+' || str[0] == '-')
        i += 1;
    while (str[i] && ((isdigit(str[i]) || str[i] == '.') || (str[i] == 'e' || str[i] == '+' || str[i] == '-')))
    {
        if (str[i] == '.')
        {
            if (point == 0)
                point = 1;
            else
                return (0);
        }
        else if (str[i] == 'e')
        {
            if (e == 0)
                e = 1;
            else
                return (0);
        }
        i++;
    }
    if (i == (int)str.length())
        return (1);
    return (0);
}

int is_inf(std::string str)
{
    if (str == "-inf" || str == "+inf" || str == "nan" || str == "-inff" || str == "+inff" || str == "nanf")
        return (1);
    return (0);
}

int main(int ac, char **av)
{
    double nb;

    if (ac != 2)
        return (put_error(0));
    if (is_c(av[1]))
        nb = av[1][0];
    else if (((is_i(av[1]) || is_f(av[1]) || is_d(av[1])) && ((static_cast<double>(atof(av[1])) <= DBL_MAX) && ((static_cast<double>(atof(av[1])) >= -DBL_MAX)))) || is_inf(av[1]))
        nb = atof(av[1]);
    else
        return (put_error(1));
    print_c(av[1], nb);
    print_i(av[1], nb);
    print_f(av[1], nb);
    print_d(av[1], nb);
    return (0);
}