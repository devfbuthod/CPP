/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:30:40 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/21 14:30:41 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_SUPERMUTANT
#define DEF_SUPERMUTANT

    #include <iostream>
    #include "Enemy.hpp"

    class SuperMutant: public Enemy
    {
        public:
            SuperMutant();
            SuperMutant & operator=(SuperMutant const & rhs);
            SuperMutant(const SuperMutant & rhs);
            ~SuperMutant();

            void takeDamage(int);
    };

#endif
