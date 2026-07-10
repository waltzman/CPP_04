/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 11:19:07 by rlobun            #+#    #+#             */
/*   Updated: 2026/07/10 14:50:16 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string name;
		AMateria *inventory[4];
		AMateria **dropped;
		int sizeDropped;
		int numMaterias;

	public:
		Charcater();
		Character(const std::string& newName);
		Character(consr Character & other);
		~Character();

		Character& operator=(const Character& other);

		std::string const& getName() const;

		void toString();

		void equip(AMateria* m);
		void uneqip(int idx);
		void use(int idx, ICharacter& target);

};

#endif
