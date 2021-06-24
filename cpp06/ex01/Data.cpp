/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 15:46:50 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/29 15:46:52 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

void * serialize(void)
{
    Data *data = new Data;

    std::string alpha_num = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    
    data->nb_alea = rand() % 100;
    for (int i = 0; i < 8; i++)
        data->serial += alpha_num[rand() % alpha_num.length()];
    for (int i = 0; i < 8; i++)
        data->serial2 += alpha_num[rand() % alpha_num.length()];
    
    std::cout << "Serial : " << data->serial << std::endl;
    std::cout << "Nombre aleatoire : " << data->nb_alea << std::endl;
    std::cout << "Serial2 : " << data->serial2 << std::endl;

    return (reinterpret_cast<void*>(data));
}

Data * deserialize(void * raw)
{
    return (reinterpret_cast<Data*>(raw));
}

int main()
{
    srand(time(NULL));
    
    Data *data = deserialize(serialize());
    std::cout << "Serial : " << data->serial << std::endl;
    std::cout << "Nombre aleatoire : " << data->nb_alea << std::endl;
    std::cout << "Serial2 : " << data->serial2 << std::endl;
}