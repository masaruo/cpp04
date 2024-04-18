/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Inventory.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <mogawa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 21:54:20 by mogawa            #+#    #+#             */
/*   Updated: 2024/02/28 14:02:54 by mogawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INVENTORY_CLASS_HPP
#define INVENTORY_CLASS_HPP
#include "AMateria.class.hpp"

typedef struct s_list
{
	AMateria		*materia;
	bool			is_active;
	struct s_list	*next;
}	t_list;

class Inventory
{
private:
	t_list	*_head;
	int		_max_size;
	t_list	*createNode(AMateria *materia, bool is_active);
	bool	has_space() const;
	void	addNode(t_list *node);
public:
	Inventory();
	~Inventory();
	Inventory(Inventory const &rhs);
	Inventory &operator=(Inventory const &rhs);
	void	addItem(AMateria *materia);
	void	removeItem(int idx);
	AMateria *getItem(int idx) const;
	AMateria *dupItem(std::string const &name) const;
	void	copyInventory(Inventory const &rhs);
	void	clearInventory();
};

#endif
