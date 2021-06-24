/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:07:32 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/29 14:07:34 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_FRAGTRAP
#define DEF_FRAGTRAP

    #include <iostream>
    #include "ClapTrap.hpp"

    class FragTrap : virtual public ClapTrap
    {
        public:
            FragTrap();
            FragTrap(const FragTrap&);
            FragTrap & operator=(FragTrap const & rhs);
            ~FragTrap();

            FragTrap(std::string name);
            void rangedAttack(std::string const & target);
            void meleeAttack(std::string const & target);
            void vaulthunter_dot_exe(std::string const & target);
    };

#endif