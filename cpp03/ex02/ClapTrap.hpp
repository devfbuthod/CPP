/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/30 11:03:03 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/30 11:03:04 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_CLAPTRAP
#define DEF_CLAPTRAP

    #include <iostream>

    class ClapTrap
    {
        public:
            ClapTrap();
            ClapTrap(const ClapTrap&);
            ClapTrap & operator=(ClapTrap const & rhs);
            ~ClapTrap();

            ClapTrap(std::string name);
            void takeDamage(unsigned int amount);
            void beRepaired(unsigned int amount);
            void setHitPoints(int hit_points);
            int getHitPoints() const;
            void setMaxHitPoints(int max_hit_points);
            int getMaxHitPoints() const;
            void setEnergyPoints(int energy_points);
            int getEnergyPoints() const;
            void setMaxEnergyPoints(int max_energy_points);
            int getMaxEnergyPoints() const;
            void setLevel(int level);
            int getLevel() const;
            void setName(std::string name);
            std::string getName() const;
            void setMeleeDamAtt(int melee_dam_att);
            int getMeleeDamAtt() const;
            void setRangedDamAtt(int ranged_dam_att);
            int getRangedDamAtt() const;
            void setArmDamRed(int arm_dam_red);
            int getArmDamRed() const;
            void rangedAttack(std::string const & target);
            void meleeAttack(std::string const & target);
 
        private:
            int hit_points;
            int max_hit_points;
            int energy_points;
            int max_energy_points;
            int level;
            std::string name;
            int melee_dam_att;
            int ranged_dam_att;
            int arm_dam_red;
    };

#endif
