/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:27:32 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/25 15:26:58 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H
# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	Brain* brain;
	
	public:
		Cat();
		Cat(Cat const& other);
		Cat const& operator=(Cat const& other );
		~Cat(void);

		void makeSound(void) const;

	
};

#endif
