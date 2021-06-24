/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 10:25:11 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/30 10:25:12 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    srand(time(NULL));
    ScavTrap michel("Michel");
    ScavTrap scavtrap("Scav-Trap");
    std::cout << std::endl;

    FragTrap bob("Bob");
    FragTrap claptrap("Frag-Trap");
    std::cout << std::endl;

    michel.rangedAttack("Scav-Trap");
    scavtrap.meleeAttack("Michel");
    std::cout << std::endl;

    bob.rangedAttack("Clap-Trap");
    claptrap.meleeAttack("Bob");
    std::cout << std::endl;
    
    std::cout << "Michel possède " << michel.getHitPoints() << " points de vie " << std::endl;
    michel.takeDamage(3);
    std::cout << "Michel possède " << michel.getHitPoints() << " points de vie " << std::endl;
    michel.takeDamage(25);
    std::cout << "Michel possède " << michel.getHitPoints() << " points de vie " << std::endl;
    michel.beRepaired(15);
    std::cout << "Michel possède " << michel.getHitPoints() << " points de vie " << std::endl;
    michel.beRepaired(35);
    std::cout << "Michel possède " << michel.getHitPoints() << " points de vie " << std::endl;
    michel.takeDamage(150);
    std::cout << "Michel possède " << michel.getHitPoints() << " points de vie " << std::endl;
    std::cout << std::endl;

    std::cout << "Bob possède " << bob.getHitPoints() << " points de vie " << std::endl;
    bob.takeDamage(25);
    std::cout << "Bob possède " << bob.getHitPoints() << " points de vie " << std::endl;
    bob.takeDamage(25);
    std::cout << "Bob possède " << bob.getHitPoints() << " points de vie " << std::endl;
    bob.beRepaired(15);
    std::cout << "Bob possède " << bob.getHitPoints() << " points de vie " << std::endl;
    bob.beRepaired(35);
    std::cout << "Bob possède " << bob.getHitPoints() << " points de vie " << std::endl;
    bob.takeDamage(150);
    std::cout << "Bob possède " << bob.getHitPoints() << " points de vie " << std::endl;
    std::cout << std::endl;

    michel.challengeNewcomer("l'idiot qui me regarde");
    std::cout << std::endl;

    claptrap.vaulthunter_dot_exe("Bob");
    claptrap.vaulthunter_dot_exe("Handsome Jack");
    claptrap.vaulthunter_dot_exe("Roland");
    claptrap.vaulthunter_dot_exe("Mad Moxxi");
    claptrap.vaulthunter_dot_exe("Ellie");
    std::cout << std::endl;
}
