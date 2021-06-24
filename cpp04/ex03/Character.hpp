/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 13:11:22 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/19 13:11:24 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_Character
#define DEF_Character

    #include <iostream>
    #include "ICharacter.hpp"

    class Character: public ICharacter
    {
        AMateria* materias[4];

        private:
            std::string name;
 
        public:
            Character();
            Character & operator=(const Character & rhs);
            Character(const Character &rhs);
            ~Character();

            Character(std::string name);
            std::string const & getName() const;
            AMateria const & getMaterias() const;
            void equip(AMateria* m);
            void unequip(int idx);
            void use(int idx, ICharacter& target);
    };

#endif