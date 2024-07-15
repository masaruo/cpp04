/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <masaruo@gmail.com>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 10:45:51 by mogawa            #+#    #+#             */
/*   Updated: 2024/07/15 12:53:28 by mogawa           ###   ########.fr       */
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
	void		makeSound(void) const;
	std::string	const	&getType(void) const;
protected:
	std::string	_type;
};

#endif
