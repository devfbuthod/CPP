/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/20 12:22:58 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/20 12:23:00 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_ZOMBIEHORDE
#define DEF_ZOMBIEHORDE

    #include "Zombie.hpp"

    class ZombieHorde
    {
        public:
            ZombieHorde(int n);
            void announce();
            ~ZombieHorde();

        private:
            Zombie* zombies;
            int nb_zombies;
    };

#endif