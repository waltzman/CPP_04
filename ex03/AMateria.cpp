/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 11:16:13 by rlobun            #+#    #+#             */
/*   Updated: 2026/05/07 11:25:40 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
}

AMateria::AMateria(const std::string &type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria &other)
{
	type = other.type;
}

AMateria& AMateria::operator=(const AMateria &other)
{
	if (this != &other)
		type =  other.type;
	return (*this);
}

AMateria::~AMateria()
{
}

const std::string& AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "Default attack (no type) on " << target.getName() << std::endl;
}
