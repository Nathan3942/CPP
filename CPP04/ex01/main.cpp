/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 18:45:04 by njeanbou          #+#    #+#             */
/*   Updated: 2024/08/21 21:44:33 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();

	// delete j;
	// delete i;

	const int numAnimal = 4;
	Animal* a[numAnimal];

	for (int i = 0; i < numAnimal / 2; ++i)
		a[i] = new Dog();
	
	for (int i = numAnimal / 2; i < numAnimal; ++i)
		a[i] = new Cat();
	
	for (int i = 0; i < numAnimal; ++i)
		a[i]->makeSound();
	
	for (int i = 0; i < numAnimal; ++i)
		delete a[i];

	cout << "==== test Brain ====" << endl;

	Dog oDog;
	oDog.makeSound();

	oDog.getBrain()->ideas[0] = "Do Wouaf Wouaf";
	oDog.getBrain()->ideas[1] = "Do Wouafffffff";

	cout << "Idea 0 : " << oDog.getBrain()->ideas[0] << endl;
	cout << "Idea 1 : " << oDog.getBrain()->ideas[1] << endl;

	oDog.getBrain()->ideas[1] = "Hummmm eat";

	cout << "Idea 0 : " << oDog.getBrain()->ideas[0] << endl;
	cout << "Idea 1 : " << oDog.getBrain()->ideas[1] << endl;

	Dog nDog;
	nDog = oDog;

	cout << "Idea 0 : " << nDog.getBrain()->ideas[0] << endl;
	cout << "Idea 1 : " << nDog.getBrain()->ideas[1] << endl;

	return (0);
}