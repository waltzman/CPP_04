/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 13:40:39 by rlobun            #+#    #+#             */
/*   Updated: 2026/07/09 13:40:39 by rlobun           ###   ########.fr       */                                                           */
/* ************************************************************************** */

#include "AMAteria.hpp"

AMateria::AMateria()
{
	type = "not defined";
}

AMateria::AMateria(const std::string& type_name)
{
	type = new_type;
}

AMateria::AMateria(const AMateria& other)
{
	*this = other;
}

AMateria& AMateria::operator=(const AMateria& other)
{
	if (this != &other)
	{
		*this = other;
		return (*this);
	}
}

AMateria::~AMateria()
{

}

const std::string& AMateria::getType  const
{	
	return (type);
}

void AMateria::setType(const std::string& new_type)
{
	type = new_type;
}

void AMateria.toString()
{
	std::cout << "type" << type << std::endl;
}

void AMateria::use(ICharacter& target)
{
	std::cout << " * uses materia on " <<target.getName() << " *" << std::endl;
}




