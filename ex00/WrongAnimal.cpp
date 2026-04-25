/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:05:24 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/25 17:52:18 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	this->type = "WrongAnimal";
	std::cout << "👿 WrongAnimal default constructor called 👿" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
	this->type = type;
	std::cout << "👿 WrongAnimal parametrized constructor called 👿" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & other)
{
	*this = other;
	std::cout << "👿 WrongAnimal copy constructor called 👿" << std::endl;
}

WrongAnimal const & WrongAnimal::operator=(WrongAnimal const & other)
{
	this->type = other.type;
	std::cout << "👿 WrongAnimal assignement constructor called 👿" << std::endl;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "👿 WrongAnimal destructor called 👿" << std::endl;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "👿 WrongAnimal makeSound default member function called 👿" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}
