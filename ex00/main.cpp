/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <mogawa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:41:12 by mogawa            #+#    #+#             */
/*   Updated: 2024/02/28 17:58:27 by mogawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include <iostream>
#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"

int	main(void)
{
	std::cout << "*** constructor ***" << std::endl;
	const Animal	*animal = new Animal();
	const Animal	*dog = new Dog();
	const Animal	*cat = new Cat();

	std::cout << std::endl << "*** proper class test ***" << std::endl;
	std::cout << animal->getType() << " type." << std::endl;
	animal->makeSound();
	std::cout << dog->getType() << " type." << std::endl;
	dog->makeSound();
	std::cout << cat->getType() << " type." << std::endl;
	cat->makeSound();

	std::cout << std::endl << "*** wrong class test ***" << std::endl;
	std::cout << "*** constructor ***" << std::endl;
	const WrongAnimal	*wrong_animal = new WrongAnimal();
	const WrongAnimal	*wrong_cat = new WrongCat();

	std::cout << std::endl << "*** wrong class test ***" << std::endl;
	std::cout << wrong_animal->getType() << " type." << std::endl;
	wrong_animal->makeSound();
	std::cout << wrong_cat->getType() << " type." << std::endl;
	wrong_cat->makeSound();

	std::cout << std::endl << "*** destructor ***" << std::endl;
	delete animal;
	delete dog;
	delete cat;
	delete wrong_animal;
	delete wrong_cat;
	
	return (EXIT_SUCCESS);
}

#ifdef LEAK
#include <stdlib.h>
__attribute__((destructor))
static void destructor()
{
	system("leaks -q ex00");
}
#endif
