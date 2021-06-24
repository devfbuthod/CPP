/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 13:11:08 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/19 13:11:09 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_AMATERIA
#define DEF_AMATERIA

    # include <iostream>

    class ICharacter;

    class AMateria
    {
        protected:
            unsigned int _xp;
            std::string typeM;

        public:
            AMateria();
            AMateria & operator=(const AMateria & rhs);
            AMateria(const AMateria &rhs);
            ~AMateria();

            AMateria(std::string const & type);
            std::string const & getType() const;
            unsigned int getXP() const;
            virtual AMateria* clone() const = 0;
            virtual void use(ICharacter& target);
    };

#endif
