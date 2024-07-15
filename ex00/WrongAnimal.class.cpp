/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <masaruo@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:07:30 by mogawa            #+#    #+#             */
/*   Updated: 2024/05/26 06:06:34 by mogawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.class.hpp"
#include "color.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(std::string const &in_type)
:_type(in_type)
{
	std::cout << BLUE << "[WrongAnimal] constructor called." << RESET << std::endl;
	return ;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << BLUE << "[WrongAnimal] destructor called." << RESET << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal const &rhs)
:_type(rhs._type)
{
	std::cout << BLUE << "[WrongAnimal] copy constructor called." << RESET << std::endl;
	return ;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs)
{
	std::cout << BLUE << "[WrongAnimal] operator assignment constructor called." << RESET << std::endl;
	if (this != &rhs)
	{
		this->_type = rhs._type;
	}
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << BLUE << "I am the Wrong Animal Class and can curse!" << RESET << std::endl;
	return ;
}

std::string const	&WrongAnimal::getType(void) const
{
	return (_type);
}
