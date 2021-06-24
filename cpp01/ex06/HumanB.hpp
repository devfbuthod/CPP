/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 15:15:15 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/24 15:15:16 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_HUMANB
#define DEF_HUMANB

    #include <string>
    #include <iostream>
    #include "Weapon.hpp"

    class HumanB
    {
        public:
            HumanB(std::string name);
            void setWeapon(Weapon& weap);
            void attack();
        private:
            std::string name;
            Weapon *weapon;
    };

#endif