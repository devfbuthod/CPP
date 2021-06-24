/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 10:59:46 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/18 10:59:48 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_DEF
#define ZOMBIEEVENT_DEF

    #include <string>
    #include <iostream>
    #include "Zombie.hpp"

    class ZombieEvent
    {
        public:
            ZombieEvent();
            void setZombieType(std::string type);
            Zombie* newZombie(std::string name);
            void randomChump();

        private:
            std::string type;
            Zombie* zombie;
    };
#endif