/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:30:28 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/21 14:30:30 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_RADSCORPION
#define DEF_RADSCORPION

    #include <iostream>
    #include "Enemy.hpp"

    class RadScorpion: public Enemy
    {
        public:
            RadScorpion();
            RadScorpion & operator=(RadScorpion const & rhs);
            RadScorpion(const RadScorpion & rhs);
            ~RadScorpion();

            void takeDamage(int);
    };

#endif
