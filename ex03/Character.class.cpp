/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <mogawa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:41:21 by mogawa            #+#    #+#             */
/*   Updated: 2024/02/28 14:57:05 by mogawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.class.hpp"
#include <iostream>

Character::Character(std::string in_name)
:_name(in_name)
{
	return ;
}

Character::~Character()
{
	return ;
}

Character::Character(Character const &rhs)
:_name(rhs.getName())
{
	//todo self copy
	this->bag = rhs.bag;
	return ;
}

Character &Character::operator=(Character const &rhs)
{
	// std::cerr << "character operator assignment" << std::endl;
	if (this != &rhs)
	{
		_name = rhs._name;
		this->bag = rhs.bag;
	}
	return (*this);
}

std::string const &Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria *m)
{
	bag.addItem(m);
	return ;
}

void Character::unequip(int idx)
{
	bag.removeItem(idx);
	return ;
}

void Character::use(int idx, ICharacter &target)
{
	AMateria *materia = bag.getItem(idx);

	if (!materia)
		return ;
	materia->use(target);
	return ;
}
