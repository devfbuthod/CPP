/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:28:48 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/21 14:28:50 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(): nb_pdv(0), type("bot")
{

}

Enemy::Enemy(const Enemy & enemy)
{
    *this = enemy;

    return;
}

Enemy & Enemy::operator=(Enemy const & rhs)
{
    if (this != &rhs)
    {
        this->setHP(rhs.getHP());
        this->setType(rhs.getType());
    }
    return (*this);
}

Enemy::Enemy(int hp, std::string const & type)
{
    this->nb_pdv = hp;
    this->type = type;
}

std::string Enemy::getType() const
{
    return (this->type);
}

void Enemy::setType(std::string type)
{
    this->type = type;
}

int Enemy::getHP() const
{
    return (this->nb_pdv);
}

void Enemy::setHP(int hp)
{
    this->nb_pdv = hp;
}

void	Enemy::takeDamage(int damage)
{
	if (this->getHP() > damage)
		this->setHP(this->getHP() - damage);
	else
		this->setHP(0);
}

Enemy::~Enemy()
{

}
