/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:10:26 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/26 16:42:43 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
int main() 
{
	const Animal* meta = new Animal(); 
	const Dog* dog = new Dog();
	const Cat* cat = new Cat();
	std::cout << "Cat type: " << cat->getType() << std::endl;
	std::cout << "Dog type: " << dog->getType() << std::endl;
    meta->makeSound();
    cat->makeSound();
    dog->makeSound();
	delete meta;
	delete dog;
	delete cat;
	std::cout << std::endl;
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongCat* wrongCat = new WrongCat();
	std::cout << "WrongCat type: " << wrongCat->getType() << std::endl;
	wrongMeta->makeSound();
	wrongCat->makeSound();
	delete wrongMeta;
	
	delete wrongCat;
return 0; }
