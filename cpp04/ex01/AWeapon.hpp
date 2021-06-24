/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:28:35 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/21 14:28:36 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_AWEAPON
#define DEF_AWEAPON

    #include <iostream>

    class AWeapon
    {
        protected:
            AWeapon();

        public:
            AWeapon & operator=(AWeapon const & AWeapon);
            AWeapon(const AWeapon & AWeapon);
            virtual ~AWeapon();

            AWeapon(std::string const & name, int apcost, int damage);
            std::string getName() const;
            void setName(std::string name);
            int getAPCost() const;
            void setAPCost(int AP);
            int getDamage() const;
            void setDamage(int damage);
            virtual void attack() const = 0;

        private:
            std::string name;
            int damage;
            int AP;
    };

#endif
