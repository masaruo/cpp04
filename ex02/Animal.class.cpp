/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <mogawa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:07:30 by mogawa            #+#    #+#             */
/*   Updated: 2024/02/28 15:55:26 by mogawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"
#include "color.hpp"
#include <iostream>

Animal::Animal(std::string const &in_type)
:_type(in_type)
{
	std::cout << RED << "[Animal] constructor called." << RESET << std::endl;
	return ;
}

Animal::~Animal()
{
	std::cout << RED << "[Animal] destructor called." << RESET << std::endl;
	return ;
}

Animal::Animal(Animal const &rhs)
:_type(rhs._type)
{
	std::cout << RED << "[Animal] copy constructor called." << RESET << std::endl;
	return ;
}

Animal	&Animal::operator=(Animal const &rhs)
{
	std::cout << RED << "[Animal] operator assignment constructor called." << RESET << std::endl;
	this->_type = rhs._type;
	return (*this);
}

std::string const	&Animal::getType(void) const
{
	return (_type);
}
