/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 11:09:43 by rlobun            #+#    #+#             */
/*   Updated: 2026/07/10 11:18:14 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP
#include <iostream>

class MateriaSource : public IMateriaSource
{
	private:
		AMateria* sources[4];

	public:
		MateriaSource();
		MateriaSource(const MateriaSource& other);
		~MateriaSource();
		MateriaSource& operator=(const MateriaSource& other);

		void learnMateria(AMateria *);
		AMateria* createMateria(const std::string& type);
}

#endif
