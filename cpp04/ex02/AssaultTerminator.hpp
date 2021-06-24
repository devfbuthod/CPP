/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 13:06:42 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/04/06 13:06:43 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_ASSAULTTERMINATOR
#define DEF_ASSAULTTERMINATOR

    # include <iostream>
    # include "ISpaceMarine.hpp"

    class AssaultTerminator : public ISpaceMarine
    {
        public:
            AssaultTerminator();
            AssaultTerminator & operator=(const AssaultTerminator & rhs);
            AssaultTerminator(const AssaultTerminator &rhs);
            ~AssaultTerminator();

            AssaultTerminator* clone() const { return new AssaultTerminator(*this); };
            void battleCry() const;
            void rangedAttack() const;
            void meleeAttack() const ;
    };

#endif
