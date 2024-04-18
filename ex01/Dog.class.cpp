/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <mogawa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:41:25 by mogawa            #+#    #+#             */
/*   Updated: 2024/02/21 20:45:27 by mogawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"
#include "color.hpp"
#include <iostream>

Dog::Dog()
: Animal("Dog")
, brains(new Brain)//ex01
{
	std::cout << GREEN << "[Dog] constructor called." << RESET << std::endl;
	return ;
}

Dog::~Dog()
{
	std::cout << GREEN << "[Dog] destructor called." << RESET << std::endl;
	delete this->brains;//ex01
	return ;
}

Dog::Dog(Dog const &rhs)
:Animal(rhs._type)
{
	std::cout << GREEN << "[Dog] copy constructor called." << RESET << std::endl;
	if (this == &rhs)//! 自己代入対策
		return;
	this->brains = new Brain;
	*this->brains = *rhs.brains;
	return ;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	std::cout << GREEN << "[Dog] copy assignment operator called." << RESET << std::endl;
	if (this != &rhs)//!自己代入対策
	{
		delete this->brains;//!まずは自分自身の確保済み領域を解放
		this->brains = new Brain(*rhs.brains);
	}
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << GREEN << "I am the Dog class and barking now." << RESET << std::endl;
	return ;
}

void	Dog::setBrains(std::string const &str)
{
	this->brains->setIdeas(str);
	return ;
}

void	Dog::getBrain(int index) const
{
	this->brains->getIdea(index);
	return ;
}
