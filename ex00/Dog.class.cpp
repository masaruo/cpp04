/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <mogawa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:41:25 by mogawa            #+#    #+#             */
/*   Updated: 2024/02/07 10:36:14 by mogawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"
#include "color.hpp"
#include <iostream>

Dog::Dog()
:Animal("Dog")
{
	std::cout << GREEN << "[Dog] constructor called." << RESET << std::endl;
	return ;
}

Dog::~Dog()
{
	std::cout << GREEN << "[Dog] destructor called." << RESET << std::endl;
	return ;
}

Dog::Dog(Dog const &rhs)// using copy assingment operator
{
	std::cout << GREEN << "[Dog] copy constructor called." << RESET << std::endl;
	*this = rhs;
	return ;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	std::cout << GREEN << "[Dog] assignment copy constructor called." << RESET << std::endl;
	this->_type = rhs._type;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << GREEN << "I am the Dog class and barking now." << RESET << std::endl;
	return ;
}
