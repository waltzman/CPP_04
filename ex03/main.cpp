/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main0.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlobun <rlobun@student.42madrid.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 15:58:46 by rlobun            #+#    #+#             */
/*   Updated: 2026/07/11 15:59:16 by rlobun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
    std::cout << "========== SUBJECT TEST ==========\n";

    IMateriaSource* src = new MateriaSource();

    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;

    tmp = src->createMateria("ice");
    me->equip(tmp);

    tmp = src->createMateria("cure");
    me->equip(tmp);

    ICharacter* bob = new Character("bob");

    me->use(0, *bob);
    me->use(1, *bob);

    std::cout << "\n========== UNKNOWN MATERIA ==========\n";

    tmp = src->createMateria("fire");
    if (!tmp)
        std::cout << "fire materia doesn't exist\n";

    std::cout << "\n========== FULL INVENTORY ==========\n";

    me->equip(src->createMateria("ice"));
    me->equip(src->createMateria("cure"));

    // Inventory already full.
    me->equip(src->createMateria("ice"));

    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);

    std::cout << "\n========== INVALID INDEX ==========\n";

    me->use(-1, *bob);
    me->use(4, *bob);

    std::cout << "\n========== UNEQUIP TEST ==========\n";

    AMateria* floor = src->createMateria("ice");

    me->unequip(0);

    me->use(0, *bob);      // Nothing should happen

    delete floor;

    std::cout << "\n========== DEEP COPY ==========\n";

    Character original("Alice");

    original.equip(src->createMateria("ice"));
    original.equip(src->createMateria("cure"));

    Character copy(original);

    std::cout << "Original:\n";
    original.use(0, original);
    original.use(1, original);

    std::cout << "Copy:\n";
    copy.use(0, copy);
    copy.use(1, copy);

    std::cout << "\nUnequip original slot 0\n";

    original.unequip(0);

    std::cout << "Original:\n";
    original.use(0, original);      // Nothing

    std::cout << "Copy:\n";
    copy.use(0, copy);              // Still works

    std::cout << "\n========== ASSIGNMENT OPERATOR ==========\n";

    Character other("Other");

    other = copy;

    other.use(0, other);
    other.use(1, other);

    std::cout << "\n========== CLEANUP ==========\n";

    delete bob;
    delete me;
    delete src;

    return 0;
}