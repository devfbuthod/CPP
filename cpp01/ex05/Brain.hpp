/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/24 11:45:13 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/24 11:45:15 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_BRAIN
#define DEF_BRAIN

    #include <string>
    #include <iostream>
    #include <sstream>

    class Brain
    {
        public:
            Brain();
            std::string identify() const;
    };

#endif
