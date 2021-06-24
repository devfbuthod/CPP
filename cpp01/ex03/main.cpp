/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 13:16:07 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/20 13:16:09 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main()
{
    int i;
    int n;

    i = 0;
    std::cout << "Combien souhaitez vous de zombies dans votre horde ? :" << std::endl;
    std::cin >> n;
    ZombieHorde* zombies = new ZombieHorde(n);
    zombies->announce();

    delete(zombies);
    return (0);
}