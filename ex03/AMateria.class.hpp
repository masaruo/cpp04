/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <mogawa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:16:53 by mogawa            #+#    #+#             */
/*   Updated: 2024/02/28 03:26:49 by mogawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_CLASS_HPP
#define AMATERIA_CLASS_HPP
#include <string>
#include "ICharacter.class.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string	_type;
public:
	AMateria(std::string in_type = "AMateria");
	virtual ~AMateria();
	AMateria(AMateria const &rhs);
	AMateria &operator=(AMateria const &rhs);
	std::string const &getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter &target);
};

#endif
