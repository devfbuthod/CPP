/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NastyThief.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:23:08 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/21 14:23:09 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_NASTYTHIEF
#define DEF_NASTYTHIEF

    #include <iostream>
    #include "Victim.hpp"

    class NastyThief : public Victim
    {
        public:
            NastyThief();
            NastyThief(const NastyThief &nastyThief);
            NastyThief & operator=(NastyThief const & rhs);
            ~NastyThief();

            NastyThief(std::string name);
            void getPolymorphed() const;
    };

#endif
