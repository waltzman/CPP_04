/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:04:15 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/25 19:55:22 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : type("Dog")
{
	this->brain = new Brain();
	for (int i = 0; i < 100; i++)
	{    // number to be converted to a string

		std::string i_str;          // string which will contain the result

		std::ostringstream convert;   // stream used for the conversion

		convert << i;      // insert the textual representation of 'Number' in the characters in the stream

		i_str = convert.str();

		//std::string nums = "0123456789";
		std::string idea = this->getType() + " idea " + i_str + ": I want to barn: woof woof!!!";
		this->brain->setIdea(idea, i);
	}
	std::cout << "🐶 Dog default constructor called 🐶" << std::endl;
}

Dog::Dog(Dog const & other)
{
	*this = other;
	std::cout << "🐶 Dog copy constructor called 🐶" << std::endl;
}

Dog const & Dog::operator=(Dog const & other)
{
	std::cout << "🐶 Dog assignement constructor called 🐶" << std::endl;
	if (this == &other)
		return *this;

	this->type = other.type;
	this->brain = new Brain();
	*this->brain = *other.brain;
	return *this;
}

Dog::~Dog(void)
{
	delete this->brain;
	std::cout << "🐶 Dog destructor called 🐶" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "🐶🐶🐶 Dog Woof Woof!!! 🐶🐶🐶" << std::endl;
}
std::string	Dog::getType(void) const
{
	return (this->type);
}

Brain* Dog::getBrain(void) const
{
	return (this->brain);
}
