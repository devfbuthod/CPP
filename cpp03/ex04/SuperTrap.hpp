/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 14:07:32 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/29 14:07:34 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_SUPERTRAP
#define DEF_SUPERTRAP

    #include "FragTrap.hpp"
    #include "NinjaTrap.hpp"

    class SuperTrap : public NinjaTrap, public FragTrap
    {
        public:
            SuperTrap();
            SuperTrap(const SuperTrap&);
            SuperTrap & operator=(SuperTrap const & rhs);
            ~SuperTrap();

            SuperTrap(std::string name);
            void rangedAttack(std::string const & target);
            void meleeAttack(std::string const & target);
    };

#endif