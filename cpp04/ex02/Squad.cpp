/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 13:07:09 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/04/06 13:07:10 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
    team = new t_isquad;
	team->next = NULL;
	team->content = NULL;
}

Squad & Squad::operator=(const Squad & rhs)
{
	if ( this != &rhs )
		this->team = rhs.team;
	return *this;
}

Squad::Squad( const Squad & src )
{
	int size = src.getCount();
	int i = -1;
	t_isquad	*temp;

	if (team)
	{
		temp = team;
		while (temp)
		{
			team = temp;
			temp = temp->next;
			delete team->content;
			delete team;
		}
	}
	while (++i < size)
		push(src.getUnit(i)->clone());
}

int Squad::getCount() const
{
	int i;
	t_isquad *squad;

	i = 1;
	if (team == NULL)
		return (0);
	squad = team;
	while (squad->next)
	{
		i++;
		squad = squad->next;
	}
	return (i);
}

ISpaceMarine* Squad::getUnit(int n) const
{
	t_isquad *squad;

	squad = team;
	if (getCount() - 1 < n)
		return (NULL);
	for (int i = 0; squad != NULL; i++)
	{
		if (i == n)
			return (squad->content);
		squad = squad->next;
	}
	return (NULL);
}

int Squad::push(ISpaceMarine* newbie)
{
	t_isquad *squad;

	squad = team;
	if (newbie == NULL)
		return (0);
	if (squad->content == NULL)
	{
		squad->content = newbie;
		squad->next = NULL;
	}
	else
	{
		while (squad->next)
			squad = squad->next;
		squad->next = new t_isquad;
		squad->next->next = NULL;
		squad->next->content = newbie;
	}
	return (getCount());
}

Squad::~Squad()
{
    t_isquad *squad;

	squad = NULL;
	while(team)
	{
		squad = team->next;
		delete team->content;
		delete team;
		team = squad;
	}
}