/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <mogawa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:41:28 by mogawa            #+#    #+#             */
/*   Updated: 2024/02/07 10:28:47 by mogawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
#define DOG_CLASS_HPP

# include "Animal.class.hpp"

class Dog : public Animal
{
public:
	Dog();
	~Dog();
	Dog(Dog const &rhs);
	Dog &operator=(Dog const &rhs);
	void	makeSound(void) const;
};

// std::ostream	&operator<<(std::ostream &os, std::string const &comment);

#endif
