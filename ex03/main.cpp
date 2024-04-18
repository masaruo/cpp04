/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <mogawa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 18:41:12 by mogawa            #+#    #+#             */
/*   Updated: 2024/02/28 19:38:27 by mogawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.class.hpp"
#include "Character.class.hpp"
#include "Cure.class.hpp"
#include "Ice.class.hpp"
#include "ICharacter.class.hpp"
#include "IMateriaSource.class.hpp"
#include "Inventory.class.hpp"
#include "MateriaSource.class.hpp"
#include <string>
#include <iostream>
#include "color.hpp"

void	print(std::string const &msg)
{
	std::cerr << std::endl << MAGENTA << msg << RESET << std::endl;
}

void	other_trivial_test(void)
{
	print("other tests");
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	
	ICharacter *me = new Character("me");
	ICharacter *he = new Character("he");

	AMateria *tmp;
	print("use before any assingment");
	me->use(0, *he);
	print("assign wrong materials");
	tmp = src->createMateria("earthquake");
	me->equip(tmp);
	me->use(0, *he);

	for (int i = 0; i < 10; i++)
	{
		tmp = src->createMateria("cure");
		me->equip(tmp);
		me->use(i, *he);
	}
	print("unequipment test");
	for (int i = 0; i < 5; i++)
	{
		me->unequip(0);
		tmp = src->createMateria("ice");
		me->equip(tmp);
		for (int j = 0; j < 5; j++)
		{
			me->use(j, *he);
		}
		std::cout << std::endl;
	}

	delete src;
	delete me;
	delete he;
}

void	materia_source_copy(void)
{
	print("materia source deep copy test");
	print("materia source copy assignment operater");
	MateriaSource *cureonly = new MateriaSource();
	MateriaSource *iceonly = new MateriaSource();

	for (int i = 0; i < 4 ; i++)
	{
		cureonly->learnMateria(new Cure());
		iceonly->learnMateria(new Ice());
	}
	ICharacter *me = new Character("me");
	ICharacter *he = new Character("he");

	AMateria *tmp;
	tmp = cureonly->createMateria("cure");
	me->equip(tmp);
	tmp = iceonly->createMateria("ice");
	me->equip(tmp);
	tmp = cureonly->createMateria("ice");
	me->equip(tmp);

	print("no use 2 as cureonly does not have ice");
	me->use(0, *he);
	me->use(1, *he);
	me->use(2, *he);
	print("now copy iceonly to cureonly");
	*cureonly = *iceonly;
	tmp = cureonly->createMateria("ice");
	me->equip(tmp);
	me->use(2, *he);

	delete cureonly;
	delete iceonly;
	delete me;
	delete he;
}

void	character_deep_copy(void)
{
	print("charactor deep copy test");
	print("charactor copy assingment operater");
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	Character	*me = new Character("me");
	Character	*minime = new Character("minime");

	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	
	*minime = *me;

	Character	*bob = new Character("bob");

	minime->use(0, *bob);
	minime->use(1, *bob);
	minime->use(2, *bob);// show nothing

	print("me - unequip 0");
	me->unequip(0);
	print("me use 0");
	me->use(0, *bob);
	print("minime use 0");
	minime->use(0, *bob);

	print("charactor copy assingment operater");
	Character *copiedme = new Character(*me);
	print("copiedme inherit from me and use 0 = cure");
	copiedme->use(0, *me);
	tmp = src->createMateria("ice");
	copiedme->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	print("copied me 1 now has ice");
	copiedme->use(1, *me);
	print("me 1 now has ice");
	me->use(1, *copiedme);

	delete src;
	delete me;
	delete minime;
	delete bob;
	delete copiedme;
}

void	test_on_assignment_paper(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria *tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	delete bob;
	delete me;
	delete src;
}

int	main(void)
{
	// test_on_assignment_paper();
	character_deep_copy();
	// materia_source_copy();
	// other_trivial_test();
	return (EXIT_SUCCESS);
}

#ifdef LEAK
#include <stdlib.h>
__attribute__((destructor))
static void destructor()
{
	system("leaks -q ex03");
}
#endif
