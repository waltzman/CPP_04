/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:27:32 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/25 18:36:33 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"
class Dog: public Animal
{
	public:
		Dog();
		Dog(Dog const& other);
		Dog const& operator=(Dog const& other);
		~Dog(void);

		void makeSound(void) const;
		std::string getType(void) const;
		Brain* getBrain(void) const;
	private:
		std::string type;
		Brain *brain;
	
};

#endif
