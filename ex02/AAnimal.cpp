/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:57:54 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/26 01:13:36 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void)
{
	this->type = "AAnimal";
	std::cout << "🐾 AAnimal default constructor called 🐾" << std::endl;
}

AAnimal::AAnimal(std::string type)
{
	this->type = type;
	std::cout << "🐾 AAnimal parametrized constructor called 🐾" << std::endl;
}

AAnimal::AAnimal(AAnimal const & other)
{
	*this = other;
	std::cout << "🐾 AAnimal copy constructor called 🐾" << std::endl;
}

AAnimal const & AAnimal::operator=(AAnimal const & other)
{
	this->type = other.type;
	std::cout << "🐾 AAnimal assignement constructor called 🐾" << std::endl;
	return (*this);
}

AAnimal::~AAnimal(void)
{
	std::cout << "🐾 AAnimal destructor called 🐾" << std::endl;
}

void	AAnimal::makeSound(void) const
{
	std::cout << "🐾 AAnimal makeSound default member function called 🐾" << std::endl;
}

std::string	AAnimal::getType(void) const
{
	return (type);
}
