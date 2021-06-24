/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 13:07:26 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/04/06 13:07:28 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_SPACEMARINE
#define DEF_SPACEMARINE

    # include "ISpaceMarine.hpp"
    # include <iostream>

    class TacticalMarine : public ISpaceMarine
    {
        public:
            TacticalMarine();
            TacticalMarine & operator=(const TacticalMarine & rhs);
            TacticalMarine(const TacticalMarine & rhs);
            ~TacticalMarine();

            TacticalMarine* clone() const;
            void battleCry() const;
            void rangedAttack() const;
            void meleeAttack() const;
    };

#endif
