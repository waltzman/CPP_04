/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:01:22 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/22 16:20:57 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const & other)
{
	*this = other;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat const & Cat::operator=(Cat const & other)
{
	this->type = other.type;
	std::cout << "Cat assignement constructor called" << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Cat Meow Meow" << std::endl;
}