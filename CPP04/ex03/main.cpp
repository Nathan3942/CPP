/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 12:43:40 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/12 11:06:02 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Character.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Cure());
    src->learnMateria(new Ice());

    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    AMateria* trash = me->get_memory_materia(3);
    AMateria* trash2 = me->get_memory_materia(1);
    me->unequip(3);
    me->unequip(1);
    // me->equip(tmp);
    // delete tmp;
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->use(2, *bob);
    me->use(3, *bob);
    // me->use(4, *bob);
    delete bob;
    delete me;
    delete src;
    return 0;
}