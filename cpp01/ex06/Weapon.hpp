/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 15:15:30 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/24 15:15:32 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_WEAPON
#define DEF_WEAPON

    #include <string>
    #include <iostream>

    class Weapon
    {
        public:
            Weapon();
            Weapon(std::string type);
            const std::string getType() const;
            void setType(std::string type);
        private:
            std::string type;
    };

#endif