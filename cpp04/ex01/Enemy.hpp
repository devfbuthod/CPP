/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:28:53 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/21 14:28:55 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_ENEMY
#define DEF_ENEMY

    #include <iostream>

    class Enemy
    {
        protected:
            Enemy();

        public:
            Enemy & operator=(Enemy const & enemy);
            Enemy(const Enemy & enemy);
            virtual ~Enemy();

            Enemy(int hp, std::string const & type);
            std::string getType() const;
            void setType(std::string type);
            int getHP() const;
            void setHP(int hp);
            virtual void takeDamage(int);
        
        private:
            int nb_pdv;
            std::string type;
    };

#endif
