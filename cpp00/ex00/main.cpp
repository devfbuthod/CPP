/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 10:28:16 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/15 10:28:22 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
 
int main(int argc, char* argv[])
{
    int i;
    int j;

    (void)argc;
    i = 1;
    j = 0;
    if (argv[1])
    {
        while (argv[i])
        {
            while (argv[i][j])
            {
                putchar(toupper(argv[i][j]));
                j++;
            }
            i++;
            j = 0;
        }
        std::cout << "\n";
    }
    else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
    return (0);
}