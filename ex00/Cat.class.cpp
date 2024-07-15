/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <masaruo@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:54:08 by mogawa            #+#    #+#             */
/*   Updated: 2024/05/26 05:36:08 by mogawa           ###   ########.fr       */
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

Cat::Cat(Cat const &rhs)
:Animal(rhs._type)
{
	std::cout << YELLOW << "[Cat] copy constructor called." << RESET << std::endl;
	return ;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	std::cout << YELLOW << "[Cat] assignment copy constructor called." << RESET << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << YELLOW << "I am the Cat Class and meowing now." << RESET << std::endl;
	return ;
}
