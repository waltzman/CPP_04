/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 16:34:36 by rlobun            #+#    #+#             */
/*   Updated: 2026/07/10 11:58:17 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure()
{
	type = "Cure";
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
		return (*this);
}

Cure *Cure::clone() const
{
	return (new Cure());	
}

void Cure::use(ICharacte& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl
}