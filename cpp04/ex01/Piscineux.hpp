/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Piscineux.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:14:09 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/21 14:14:10 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_PISCINEUX
#define DEF_PISCINEUX

    #include <iostream>
    #include "Enemy.hpp"

    class Piscineux: public Enemy
    {
        public:
            Piscineux();
            Piscineux & operator=(Piscineux const & rhs);
            Piscineux(const Piscineux & rhs);
            ~Piscineux();

            void takeDamage(int);
    };

#endif
