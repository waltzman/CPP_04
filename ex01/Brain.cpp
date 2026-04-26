/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 13:37:50 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/26 16:24:57 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <iostream>

Brain::Brain()
{
	std::cout << "🧠 Brain default constructor called 🧠" << std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout << "🧠 Brain copy constructor called 🧠" << std::endl;
	*this = other;
}

Brain& Brain::operator=(const Brain& other)
{
	std::cout << "🧠 Brain assignment operator called 🧠" << std::endl;
	if (this == &other)
		return *this;
	for (int i = 0; i < 100; i++)
		this->ideas[i]=other.ideas[i];
	return *this;
}
Brain::~Brain()
{
	std::cout << "🧠 Brain destructor called 🧠" << std::endl;
}

void Brain::setIdea(std::string newIdea, int i) {
	if (i > 100 || i < 0)
	{
		std::cout << "🚫 Index out of boundaries!!! 🚫" << std::endl;
		return ;
	}
	ideas[i] = newIdea;
}

std::string Brain::getIdea(int i) {
	if (i > 100 || i < 0)
	{
		std::cout << "🚫 Index out of boundaries!!! 🚫" << std::endl;
		return NULL;
	}

	if (ideas[i].empty())
	{
		std::cout << "🚫 No idea at this index!!! 🚫" << std::endl;
		return NULL;
	}
	return ideas[i];
}

void Brain::display(int i) {
	int end;
	if (i > 100 || i < 0)
	{
		std::cout << "🚫 Index out of boundaries!!! 🚫" << std::endl;
		end = 100;
		return ;
	}
	if (i == 0)
		end = 100;
	else
		end = i;
	for (int j = 0; j < end; j++)
	{
		std::cout << ideas[j] << std::endl;
	}	
}

