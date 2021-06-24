/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:23:36 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/21 14:23:37 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_SORCERER
#define DEF_SORCERER

    #include <iostream>
    #include "Victim.hpp"

    class Sorcerer
    {
        public:
            Sorcerer(const Sorcerer &sorcerer);
            Sorcerer & operator=(Sorcerer const & rhs);
            ~Sorcerer();

            Sorcerer(std::string name, std::string title);
            void setName(std::string name);
            void setTitle(std::string title);
            void polymorph(Victim const &) const;
            std::string getTitle() const;
            std::string announce(void) const;
            std::string getName() const;

        private:
            Sorcerer();
            std::string name;
            std::string title;
    };

    std::ostream &operator<<(std::ostream &o, Sorcerer const &rhs);

#endif
