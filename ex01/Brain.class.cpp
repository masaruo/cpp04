/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <mogawa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:22:30 by mogawa            #+#    #+#             */
/*   Updated: 2024/02/21 15:40:21 by mogawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.class.hpp"
#include "color.hpp"
#include <iostream>

Brain::Brain()
{
	setIdeas("created by constructor");
	std::cout << MAGENTA << "[Brain] constructor called." << RESET << std::endl;
	return ;
}

Brain::~Brain()
{
	std::cout << MAGENTA << "[Brain] destructor called." << RESET << std::endl;
	return ;
}

Brain::Brain(Brain const &rhs)
{
	std::cout << MAGENTA << "[Brain] copy constructor called." << RESET << std::endl;
	*this = rhs;
	return ;
}

Brain	&Brain::operator=(Brain const &rhs)
{
	std::cout << MAGENTA << "[Brain] copy assignment constructor called." << RESET << std::endl;
	for (int i = 0; i < ideas_max_size; i++)
	{
		this->_ideas[i] = rhs._ideas[i];
	}
	return (*this);
}

void	Brain::setIdeas(std::string const &str)
{
	for (int i = 0; i < ideas_max_size; i++)
	{
		std::string index = "(NULL):";
		// index = std::to_string(i);// only for review testing
		_ideas[i] = "[" + index + "] " + str;
	}
	return ;
}

void	Brain::getIdea(int index) const
{
	if (index >= ideas_max_size)
	{
		std::cout << MAGENTA << "no idea at the index" << RESET << std::endl;
	}
	else
	{
		std::cout << MAGENTA << "index:" << index 
		<< " idea is " << _ideas[index] << RESET << std::endl;
	}
}
