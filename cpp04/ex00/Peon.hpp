/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:23:25 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/21 14:23:26 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_PEON
#define DEF_PEON

    #include <iostream>
    #include "Victim.hpp"

    class Peon : public Victim
    {
        public:
            Peon();
            Peon(const Peon &peon);
            Peon & operator=(Peon const & rhs);
            ~Peon();

            Peon(std::string name);
            void getPolymorphed() const;
    };

#endif
