/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 10:59:35 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/18 10:59:36 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

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

void ZombieEvent::randomChump()
{
    std::string name = generate_name();
    Zombie* zombie = new Zombie("randomized", name);
    zombie->announce();

    delete(zombie);
}

void ZombieEvent::setZombieType(std::string type)
{
    this->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    std::string type;

    std::cout << "Insérez le type du zombie :" << std::endl;
    std::getline(std::cin, type);
    setZombieType(type);
    Zombie* zombie = new Zombie(type, name);

    return (zombie);
}

ZombieEvent::ZombieEvent()
{
    std::string name;

    std::cout << "Insérez un nom pour le zombie" << std::endl;
    std::getline(std::cin, name);
    zombie = newZombie(name);
    zombie->announce();

    delete(zombie);
};
