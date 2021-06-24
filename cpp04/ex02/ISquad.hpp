/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 13:06:56 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/04/06 13:06:58 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_ISQUAD
#define DEF_ISQUAD

    #include "ISpaceMarine.hpp"

    class ISquad
    {
        public:
            virtual int getCount() const = 0;
            virtual ISpaceMarine* getUnit(int) const = 0;
            virtual int push(ISpaceMarine* newbie) = 0;
            virtual ~ISquad() {}
    };

#endif