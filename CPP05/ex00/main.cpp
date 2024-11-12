/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:57:37 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/12 12:07:01 by njeanbou         ###   ########.fr       */
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

    return 0;
}
