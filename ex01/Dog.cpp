/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:04:15 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/25 17:58:52 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : type("Dog")
{
	this->brain = new Brain();
	if (this->brain == NULL)
	{
		perror("Dog Brain allocation failed");
		std::cerr << "Exiting the process now." << std::endl;
		exit(1);
	}
	for (int i = 0; i < 3; i++)
	{
		std::string idea = std::to_string(i).append("I want to catch a mouse");
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
	this->type = other.type;
	std::cout << "🐶 Dog assignement constructor called 🐶" << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
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
