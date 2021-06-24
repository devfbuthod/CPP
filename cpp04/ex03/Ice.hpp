/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 13:11:59 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/19 13:12:00 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_ICE
#define DEF_ICE

    # include <iostream>
    # include "AMateria.hpp"
    # include "ICharacter.hpp"

    class Ice : public AMateria
    {
        public:
            Ice();
            Ice & operator=(const Ice & rhs);
            Ice(const AMateria &rhs);
            virtual ~Ice();

            void use(ICharacter& target);
            AMateria* clone() const { return new Ice(*this); };
    };

#endif
