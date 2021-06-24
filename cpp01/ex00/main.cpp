/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 12:18:13 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/17 12:18:15 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony ponyOnTheStack(std::string name, int length, int weight)
{
    Pony pony1 = Pony(name, length, weight);

    std::cout << pony1.getNamePony() << std::endl;
    std::cout << pony1.getLengthPony() << std::endl;
    std::cout << pony1.getWeightPony() << std::endl;

    return (pony1);
}

Pony* ponyOnTheHeap(std::string name, int length, int weight)
{
    Pony* pony2 = new Pony(name, length, weight);

    std::cout << pony2->getNamePony() << std::endl;
    std::cout << pony2->getLengthPony() << std::endl;
    std::cout << pony2->getWeightPony() << std::endl;

    return (pony2);
}

int main()
{
    Pony pony1 = ponyOnTheStack("Hector", 143, 200);
    Pony* pony2 = ponyOnTheHeap("Marcel", 148, 210);

    delete(pony2);
    return (0);
}