/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <mogawa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:50:29 by mogawa            #+#    #+#             */
/*   Updated: 2024/02/28 03:30:50 by mogawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_CLASS_HPP
#define MATERIASOURCE_CLASS_HPP
#include "IMateriaSource.class.hpp"
#include "Inventory.class.hpp"

class MateriaSource : public IMateriaSource
{
private:
	Inventory _sources;
public:
	MateriaSource();
	~MateriaSource();
	MateriaSource(MateriaSource const &rhs);
	MateriaSource &operator=(MateriaSource const &rhs);
	void		learnMateria(AMateria *materia);
	AMateria*	createMateria(std::string const& type);
};

#endif
