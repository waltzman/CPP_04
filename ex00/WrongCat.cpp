/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:09:46 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/25 17:53:32 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : type("WrongCat")
{
	std::cout << "🙀 WrongCat default constructor called 🙀" << std::endl;
}


WrongCat::WrongCat(WrongCat const & other)
{
	*this = other;
	std::cout << "🙀 WrongCat copy constructor called 🙀" << std::endl;
}

WrongCat const & WrongCat::operator=(WrongCat const & other)
{
	this->type = other.type;
	std::cout << "🙀 WrongCat assignement constructor called 🙀" << std::endl;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "🙀 WrongCat destructor called 🙀" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "🙀🙀🙀 WrongCat Meow Meow!!! 🙀🙀🙀" << std::endl;
}
std::string	WrongCat::getType(void) const
{
	return (this->type);
}
