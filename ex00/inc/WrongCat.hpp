/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 15:27:32 by rlobun            #+#    #+#             */
/*   Updated: 2026/04/26 16:50:48 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H
# include <iostream>
# include "WrongAnimal.hpp"

class	WrongCat : public WrongAnimal
{
	public:

		WrongCat(void);
		WrongCat(WrongCat const & other);
		WrongCat const & operator=(WrongCat const & other);
		virtual ~WrongCat(void);

		void	makeSound(void) const;
		std::string getType(void) const;
	private:
		std::string type;
};

#endif
