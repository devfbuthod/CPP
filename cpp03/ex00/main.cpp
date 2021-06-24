/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:07:37 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/29 14:07:39 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    srand(time(NULL));
    FragTrap bob("Bob");
    FragTrap claptrap("Clap-Trap");
    std::cout << std::endl;

    bob.rangedAttack("Clap-Trap");
    claptrap.meleeAttack("Bob");
    std::cout << std::endl;
    
    std::cout << "Bob possède " << bob.getHitPoints() << " points de vie " << std::endl;
    bob.takeDamage(5);
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

    claptrap.vaulthunter_dot_exe("Bob");
    claptrap.vaulthunter_dot_exe("Handsome Jack");
    claptrap.vaulthunter_dot_exe("Roland");
    claptrap.vaulthunter_dot_exe("Mad Moxxi");
    claptrap.vaulthunter_dot_exe("Ellie");
    std::cout << std::endl;

    return (0);
}