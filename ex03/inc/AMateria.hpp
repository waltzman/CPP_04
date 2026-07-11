/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/09 13:16:48 by rlobun            #+#    #+#             */
/*   Updated: 2026/07/10 23:35:54 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H


#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string type;

	public:

	// Constructors

		AMateria();
		AMateria(const std::string& type_name);
		AMateria(const AMateria& other);
	
	// Deconstructor

		virtual ~AMateria();
	
	// Operators 
	
		AMateria& operator=(const AMateria& other);
	
	// Getters

		const	std::string& getType() const;
	
	// Setters

		void	setType(const std::string& new_type);
	
	// Utils
		void	toString();

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
