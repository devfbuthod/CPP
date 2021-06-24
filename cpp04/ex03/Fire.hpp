/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fire.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 13:52:52 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/21 13:52:54 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_FIRE
#define DEF_FIRE

    # include <iostream>
    # include "AMateria.hpp"
    # include "ICharacter.hpp"

    class Fire : public AMateria
    {
        public:
            Fire();
            Fire & operator=(const Fire & rhs);
            Fire(const AMateria &rhs);
            virtual ~Fire();

            void use(ICharacter& target);
            AMateria* clone() const { return new Fire(*this); };
    };

#endif
