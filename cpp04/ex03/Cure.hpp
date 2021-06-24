/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 13:11:34 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/19 13:11:36 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_CURE
#define DEF_CURE

    # include <iostream>
    # include "AMateria.hpp"
    # include "ICharacter.hpp"

    class Cure : public AMateria
    {
        public:
            Cure();
            Cure & operator=(const Cure & rhs);
            Cure(const AMateria &rhs);
            virtual ~Cure();

            void use(ICharacter& target);
            AMateria* clone() const { return new Cure(*this); };
    };

#endif
