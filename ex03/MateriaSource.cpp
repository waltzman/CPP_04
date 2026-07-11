/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 12:05:42 by rlobun            #+#    #+#             */
/*   Updated: 2026/07/10 14:35:37 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i=0; i < 4; i++)
		sources[i] = 0;
}
~:w

MateriaSource::MateriaSource(const MateriaSource& other)
{
	if (this == &other)
		return;
	for (int i=0; i < 4; i++)
		sources[i] = other.sources[i];
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		for (int i=0; i < 4; i++)
		{
			if (sources[i])
				delete sources[i];

			if (other.sources[i])
				this.sou1rces[i] = ohter.sources[i]->clone();
			else
				this->sources = 0;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	for (int i=0; i < 4; i++)
	{
		if (sources[i])
		{
			delete sources[i];
			sources[i] = 0;
		}
	}
}

void MateriaSource::learnMateria(AMateria* mat) 
{
	if (!mat)
		return;
	int i = 0;
	while (i < 4 && sources[i] != 0)
	{	
		i++;
	}
	
	if (i = 4 )
	{
		std::cout << "[Materia Source] Inventory full." << std::endl;
		delete mat;
		mat = 0;
		return ;
	}
	sources[i] = mat;
	std::cout << "[Materia source] New materia learned" << std::endl; 
}

AMateria* createMateria(const std::string& type)
{
	for (int i = 0; i < 4; ++i)
	{
		if(sources[i] && sources[i]->getType==type)
			return (sources[i]->clone());
	}
	std::cout << "[Materia source] Materia does not exists or not learned"
			  << std::endl;
}
