/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:30:08 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/21 14:30:10 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_POWERFIST
#define DEF_POWERFIST

    #include <iostream>
    #include "AWeapon.hpp"

    class PowerFist: public AWeapon
    {
        public:
            PowerFist();
            PowerFist & operator=(PowerFist const & plasmarifle);
            PowerFist(const PowerFist & plasmarifle);
            ~PowerFist();

            void attack() const;
    };

#endif
