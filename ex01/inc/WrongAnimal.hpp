/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:00:25 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/25 17:03:33 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H
# include <iostream>

class	WrongAnimal
{	
	public:
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(WrongAnimal const & other);
		WrongAnimal const & operator=(WrongAnimal const & other);
		virtual ~WrongAnimal(void);

		virtual void makeSound(void) const;
		std::string getType(void) const;
	protected:
			std::string		type;

};

#endif
