/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <mogawa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 11:22:36 by mogawa            #+#    #+#             */
/*   Updated: 2024/02/08 09:16:05 by mogawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
#define BRAIN_CLASS_HPP

#include <string>
#include <ostream>

int const	ideas_max_size = 100;

class Brain
{
public:
	Brain();
	~Brain();
	Brain(Brain const &rhs);
	Brain &operator=(Brain const &rhs);
	void	setIdeas(std::string const &str);
	void	getIdea(int index) const;
private:
	std::string	_ideas[ideas_max_size];
};

#endif
