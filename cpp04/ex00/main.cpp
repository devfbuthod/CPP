/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:23:55 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/21 14:23:57 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "NastyThief.hpp"

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
	Sorcerer bib("Gandalf", "the Grey");
	std::cout << std::endl;

	std::cout << bib << std::endl;
	std::cout << bib.getName() << " " << bib.getTitle() << " uses Doppelganger" << std::endl;
	bib = robert;
	std::cout << bib;
	std::cout << &bib << " <= bib | robert => " << &robert << std::endl;
	std::cout << std::endl;

	Victim jim("Jimmy");
	Peon joe("Joe");
	NastyThief bob("Bob");

	std::cout << robert << jim << joe << bob;
	std::cout << std::endl;

	std::cout << "--- Rober polymorph ---" << std::endl;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(bob);
	std::cout << std::endl;

	std::cout << "--- Victim get polymorphed ---" << std::endl;
	jim.getPolymorphed();
	joe.getPolymorphed();
	bob.getPolymorphed();
	std::cout << "---  ---" << std::endl;
	
	return 0;
}
