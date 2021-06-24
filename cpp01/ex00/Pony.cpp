/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:01:21 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/17 11:01:27 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>

Pony::Pony(std::string name, int length, int weight): name(name), length(length), weight(weight)
{
    std::cout << "Création de l'objet Pony terminée" << std::endl;
}

std::string Pony::getNamePony()
{
    return (name);
}

int Pony::getLengthPony()
{
    return (length);
}

int Pony::getWeightPony()
{
    return (weight);
}

Pony::~Pony()
{
    std::cout << "Destruction de l'objet terminé" << std::endl;
}