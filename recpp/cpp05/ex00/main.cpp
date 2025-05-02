/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 13:47:28 by njeanbou          #+#    #+#             */
/*   Updated: 2025/04/04 14:20:32 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int main()
{
    try 
	{
		Bureaucrat b1("Bob", 1);
		std::cout << b1 << std::endl;
		b1.decrement();
		std::cout << b1.getGrade() << std::endl;
		b1.increment();
		std::cout << b1.getGrade() << std::endl;
		b1.increment();
		std::cout << b1.getGrade() << std::endl;
    }
    catch (std::exception &e)
	{
        std::cout << "Exception: " << e.what() << std::endl;
    }
    try
	{
        Bureaucrat b3("Charlie", 155);
        std::cout << b3 << std::endl;

        b3.increment();
    }
    catch (std::exception &e)
	{
        std::cout << "Exception: " << e.what() << std::endl;
    }

    return (0);
}