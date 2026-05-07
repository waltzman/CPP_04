r* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 10:55:46 by rlobun            #+#    #+#             */
/*   Updated: 2026/05/07 11:15:38 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public:
		AMateria();
		AMateria(const std::string &type);
		AMateria(const AMateria &other);
		AMateria& operator=(const AMateria &other);
        virtual ~AMateria();

        const std::string& getType() const;

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter &target);

    protected:
        std::string type;
};

#endif
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
AMateria.hpp                                                                                        27/39
-- INSERT --nst AMateria &src);
		virtual ~AMateria();

		const std::string& getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter &target);
	
	protected:
		std::string type;
};

#endifi
