/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yismaail <yismaail@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 06:06:45 by yismaail          #+#    #+#             */
/*   Updated: 2023/10/25 22:22:16 by yismaail         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main2(){
    IMateriaSource* src = new MateriaSource();
src->learnMateria(new Ice());
src->learnMateria(new Cure());
ICharacter* me = new Character("me");
AMateria* tmp;
tmp = src->createMateria("cure");
me->equip(tmp);
tmp = src->createMateria("ice");
me->equip(tmp);
ICharacter* bob = new Character("bob");
AMateria *s = me->save(0);
// me->equip(tmp);
me->unequip(0);
me->equip(s);
me->use(0, *bob);
me->use(1, *bob);
delete bob;
delete me;
delete src;
return 0;
}

int main ()
{
	main2();
	system("leaks Materia");
	return 0;
}