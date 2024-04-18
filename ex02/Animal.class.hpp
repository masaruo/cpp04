/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <mogawa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:07:34 by mogawa            #+#    #+#             */
/*   Updated: 2024/02/21 20:50:11 by mogawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
#define ANIMAL_CLASS_HPP

#include <string>
#include <ostream>

class Animal
{
public:
	Animal(std::string const &in_type = "Animal");
	virtual ~Animal();
	Animal(Animal const &rhs);
	Animal &operator=(Animal const &rhs);
	virtual void		makeSound(void) const = 0;
	std::string	const	&getType(void) const;
protected:
	std::string	_type;
};

#endif
