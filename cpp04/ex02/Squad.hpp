/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 13:07:15 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/04/06 13:07:16 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_SQUAD
#define DEF_SQUAD

    # include <iostream>
    # include <string>
    # include "ISquad.hpp"

    typedef struct		s_isquad
    {
        ISpaceMarine*	content;
        struct s_isquad	*next;
    }					t_isquad;

    class Squad: public ISquad
    {
        t_isquad *team;

        public:
            Squad();
            Squad & operator=(const Squad & src);
            Squad(Squad const & rhs);
            ~Squad();

            int getCount() const;
            ISpaceMarine* getUnit(int n) const;
            int push(ISpaceMarine* newbie);
    };

#endif