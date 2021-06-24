/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:28:44 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/21 14:28:45 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_CHARACTER
#define DEF_CHARACTER

    #include <iostream>
    #include <string>
    #include "AWeapon.hpp"
    #include "Enemy.hpp"

    class Character
    {
        public:
            Character();
            Character & operator=(Character const & rhs);
            Character(const Character & rhs);
            ~Character();

            Character(std::string const & name);
            void setName(std::string name);
            std::string getName() const;
            void setPA(int PA);
            int getPA() const;
            void setWeapon(AWeapon* weapon);
            AWeapon* getWeapon() const;
            void recoverAP();
            void equip(AWeapon* aweapon);
            void attack(Enemy* enemy);
            std::string getInfos(void) const;
            
        private:
            std::string name;
            int PA;
            AWeapon* weapon;
    };

    std::ostream & operator<<(std::ostream &o, Character const &rhs);

#endif
