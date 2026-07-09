/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 16:34:36 by rlobun            #+#    #+#             */
/*   Updated: 2026/07/09 16:43:51 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice()
{
	type = "ice";
}

Ice::Ice(const Ice& other)
{
	*this = other;
}

Ice::~Ice();
{}

Ice& Ice::operator=(const Ice& other)
{
	if (this != &other)
		return (*this);
}

Ice* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICaracter& target)
{
	std::cout << " * heals " << target.getName() << "'s wounds *" << std::endl;
}
