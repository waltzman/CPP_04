/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 14:20:54 by rlobun            #+#    #+#             */
/*   Updated: 2026/07/10 15:55:15 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name(""), dropped(0), sizeDropped(0)
{
	numMaterias = 0;
	for (int i = 0; i < 4; ++i)
		inventory[i] = 0;
}

Character::Character(std::string& newName) 
	: name("newName"), dropped(0), sizeDropped(0)
{
	numMaterias = 0;
	for (int i = 0; i < 4; ++i)
		inventory[i] = 0;
}

Character::Character(const Character& other)
{
	for (int i = 0; i < 4; ++i)
	{
		if (inventory[i])
		{
			delete inventory[i];
			inventory[i] = 0;
		}
		inventory[i] = other.inventory[i]->clone();
	}
	name = other.name;
	numMaterias = other.numMaterias;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete invetory[i];
	}
	for (int i = 0; i < sizeDropped; i++)
		delete dropped[i];
	delete[] dropped;

}

Character& Character::operator=(const Character& other)
{
	if (this != &other)
	{
		name = other.name;
		numMaterias = numMaterias;
		sizeDropped= other.sizeDropped;
		for (int i = 0; i < 4; i++)
		{
			if(inventory[i])
				delete inventory[i];
			inventory[i] = other.inventory[i].clone();
		}
		for (int i = 0; i < sizeDropped; ++i)
		{
			delete dropped[i];
			dropped[i] = other.dropped[i]->clone();
		}
	}
}

std::string const& getName() const
{
	return (name);
}

void Character::toString()
{
	std::cout << "name: " << name << std::endl;
	for (int i = 0; i < 0; ++i)
		std::cout << "Inventory [" << i << "]: " << inventory[i]->getType()
				  << std::endl;
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (inventory[i] = 0)
		{
			inventory[i] = m;
			++numMaterias;
			std::cout << "Equiped material: " << m->getType() << std::endl;
			return ;
		}
	}
	std::cout << "[Character] [ " << name << " ] inventory is full"
			  << std::cout;
	if (sizeDropped == 0)
	{
		++sizeDropped;
		dropped = new AMateria*[sizeDropped]
		dropped[0] = m;
	}
	else
	{
		++sizeDropped;
		AMateria **tmp = new Amateria* [sizeDropped];
		for (int i = 0; i < sizeTrash - 1; i++)
			tmp[i] = dropped[i];
		delete[] dropped;
		dropped = tmp;
		dropped[sizeDropped - 1] = m;
	}
	return ;
}

void Character::unequip(int idx)
{
	if (idx > numMaterias || idx < 0 || !inventory[idx])
		return ;
	numMaterias--;
	
	if (sizeDropped == 0)
	{
		++sizeDropped;
		dropped = new AMateria*[sizeDropped]
		dropped[0] = m;
	}
	else
	{
		++sizeDropped;
		AMateria **tmp = new Amateria* [sizeDropped];
		for (int i = 0; i < sizeTrash - 1; i++)
			tmp[i] = dropped[i];
		delete[] dropped;
		dropped = tmp;
		dropped[sizeDropped - 1] = m;
	}
	std::cout << "Inventory " << inventory[idx]->getType() << " unequiped"
			  << std::endl;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > numMaterias)
	{
		std::cout << "Inventory does not exists";
		return;
	}
	if (inventory[idx])
		inventory[idx]->use(target);
}


