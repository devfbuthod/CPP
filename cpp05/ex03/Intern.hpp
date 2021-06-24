/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/25 10:36:45 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/25 10:36:47 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# ifndef DEF_INTERN
# define DEF_INTERN

    #include <iostream>
    #include "Form.hpp"

    class Intern
    {
        public:
            Intern();
            Intern(const Intern & rhs);
            Intern & operator=(const Intern & rhs);
            virtual ~Intern();

            Form* makeForm(std::string fName, std::string fTarget);
    };

# endif