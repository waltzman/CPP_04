/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 12:12:39 by rlobun            #+#    #+#             */
/*   Updated: 2026/05/07 12:29:54 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"


class Character: virtual public ICharacter
{
	public:
		Character();
		Character(const std::string& name);
		Character(const Character& other);
		Character& operator=(const Character &other);
		~Character();

		const std::string& getName() const;
		AMateria* getMateria(int index) const;

		void equip(AMateria *materia);
		void unequip(int index);
		void use(int index, ICharacter &target);

	private:
		std::string name;
		AMateria* inventory[4];

};
