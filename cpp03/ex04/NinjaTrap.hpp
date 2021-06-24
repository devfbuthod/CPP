/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:07:32 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/29 14:07:34 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_NINJATRAP
#define DEF_NINJATRAP

    #include <iostream>
    #include "ClapTrap.hpp"
    #include "ScavTrap.hpp"
    #include "FragTrap.hpp"

    class NinjaTrap : virtual public ClapTrap
    {
        public:
            NinjaTrap();
            NinjaTrap(const NinjaTrap&);
            NinjaTrap & operator=(NinjaTrap const & rhs);
            ~NinjaTrap();

            NinjaTrap(std::string name);
            void rangedAttack(std::string const & target);
            void meleeAttack(std::string const & target);
            void ninjaShoebox(ScavTrap const & target);
            void ninjaShoebox(NinjaTrap const & target);
            void ninjaShoebox(FragTrap const & target);
            void ninjaShoebox(ClapTrap const & target);
    };

#endif