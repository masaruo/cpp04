/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.class.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <mogawa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 21:00:26 by mogawa            #+#    #+#             */
/*   Updated: 2024/02/27 21:41:36 by mogawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_CLASS_HPP
#define CURE_CLASS_HPP
#include "AMateria.class.hpp"

class Cure : public AMateria
{
private:

public:
	Cure();
	~Cure();
	Cure(Cure const &rhs);
	Cure &operator=(Cure const &rhs);
	AMateria* clone() const;
	void use(ICharacter &target);
};

#endif
