/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:45:04 by njeanbou          #+#    #+#             */
/*   Updated: 2024/08/21 20:24:10 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	cout << "==== Animal test ====" << endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal z = *i;
	const Cat* y = new Cat();
	const Cat h = *y;

	Cat o(h);

	cout << meta->getType() << " " << endl;
	cout << j->getType() << " " << endl;
	cout << i->getType() << " " << endl;
	cout << z.getType() << " " << endl;
	cout << y->getType() << " " << endl;
	cout << h.getType() << " " << endl;
	cout << o.getType() << " " << endl;
 
	meta->makeSound();
	j->makeSound();
	i->makeSound();
	z.makeSound();
	y->makeSound();
	h.makeSound();
	o.makeSound();

	delete meta;
	delete j;
	delete i;
	delete y;

	cout << "==== Wrong Animal test ====" << endl;

	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	cout << wrongMeta->getType() << " " << endl;
	cout << wrongCat->getType() << " " << endl;

	wrongMeta->makeSound();
	wrongCat->makeSound();

	delete wrongMeta;
	delete wrongCat;

	return (0);
}