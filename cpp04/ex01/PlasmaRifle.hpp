/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:29:57 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/21 14:29:59 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_PLASMARIFLE
#define DEF_PLASMARIFLE

    #include <iostream>
    #include "AWeapon.hpp"

    class PlasmaRifle: public AWeapon
    {
        public:
            PlasmaRifle();
            PlasmaRifle & operator=(PlasmaRifle const & plasmarifle);
            PlasmaRifle(const PlasmaRifle & plasmarifle);
            ~PlasmaRifle();

            void attack() const;
    };

#endif
