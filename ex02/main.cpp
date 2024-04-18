/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <mogawa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:41:12 by mogawa            #+#    #+#             */
/*   Updated: 2024/02/28 19:29:44 by mogawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Shallow copy:
// ----------------------------------------
// A ---> [heap adress of a member] <--- B
// ----------------------------------------
// If the value inside the address is modified at any point, the value will be
// modified both in A and B since they both point to the same location in memory
// This is a bad idea. If any variables were allocated on the heap -> deep copy!

// Deep copy:
// -----------------------------------------------------------------
// A ---> [heap adress of a member] B ---> [heap adress of a member]
// -----------------------------------------------------------------
// Despite having the same values each object has its own allocated memory
// for its member variables

#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include <iostream>
#include "Brain.class.hpp"
#include "color.hpp"

static	void	cout(std::string const &msg)
{
	std::cout << "***[ " << BOLDWHITE << msg << RESET << "]*** ︵ ╯(°□° ╯)" << std::endl;
}

int	main(void)
{
	{
		{
			cout("copy assignment operator test");
			Dog	main;
			main.setBrains("i am the main");
			main.getBrain(1);
			Dog clone;
			cout("copy assignment operator activated");
			clone = main;
			cout("clone get brain = i am the main");
			clone.getBrain(1);
			clone.setBrains("i am the clone");
			cout("clonedog now says i am clone dog");
			clone.getBrain(1);
			cout("deep copy test by mainsays...");
			main.getBrain(1);
		}
		{
			cout("copy constructor test");
			Dog	main;
			main.setBrains("i am the main");
			main.getBrain(1); 
			cout("copy constructor activated");
			// Dog	clone = main;
			Dog clone(main);
			cout("clone get brain = i am the main");
			clone.getBrain(1);
			clone.setBrains("i am the clone");
			cout("clonedog now says i am clone dog");
			clone.getBrain(1);
			cout("deep copy test by mainsays...");
			main.getBrain(1);
		}
		{
		// 	cout("copy assignment operator test");
		// 	Cat	main;
		// 	main.setBrains("i am the main");
		// 	main.getBrain(1);
		// 	Cat clone;
		// 	cout("copy assignment operator activated");
		// 	clone = main;
		// 	cout("clone get brain = i am the main");
		// 	clone.getBrain(1);
		// 	clone.setBrains("i am the clone");
		// 	cout("clonedog now says i am clone dog");
		// 	clone.getBrain(1);
		// 	cout("deep copy test by mainsays...");
		// 	main.getBrain(1);
		// }
		// {
		// 	cout("copy constructor test");
		// 	Cat	main;
		// 	main.setBrains("i am the main");
		// 	main.getBrain(1); 
		// 	cout("copy constructor activated");
		// 	// Dog	clone = main;
		// 	Cat clone(main);
		// 	cout("clone get brain = i am the main");
		// 	clone.getBrain(1);
		// 	clone.setBrains("i am the clone");
		// 	cout("clonedog now says i am clone dog");
		// 	clone.getBrain(1);
		// 	cout("deep copy test by mainsays...");
		// 	main.getBrain(1);
		}
	}
	{
		// cout("animals array test");
		// int const animals_size = 10;
		// Animal	*animals[animals_size];

		// for (int i = 0; i < animals_size; i++)
		// {
		// 	if (i % 2 == 0)
		// 	{
		// 		std::cout << std::endl << "*** adding Dog ***" << std::endl;
		// 		animals[i] = new Dog();
		// 	}
		// 	else
		// 	{
		// 		std::cout << std::endl << "*** adding Cat ***" << std::endl;
		// 		animals[i] = new Cat();
		// 	}
		// }
		
		// std::cout << std::endl << "*** gettype and makingsound ***" << std::endl;
		// for (int i = 0; i < animals_size; i++)
		// {
		// 	animals[i]->getType();
		// 	animals[i]->makeSound();
		// }

		// std::cout << std::endl << "*** delete starts ***" << std::endl;
		// for (int i = 0; i < animals_size; i++)
		// {
		// 	std::cout << std::endl << "*** deleting a elem start ***" << std::endl;
		// 	delete animals[i];
		// }
		// return (EXIT_SUCCESS);
	{
		//! animal class = not possible to make instance check
		// Animal *animal = new Animal;
	}
	}
}

#ifdef LEAK
#include <stdlib.h>
__attribute__((destructor))
static void destructor()
{
	system("leaks -q ex02");
}
#endif
