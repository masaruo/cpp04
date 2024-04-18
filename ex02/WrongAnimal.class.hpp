/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <mogawa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:45:51 by mogawa            #+#    #+#             */
/*   Updated: 2024/02/07 11:11:00 by mogawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONG_ANIMAL_CLASS_HPP
#define WRONG_ANIMAL_CLASS_HPP

#include <string>

class WrongAnimal
{
public:
	WrongAnimal(std::string const &in_type = "WrongAnimal");
	virtual ~WrongAnimal();
	WrongAnimal(WrongAnimal const &rhs);
	WrongAnimal &operator=(WrongAnimal const &rhs);
	virtual void		makeSound(void) const;
	std::string	const	&getType(void) const;
protected:
	std::string	_type;
};

#endif
