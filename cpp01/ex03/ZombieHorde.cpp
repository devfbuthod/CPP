/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 12:26:15 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/20 12:26:17 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

std::string generate_name()
{
    std::string name;
    std::string alphabet = "abcdefghijklmnopqrstuvwxyz";
    int length_name = (rand()%15) + 5;
    int i = 0;

    while (i <= length_name)
    {
        name = name + alphabet[rand()%26];
        i++;
    }
    return (name);
}

void ZombieHorde::announce()
{
    int i;

    i = 0;
    while (i < nb_zombies)
    {
        this->zombies[i].announce();
        i++;
    }
}

ZombieHorde::ZombieHorde(int n)
{
    int i;
    this->nb_zombies = n;
    this->zombies = new Zombie[n];

    i = 0;
    while(i < n)
    {
        this->zombies[i].setName(generate_name());
        this->zombies[i].setType("randomized");
        i++;
    }
}

ZombieHorde::~ZombieHorde()
{
    delete[] this->zombies;
}