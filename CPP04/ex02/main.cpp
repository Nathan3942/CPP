/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 11:09:06 by njeanbou          #+#    #+#             */
/*   Updated: 2024/12/02 15:56:23 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // const int numAnimal = 4;
	// Animal* a[numAnimal];

	// for (int i = 0; i < numAnimal / 2; ++i)
	// 	a[i] = new Dog();
	
	// for (int i = numAnimal / 2; i < numAnimal; ++i)
	// 	a[i] = new Cat();
	
	// for (int i = 0; i < numAnimal; ++i)
	// 	a[i]->makeSound();
	
	// for (int i = 0; i < numAnimal; ++i)
	// 	delete a[i];

	// std::cout << "==== test Brain ====" << std::endl;

	// Dog oDog;
	// oDog.makeSound();

	// oDog.getBrain()->ideas[0] = "Do Wouaf Wouaf";
	// oDog.getBrain()->ideas[1] = "Do Wouafffffff";

	// std::cout << "Idea 0 : " << oDog.getBrain()->ideas[0] << std::endl;
	// std::cout << "Idea 1 : " << oDog.getBrain()->ideas[1] << std::endl;

	// oDog.getBrain()->ideas[1] = "Hummmm eat";

	// std::cout << "Idea 0 : " << oDog.getBrain()->ideas[0] << std::endl;
	// std::cout << "Idea 1 : " << oDog.getBrain()->ideas[1] << std::endl;

	// Dog nDog;
	// nDog = oDog;

	// std::cout << "Idea 0 : " << nDog.getBrain()->ideas[0] << std::endl;
	// std::cout << "Idea 1 : " << nDog.getBrain()->ideas[1] << std::endl;

	Animal* dog = new Dog();
	Animal* cat = new Cat();

	Animal* ani = new Animal();

	dog->makeSound();
	cat->makeSound();
	ani->makeSound();

	return (0);
}