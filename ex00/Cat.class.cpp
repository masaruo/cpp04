/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <mogawa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:54:08 by mogawa            #+#    #+#             */
/*   Updated: 2024/02/07 10:40:57 by mogawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"
#include "color.hpp"
#include <iostream>

Cat::Cat()
:Animal("Cat")
{
	std::cout << YELLOW << "[Cat] constructor called." << RESET << std::endl;
	return ;
}

Cat::~Cat()
{
	std::cout << YELLOW << "[Cat] destructor called." << RESET << std::endl;
	return ;
}

Cat::Cat(Cat const &rhs)// using initializer
:Animal(rhs._type)
{
	std::cout << YELLOW << "[Cat] copy constructor called." << RESET << std::endl;
	return ;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	std::cout << YELLOW << "[Cat] assignment copy constructor called." << RESET << std::endl;
	// *this = rhs;//! 一括代入だめ？error: all paths through this function will call itself [-Werror,-Winfinite-recursion]
	this->_type = rhs._type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << YELLOW << "I am the Cat Class and meowing now." << RESET << std::endl;
	return ;
}
