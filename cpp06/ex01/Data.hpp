/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 16:14:04 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/29 16:14:05 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_DATA
#define DEF_DATA

    #include <iostream>
    #include <time.h>

    struct Data
    {
        std::string serial;
        int         nb_alea;
        std::string serial2;
    };

    void	*serialize( void );

    Data	*deserialize( void *raw );

#endif