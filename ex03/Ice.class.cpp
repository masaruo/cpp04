/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <mogawa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 21:02:15 by mogawa            #+#    #+#             */
/*   Updated: 2024/02/28 03:21:41 by mogawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.class.hpp"
#include <iostream>

Ice::Ice()
:AMateria("ice")
{
	return ;
}

Ice::~Ice()
{
	return ;
}

Ice::Ice(Ice const &rhs)
:AMateria("ice")
{
	(void) rhs;
	return ;
}

Ice &Ice::operator=(Ice const &rhs)
{
	(void) rhs;
	return (*this);
}

AMateria *Ice::clone() const
{
	AMateria	*new_ice = new Ice();
	return (new_ice);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	return ;
}
