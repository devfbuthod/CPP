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
    #include <cmath>

    class Fixed
    {
        public:
            Fixed();
            Fixed(const Fixed&);
            Fixed & operator=(Fixed const & rhs);
            Fixed(const int value);
            Fixed(const float value);
            int getRawBits(void) const;
            void setRawBits(int const raw);
            float toFloat(void) const;
            int toInt(void) const;
            ~Fixed();
        private:
            int value;
            static const int nb_bits  = 8 ;
    };

    std::ostream &operator<<(std::ostream &o, Fixed const &rhs);

#endif