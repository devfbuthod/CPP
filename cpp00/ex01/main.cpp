/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpp01.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:05:40 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/15 11:05:42 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include <iostream>

int main(void)
{
    std::string cmd_user;
    PhoneBook tab[7];
    int nb_pb;
    char num;
    int i;

    nb_pb = 0;
    i = 0;
    while (cmd_user.compare("EXIT"))
    {
        std::cout << "Insérez une commande :" << std::endl;
        std::cin >> cmd_user;
        if (cmd_user.compare("ADD") == 0)
        {
            if (nb_pb == 8)
                std::cout << "La taille maximale du nombre d'utilisateur a été atteinte" << std::endl;
            else
            {
                tab[nb_pb] = tab[nb_pb].add_new_phone();
                nb_pb++;
            }
        }
        else if (cmd_user.compare("SEARCH") == 0)
        {
            while (i < nb_pb)
            {
                tab[i].search_book_phone(tab[i], i);
                i++;
            }
            i = 0;
            std::cout << "A quelle index souhaitez-vous vous rendre ? :" << std::endl;
            std::cin >> num;
            if (isdigit(num))
            {
                i = (int)num - 48;
                if (i < nb_pb)
                    tab[i].print_infos();
                else
                    std::cout << "L'index renseigné n'existe pas" << std::endl;
                i = 0;
            }
            else
                std::cout << "Merci de renseigner un chiffre" << std::endl;
        }
        std::cin.clear();
        std::cin.ignore(10000,'\n');
    }
    return 0;
}