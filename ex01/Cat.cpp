/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:01:22 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/26 01:43:06 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
# include <iostream>
# include <sstream>

Cat::Cat(void) : type("Cat")
{
	this->brain = new Brain();
	for (int i = 0; i < 10; i++)
	{	
		std::string nums = "0123456789";
		std::string idea = this->getType() + "idea " + nums[i] + ": I want to catch a mouse";
		this->brain->setIdea(idea, i);
	}
	std::cout << "🐱  Cat default constructor called  🐱" << std::endl;
}

Cat::Cat(Cat const & other)
{
	*this = other;
	std::cout << "🐱  Cat copy constructor called  🐱" << std::endl;
}

Cat const & Cat::operator=(Cat const & other)
{
	std::cout << "🐱 Cat assignement operator called 🐱" << std::endl;
	if (this == &other)
		return *this;
	this->type = other.type;
	this->brain = new Brain();
	*this->brain = *other.brain;
	return *this;
}

Cat::~Cat(void)
{
	delete this->brain;
	std::cout << "🐱 Cat destructor called 🐱" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "🐱🐱🐱 Cat Meow Meow 🐱🐱🐱" << std::endl;
}

std::string	Cat::getType(void) const
{
	return (this->type);
}

Brain* Cat::getBrain(void) const
{
	return (this->brain);
}
