/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 11:26:17 by rlobun            #+#    #+#             */
/*   Updated: 2026/05/07 11:38:54 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include "AMateria.hpp"
#include <iostream>
#include <string>

class AMateria;

class ICharacter
{
	public:
		virtual const std::string& getName() const = 0;
		virtual void equip(AMateria *materia) = 0;
		virtual void unequip(int index) = 0;
		virtual void use(int index, ICharacter &target) = 0;
		virtual AMateria* getMateria(int idx) const = 0;

		virtual ~ICharacter()
		{

		}
};

#endif

