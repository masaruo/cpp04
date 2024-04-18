/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.class.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <mogawa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:50:11 by mogawa            #+#    #+#             */
/*   Updated: 2024/02/28 15:16:13 by mogawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.class.hpp"

MateriaSource::MateriaSource()
{
	return ;
}

MateriaSource::~MateriaSource()
{
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		this->_sources = rhs._sources;
	}
	return ;
}

MateriaSource &MateriaSource::operator=(MateriaSource const &rhs)
{
	if (this != &rhs)
	{
		_sources = rhs._sources;
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	_sources.addItem(materia);
}

AMateria* MateriaSource::createMateria(std::string const &type)
{
	AMateria *ans_materia;

	ans_materia = _sources.dupItem(type);
	return (ans_materia);
}
