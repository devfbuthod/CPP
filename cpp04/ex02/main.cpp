/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 13:07:32 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/04/06 13:07:34 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"
#include "Squad.hpp"

int main() 
{
    ISpaceMarine* bob = new TacticalMarine();
	ISpaceMarine* jim = new AssaultTerminator();
	TacticalMarine *b = new TacticalMarine();
	AssaultTerminator *j = new AssaultTerminator();
	ISpaceMarine* bib = new TacticalMarine(*b);
	ISpaceMarine* beb = new AssaultTerminator(*j);
	ISpaceMarine* jon;
	ISpaceMarine* jun;
	jon = jim;
	jun = bob;
	std::cout << std::endl;

	ISquad* squad = new Squad;
	squad->push(bob);
	squad->push(jim);
	squad->push(bib);
	squad->push(beb);
	std::cout << std::endl;

	for (int i = 0; i < squad->getCount(); i++)
	{
		ISpaceMarine* cur = squad->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}

	std::cout << std::endl;

	delete squad;
	delete j;
	delete b;
	return (0);
}