/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <masaruo@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:54:08 by mogawa            #+#    #+#             */
/*   Updated: 2024/05/26 06:07:00 by mogawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.class.hpp"
#include "color.hpp"
#include <iostream>

WrongCat::WrongCat()
:WrongAnimal("WrongCat")
{
	std::cout << MAGENTA << "[WrongCat] constructor called." << RESET << std::endl;
	return ;
}

WrongCat::~WrongCat()
{
	std::cout << MAGENTA << "[WrongCat] destructor called." << RESET << std::endl;
	return ;
}

WrongCat::WrongCat(WrongCat const &rhs)// using initializer
:WrongAnimal(rhs._type)
{
	std::cout << MAGENTA << "[WrongCat] copy constructor called." << RESET << std::endl;
	return ;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs)
{
	std::cout << MAGENTA << "[WrongCat] assignment copy constructor called." << RESET << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << MAGENTA << "I am the Wrong Cat Class and can bark now!" << RESET << std::endl;
	return ;
}
