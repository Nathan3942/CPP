/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 13:30:39 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/13 15:47:35 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main ()
{
	try
	{
		Bureaucrat b1("Bob", 60);
		std::cout << b1 << std::endl;
		Form f1("Greve", 50, 20);
		std::cout << f1 << std::endl;

		b1.signForm(f1);
    }
    catch (std::exception &e)
	{
        std::cout << "Exception: " << e.what() << std::endl;
    }

	try
	{
		Bureaucrat b1("Carlos", 60);
		std::cout << b1 << std::endl;
		Form f1("Banane", 70, 20);
		std::cout << f1 << std::endl;

		b1.signForm(f1);

		std::cout << f1 << std::endl;
    }
    catch (std::exception &e)
	{
        std::cout << "Exception: " << e.what() << std::endl;
    }

	try
	{
		Bureaucrat b1("Poppy", 1);
		std::cout << b1 << std::endl;
		Form f1("Blocus", 0, 20);
		std::cout << f1 << std::endl;

		b1.signForm(f1);
    }
    catch (std::exception &e)
	{
        std::cout << "Exception: " << e.what() << std::endl;
    }

	return (0);
}