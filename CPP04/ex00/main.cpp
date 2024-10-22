/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:45:04 by njeanbou          #+#    #+#             */
/*   Updated: 2024/10/22 16:20:00 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << "==== Animal test ====" << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const Animal z = *i;
	const Cat* y = new Cat();
	const Cat h = *y;

	Cat o(h);

	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << z.getType() << " " << std::endl;
	std::cout << y->getType() << " " << std::endl;
	std::cout << h.getType() << " " << std::endl;
	std::cout << o.getType() << " " << std::endl;
 
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

	std::cout << "==== Wrong Animal test ====" << std::endl;

	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();

	std::cout << wrongMeta->getType() << " " << std::endl;
	std::cout << wrongCat->getType() << " " << std::endl;

	wrongMeta->makeSound();
	wrongCat->makeSound();

	delete wrongMeta;
	delete wrongCat;

	return (0);
}