/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 15:32:15 by njeanbou          #+#    #+#             */
/*   Updated: 2025/02/03 15:49:13 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base	*generate(void)
{
    int r = rand() % 3;
    if (r == 0)
        return (new A);
	else if (r == 1)
		return (new B);
	else
		return (new C);
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Identify ptr A" << std::endl;
	if (dynamic_cast<B*>(p))
		std::cout << "Identify ptr B" << std::endl;
	if (dynamic_cast<C*>(p))
		std::cout << "Identify ptr C" << std::endl;
}

void	identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "Identify ref A" << std::endl;
	}
	catch(const std::exception& e)
	{

	}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "Identify ref B" << std::endl;
	}
	catch(const std::exception& e)
	{

	}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "Identify ref C" << std::endl;
	}
	catch(const std::exception& e)
	{
		
	}
}

int main(void)
{
	srand(time(NULL));
	
	Base	*ptr = generate();
	Base& ref = *ptr;
	identify(ptr);
	identify(ref);
	delete ptr;
	return (0);
}