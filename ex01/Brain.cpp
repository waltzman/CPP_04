/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:37:50 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/25 15:33:00 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "Brain default constructor called";
}

Brain::Brain(const Brain& other)
{
	std::cout << "Brain copy constructor called";
	*this = other;
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "Brain assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	for (int i = 0; i < 100; i++)
		this->ideas[i]=other.ideas[i];
	return *this;
}
Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

void Brain::setIdea(std::string newIdea, int i) {
	if (i > 100 || i < 0)
	{
		std::cout << "Index out of boundaries" << std::endl;
		return ;
	}
	ideas[i] = newIdea;
}

std::string Brain::getIdea(int i) {
	if (i > 100 || i < 0)
	{
		std::cout << "Index out of boundaries" << std::endl;
		return NULL;
	}
	return ideas[i];
}
