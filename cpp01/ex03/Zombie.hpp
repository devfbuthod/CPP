/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 10:58:50 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/18 10:58:52 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_ZOMBIE
#define DEF_ZOMBIE

    #include <string>
    #include <iostream>

    class Zombie
    {
        public:
            Zombie();
            Zombie(std::string type, std::string name);
            Zombie(std::string name);
            std::string getName();
            std::string getType();
            void setType(std::string type);
            void setName(std::string name);
            void announce();

        private:
            std::string type;
            std::string name;
    };

#endif