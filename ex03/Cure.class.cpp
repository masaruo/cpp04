/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <mogawa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 21:00:13 by mogawa            #+#    #+#             */
/*   Updated: 2024/02/28 03:31:38 by mogawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.class.hpp"
#include <iostream>

Cure::Cure()
:AMateria("cure")
{
	return ;
}

Cure::~Cure()
{
	return ;
}

Cure::Cure(Cure const &rhs)
:AMateria("cure")
{
	(void)rhs;
	return ;
}

Cure &Cure::operator=(Cure const &rhs)
{
	(void)rhs;
	return (*this);
}

AMateria* Cure::clone() const
{
	AMateria *new_cure;

	new_cure = new Cure();
	return (new_cure);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	return ;
}
