/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 10:25:02 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/30 10:25:04 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */


#ifndef DEF_SCAVTRAP
#define DEF_SCAVTRAP

    #include <iostream>
    #include "ClapTrap.hpp"

    class ScavTrap : public ClapTrap
    {
        public:
            ScavTrap();
            ScavTrap(const ScavTrap&);
            ScavTrap & operator=(ScavTrap const & rhs);
            ~ScavTrap();

            ScavTrap(std::string name);
            void rangedAttack(std::string const & target);
            void meleeAttack(std::string const & target);
            void challengeNewcomer(std::string const & target);
    };

#endif