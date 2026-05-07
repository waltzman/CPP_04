/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 12:31:27 by rlobun            #+#    #+#             */
/*   Updated: 2026/05/07 13:11:49 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	name = "Default Name";
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(const std::string &name)
{
	this->name = name;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(const Character &other)
{
	for (int i = 0; i < 4; i++)
	{
		if (other.inventory[i] == NULL)
			inventory[i] = NULL;
		else
			inventory[i] = other.inventory[i]->clone();
	}
		name = other.name;
}


Character& Character::operator=(const Character& other)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != NULL)
			delete inventory[i];
		if (other.inventory[i] == NULL)
			inventory[i] == NULL;
		else
			inventory[i] = other.inventory[i]->clone();
	}

	name = other.name;
	return (*this);
}

Character::Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] != NULL)
			delete inventory[i];
	}
}

const std::string& Character::getName() const
{
	return (name);
}

void Character::equip(AMateria* materia)
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i] == NULL)
		{
			inventory[i] = materia;
			std::cout << name << ": equipped " << materia->getType() << std::endl;
			return;
		}
	}
	std::cout << name << ": no space left for another materia!" << std::endl;
}

void Character::unequip(int index)
{
	if (index < 0 "|| index > 3)
	{
		std::cout << name << ": no Materia found at index " << index << std::endl;
		return;
	}
	if (inventory[index] != NULL)
	{
		std::cout << name << ": removed " << inventory[index]->getType() 
		<< " materia from his inventory "
		<< std::endl;
		return ;
	}
	std::cout << name << ": no materia found at index " << index << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (inventory[idx] != NULL)
	{
		inventory[idx]->use(target);
		return ;
	}
	std::cout << name << ": no materia found at index " << index << std::endl;
}


Materia* Character::getMateria(int index) const
{
	if (index < 0 || index > 3)
	{
		std::cout << name << ": no materia found at index " << index << std::endl;
		return (NULL);
	}

	if (inventory[index] != NULL)
		return (inventory[index]);
	
	std::cout << name << ": no Matria at index " << index << std::endl;
	return (NULL);
}























