/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 11:47:01 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/24 11:47:03 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_HUMAN
#define DEF_HUMAN

    #include <string>
    #include <iostream>
    #include "Brain.hpp"

    class Human
    {
        public:
            Human();
            const Brain &getBrain() const;
            std::string identify() const;

        private:
            const Brain brain;
    };

#endif