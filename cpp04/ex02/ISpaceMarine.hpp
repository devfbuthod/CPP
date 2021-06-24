/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 13:06:48 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/04/06 13:06:49 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_ISPACEMARINE
#define DEF_ISPACEMARINE

    class ISpaceMarine
    {
        public:
            virtual ~ISpaceMarine() {}
            virtual ISpaceMarine* clone() const = 0;
            virtual void battleCry() const = 0;
            virtual void rangedAttack() const = 0;
            virtual void meleeAttack() const = 0;
    };

#endif
