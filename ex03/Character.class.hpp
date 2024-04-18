/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mogawa <mogawa@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 20:41:49 by mogawa            #+#    #+#             */
/*   Updated: 2024/02/28 02:32:07 by mogawa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_CLASS_HPP
#define CHARACTER_CLASS_HPP
#include "ICharacter.class.hpp"
#include "Inventory.class.hpp"

class Character : public ICharacter
{
private:
	std::string	_name;
	Inventory	bag;
public:
	Character(std::string in_name = "undefined");
	~Character();
	Character(Character const &rhs);
	Character &operator=(Character const &rhs);
	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
};

#endif
