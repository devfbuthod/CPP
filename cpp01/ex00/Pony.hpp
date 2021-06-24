/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 11:03:24 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/17 11:03:26 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_PONY
#define DEF_PONY

    #include <string>

    class Pony
    {
        public:
            Pony(std::string name, int length, int weight);
            ~Pony();
            std::string getNamePony();
            int getLengthPony();
            int getWeightPony();

        private:
            std::string name;
            int length;
            int weight;
    };

#endif