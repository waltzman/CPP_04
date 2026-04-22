/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:57:54 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/22 16:20:57 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void)
{
	this->type = "Animal";
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
	this->type = type;
	std::cout << "Animal parametrized constructor called" << std::endl;
}

Animal::Animal(Animal const & other)
{
	*this = other;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal const & Animal::operator=(Animal const & other)
{
	this->type = other.type;
	std::cout << "Animal assignement constructor called" << std::endl;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
}

void	Animal::makeSound(void) const
{
	std::cout << "Animal makeSound default member function called" << std::endl;
}
