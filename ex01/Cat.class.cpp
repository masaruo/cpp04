/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <mogawa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:54:08 by mogawa            #+#    #+#             */
/*   Updated: 2024/02/21 20:29:03 by mogawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"
#include "color.hpp"
#include <iostream>

Cat::Cat()
: Animal("Cat")
, brains(new Brain)
{
	std::cout << YELLOW << "[Cat] constructor called." << RESET << std::endl;
	return ;
}

Cat::~Cat()
{
	std::cout << YELLOW << "[Cat] destructor called." << RESET << std::endl;
	delete brains;//ex01
	return ;
}

Cat::Cat(Cat const &rhs)
:Animal(rhs._type)
{
	if (this == &rhs)
		return ;
	this->brains = new Brain;
	*this->brains = *rhs.brains;
}

Cat &Cat::operator=(Cat const &rhs)
{
	if (this == &rhs)
		return (*this);
	delete this->brains;
	this->brains = new Brain;
	*this->brains = *rhs.brains;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << YELLOW << "I am the Cat Class and meowing now." << RESET << std::endl;
	return ;
}

void	Cat::setBrains(std::string const &str)
{
	this->brains->setIdeas(str);
	return ;
}

void	Cat::getBrain(int index) const
{
	this->brains->getIdea(index);
	return ;
}
