/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KeyBoardGun.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:07:26 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/21 14:07:30 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_KEYBOARDGUN
#define DEF_KEYBOARDGUN

    #include <iostream>
    #include "AWeapon.hpp"

    class KeyboardGun: public AWeapon
    {
        public:
            KeyboardGun();
            KeyboardGun & operator=(KeyboardGun const & plasmarifle);
            KeyboardGun(const KeyboardGun & plasmarifle);
            ~KeyboardGun();

            void attack() const;
    };

#endif