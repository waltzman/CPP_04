/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 16:10:26 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/22 16:23:12 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
int main() 
{
	const Animal* meta = new Animal(); 
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
    meta->makeSound();
    cat->makeSound();
    dog->makeSound();
	delete meta;
	delete dog;
	delete cat;
return 0; }