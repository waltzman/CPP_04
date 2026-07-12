/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 14:20:54 by rlobun            #+#    #+#             */
/*   Updated: 2026/07/13 00:52:04 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : name(""), dropped(0), sizeDropped(0)
{
	numMaterias = 0;
	for (int i = 0; i < 4; ++i)
		inventory[i] = 0;
	std::cout << "[Materias] Number of materias at start " << numMaterias << std::endl;
}

Character::Character(const std::string& newName) 
	: name(newName), dropped(0), sizeDropped(0)
{ 	
	numMaterias = 0;
	for (int i = 0; i < 4; ++i)
		inventory[i] = 0;
	std::cout << "[Character] "
 			  << newName
			  << " Number of materias at start " << numMaterias << std::endl;
}

Character::Character(const Character& other)
{
	name = other.name;
	for (int i = 0; i < 4; ++i)
	{
		if (other.inventory[i])
			inventory[i] = other.inventory[i]->clone();
		
		else
			inventory[i] = 0; 
	}

}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (inventory[i])
			delete inventory[i];
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
		numMaterias = other.numMaterias;
		sizeDropped = other.sizeDropped;
		for (int i = 0; i < 4; i++)
		{
			if(inventory[i])
				delete inventory[i];
			//std::cout << "\nHERE **************** \n" << std::endl;
			if (other.inventory[i] == 0)
				inventory[i] = 0;
			else
				inventory[i] = other.inventory[i]->clone();
		}
		
		for (int i = 0; i < sizeDropped; ++i)
		{
			delete dropped[i];
			dropped[i] = other.dropped[i]->clone();
		}
	}
	return (*this);
}

std::string const& Character::getName() const
{
	return (name);
}

void Character::toString()
{
	std::cout << "P R I N T I N G character: " << name << std::endl;
	for (int i = 0; i < 4; ++i)
	{ 
		if (inventory[i])
		{
			std::cout << "Inventory [" 
					  << i 
					  << "]: " 
					  << inventory[i]->getType()
					  << std::endl;
		}
		else
			std::cout << "Inventory [" 
					  << i 
					  << "]: not equiped "
					  << std::endl;
	}
}

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; ++i)
	{
		if (inventory[i] == 0)
		{
			inventory[i] = m;
			++numMaterias;
			std::cout << "Equiped materia: " << m->getType() << std::endl;
			std::cout << "[Character] ["
			  << name
			  << "] Number of equiped materias: " 
			  << numMaterias 
			  << std::endl;
			return ;
		}
	}
	std::cout << "[Character] [ "<< name <<" ] inventory is full"
			  << std::endl;
	if (sizeDropped == 0)
	{
		++sizeDropped;
		dropped = new AMateria*[sizeDropped];
		dropped[0] = m;
	}
	else
	{
		++sizeDropped;
		AMateria **tmp = new AMateria* [sizeDropped];
		for (int i = 0; i < sizeDropped- 1; i++)
			tmp[i] = dropped[i];
		delete[] dropped;
		dropped = tmp;
		dropped[sizeDropped - 1] = m;
	}
	return ;
}

void Character::unequip(int idx)
{
	if (idx > 3 || idx < 0 || !inventory[idx])
		return ;
	numMaterias--;
	
	if (sizeDropped == 0)
	{
		++sizeDropped;
		dropped = new AMateria*[sizeDropped];
		dropped[0] = inventory[idx];
	}
	else
	{
		++sizeDropped;
		AMateria **tmp = new AMateria* [sizeDropped];
		for (int i = 0; i < sizeDropped - 1; i++)
			tmp[i] = dropped[i];
		delete[] dropped;
		dropped = tmp;
		dropped[sizeDropped - 1] = inventory[idx];
	}
	std::cout << "Inventory " << inventory[idx]->getType() << " unequiped"
			  << std::endl;
	std::cout << "[Character] ["
			  << name
			  << "] Number of equiped materias: " 
			  << numMaterias 
			  << std::endl;
	inventory[idx] = 0;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Inventory does not exists" << std::endl;
		return;
	}
	if (inventory[idx])
		inventory[idx]->use(target);
}


