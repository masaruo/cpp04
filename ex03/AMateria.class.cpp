/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <mogawa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:18:36 by mogawa            #+#    #+#             */
/*   Updated: 2024/02/28 03:19:23 by mogawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.class.hpp"
#include "iostream"

AMateria::AMateria(std::string in_type)
:_type(in_type)
{
	return ;
}

AMateria::~AMateria()
{
	return ;
}

AMateria::AMateria(AMateria const &rhs)
:_type(rhs._type)
{
	return ;
}

AMateria &AMateria::operator=(AMateria const &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

std::string const &AMateria::getType() const
{
	return (_type);
}

void	AMateria::use(ICharacter &target)
{
	(void) target;
	std::cout << "AMateria use activated." << std::endl;
}
