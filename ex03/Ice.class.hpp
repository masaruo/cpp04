/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <mogawa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 21:02:25 by mogawa            #+#    #+#             */
/*   Updated: 2024/02/27 21:44:00 by mogawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_CLASS_HPP
#define ICE_CLASS_HPP
#include "AMateria.class.hpp"

class Ice : public AMateria
{
private:

public:
	Ice();
	~Ice();
	Ice(Ice const &rhs);
	Ice &operator=(Ice const &rhs);
	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif
