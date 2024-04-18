/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Inventory.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <mogawa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 21:54:39 by mogawa            #+#    #+#             */
/*   Updated: 2024/02/28 15:29:32 by mogawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Inventory.class.hpp"
#include <iostream>

int const max_size = 4;

Inventory::Inventory()
:_head(createNode(NULL, false))
,_max_size(max_size)
{
	return ;
}

Inventory::~Inventory()
{
	// std::cerr << "Inventory destructor" << std::endl;
	this->clearInventory();
	return ;
}

Inventory::Inventory(Inventory const &rhs)
{
	// std::cerr << "Inventory copy constructor" << std::endl;
	if (this != &rhs)
	{
		this->_head = createNode(NULL, false);
		this->_max_size = rhs._max_size;
		this->copyInventory(rhs);
	}
	return ;
}

Inventory &Inventory::operator=(Inventory const &rhs)
{
	// std::cerr << "Inventory operator assignment" << std::endl;
	if (this != &rhs)
	{
		this->clearInventory();
		this->_head = createNode(NULL, false);
		_max_size = rhs._max_size;
		this->copyInventory(rhs);
	}
	return (*this);
}

t_list *Inventory::createNode(AMateria *materia, bool is_active)
{
	t_list *list = new t_list;

	if (materia == NULL)
		list->materia = NULL;
	else
		list->materia = materia->clone();
	list->is_active = is_active;
	list->next = NULL;
	return (list);
}

bool Inventory::has_space(void) const
{
	t_list *crnt;
	int		i;

	i = 0;
	crnt = _head;
	while (crnt)
	{
		if (crnt->is_active == true)
			i++;
		crnt = crnt->next;
	}
	if (i >= _max_size)
		return (false);
	else
		return (true);
}

void Inventory::addNode(t_list *node)
{
	t_list *crnt;

	crnt = this->_head;
	while(crnt->next)
	{
		crnt = crnt->next;
	}
	crnt->next = node;
	return ;
}

void Inventory::clearInventory()
{
	t_list *crnt;
	t_list *tmp;

	crnt = this->_head;
	while (crnt)
	{
		tmp = crnt;
		crnt = crnt->next;
		delete tmp->materia;
		delete tmp;
	}
}

void Inventory::copyInventory(Inventory const &rhs)
{
	t_list	*old_crnt = rhs._head;

	while (old_crnt)
	{
		addNode(createNode(old_crnt->materia, old_crnt->is_active));
		old_crnt = old_crnt->next;
	}
}

void Inventory::addItem(AMateria *materia)
{
	if (!materia || !has_space())
	{
		delete materia;
		return ;
	}
	addNode(createNode(materia, true));
	delete materia;
}

void Inventory::removeItem(int idx)
{
	t_list	*crnt;
	int	cnt;

	cnt = 0;
	crnt = this->_head;
	while (crnt)
	{
		if (crnt->is_active == true)
		{
			if (cnt == idx)
			{
				crnt->is_active = false;
				break ;
			}
			cnt++;
		}
		crnt = crnt->next;
	}
}

AMateria *Inventory::getItem(int idx) const
{
	int		cnt = 0;
	t_list	*crnt;

	crnt = this->_head;
	while (crnt)
	{
		if (crnt->is_active == true)
		{
			if (cnt == idx)
			{
				return (crnt->materia);
			}
			cnt++;
		}
		crnt = crnt->next;
	}
	return (NULL);
}

#include <iostream>
AMateria* Inventory::dupItem(std::string const &name) const
{
	t_list		*crnt;

	crnt = this->_head;
	while (crnt)
	{
		if (crnt->materia && crnt->materia->getType() == name)
		{
			return (crnt->materia->clone());
		}
		crnt = crnt->next;
	}
	return (NULL);
}
