/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 09:30:25 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/29 09:30:27 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_FIXED
#define DEF_FIXED

    #include <iostream>

    class Fixed
    {
        public:
            Fixed();
            Fixed(const Fixed &);
            Fixed & operator=(Fixed const & rhs);
            ~Fixed();

            Fixed(int value);
            int getRawBits(void) const;
            void setRawBits(int const raw);
        private:
            int value;
            static const int nb_bits  = 8 ;
    };

#endif