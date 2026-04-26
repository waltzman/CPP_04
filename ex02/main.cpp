/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:10:26 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/26 16:23:35 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

# define RED_BG "\033[41m"
# define GREEN_BG "\033[42m"
# define RESET_BG "\033[0m"
int main() 
{
	std::cout << std::endl << std::endl;
	std::cout << RED_BG << " CONSTRUCTING A N I M A L S " RESET_BG << std::endl;
	std ::cout << std::endl;

	const AAnimal	*meta[10];

	for (int i = 0; i < 5; i++)
			meta[i] = new Cat();
	for (int i = 5; i < 10; i++)
			meta[i] = new Dog();
			
	std::cout << std::endl;

	std::cout << "\033[34mTesting\033[0m" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::cout << std::endl;
		std::cout << "Animal type: " << meta[i]->getType() << std::endl;
		meta[i]->makeSound();
		std::cout << std::endl;
	}
	std::cout << std::endl;

	std::cout << "\033[34mDeconstructing\033[0m" << std::endl;
	for (int i = 0; i < 10; i++)
		delete(meta[i]);

	// DEEP COPY TEST
	std::cout << std::endl << std::endl;
	std::cout << RED_BG << "#### D E E P   C O P Y   T E S T ####" << RESET_BG << std::endl;
	std::cout << std::endl;
	std::cout << "------  Dog creation ------" << std::endl;
 	Dog dog;
	std::cout << "------  Dog2 creation through assignment ------" << std::endl;
	Dog dog2 = dog;
	std::cout << "------  Dog3 creation through copy constructor ------" << std::endl;
	Dog dog3(dog);
	std::cout << "------  Dog4 creation ------" << std::endl;
	Dog	dog4;

	dog.getBrain()->setIdea("I have to sniff it", 0);
	dog.getBrain()->setIdea("I like to catch a ball ⚽", 1);
	dog.getBrain()->setIdea("I want to eat 🥩", 2);
	
	std::cout << "------  Dog4 to dog assignment ------" << std::endl;
	dog4 = dog;

	
	// std::cout << "Dog2 idea: " << dog2.getBrain()->getIdea(1) << std::endl;

	std::cout << "\033[34mTesting dog \033[0m" << std::endl;

	std::cout << "The " << dog.getType() << " dog has the following ideas: " << std::endl;
	dog.getBrain()->display(5);
	std::cout << std::endl;
	std::cout << "\033[34mTesting dog 2\033[0m" << std::endl;
	std::cout << "The " << dog2.getType() << " dog2 has the following ideas: " << std::endl;
	dog2.getBrain()->display(5);

	std::cout << std::endl;
	std::cout << "\033[34mTesting dog 3\033[0m" << std::endl;
	std::cout << "The " << dog3.getType() << " dog3 has the following ideas: " << std::endl;
	dog3.getBrain()->display(5);

	std::cout << std::endl;
	std::cout << "\033[34mTesting dog 4\033[0m" << std::endl;
	std::cout << "The " << dog4.getType() << " dog4 has the following ideas: " << std::endl;
	dog4.getBrain()->display(5);


}
