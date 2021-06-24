/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 15:15:02 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/24 15:15:04 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_HUMANA
#define DEF_HUMANA

    #include <string>
    #include <iostream>
    #include "Weapon.hpp"

    class HumanA
    {
        public:
            HumanA(std::string name, Weapon& weapon);
            void attack();
        private:
            std::string name;
            Weapon &weapon;
    };

#endif
