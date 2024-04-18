/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <mogawa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:41:28 by mogawa            #+#    #+#             */
/*   Updated: 2024/02/08 11:38:41 by mogawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
#define DOG_CLASS_HPP

# include "Animal.class.hpp"
# include "Brain.class.hpp"

class Dog : public Animal
{
public:
	Dog();
	~Dog();
	Dog(Dog const &rhs);
	Dog &operator=(Dog const &rhs);
	void	makeSound(void) const;
	void	setBrains(std::string const &str);
	void	getBrain(int index) const;
private:
	Brain	*brains;//ex01
};

#endif
