/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 16:34:36 by rlobun            #+#    #+#             */
/*   Updated: 2026/07/11 11:28:05 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	type = "cure";
}

Cure::Cure(const Cure& other)
{
	*this = other;
}

Cure::~Cure()
{

}

Cure& Cure::operator=(const Cure& other)
{
	if (this != &other)
		type = other.type;
	return (*this);
}

Cure *Cure::clone() const
{
	return (new Cure());	
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}