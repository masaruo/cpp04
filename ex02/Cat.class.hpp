/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <mogawa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:53:49 by mogawa            #+#    #+#             */
/*   Updated: 2024/02/08 11:38:32 by mogawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
#define CAT_CLASS_HPP

#include "Animal.class.hpp"
#include "Brain.class.hpp"

class Cat : public Animal
{
public:
	Cat();
	~Cat();
	Cat(Cat const &rhs);
	Cat &operator=(Cat const &rhs);
	void	makeSound(void) const;
	void	setBrains(std::string const &str);
	void	getBrain(int index) const;
private:
	Brain	*brains;//ex01
};

#endif
