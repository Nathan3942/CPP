/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vboxuser <vboxuser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/20 17:17:01 by vboxuser          #+#    #+#             */
/*   Updated: 2024/06/20 17:49:09 by vboxuser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main ()
{
    //chaine charactere
    std::string str = "HI THIS IS BRAIN";
	std::string str2 = "KAKA O KUKU";
    //pointeur sur la chaine
    std::string* stringPTR = &str;
    //referance a la chaine
    std::string& stringREF = str;

    std::cout << "adresse memoire de la chaine std :		" << &str << std::endl;
	std::cout << "adresse memoire de la chaine std2 :		" << &str2 << std::endl;
    std::cout << "addresse memoire du pointeur stringPTR :	" << stringPTR << std::endl;
    std::cout << "addresse memoire de la referance stringREF :	" << &stringREF << std::endl;

    std::cout << "valeur de la chaine str :		" << str << std::endl;
	std::cout << "valeur de la chaine str2 :		" << str2 << std::endl;
    std::cout << "valeur du pointeur stringPTR :		" << *stringPTR << std::endl;
    std::cout << "valeur de la referance stringREF :	" << stringREF << std::endl;
	std::cout << std::endl;
	stringPTR = &str2;

	std::cout << "adresse memoire de la chaine std :		" << &str << std::endl;
	std::cout << "adresse memoire de la chaine std2 :		" << &str2 << std::endl;
    std::cout << "addresse memoire du pointeur stringPTR :	" << stringPTR << std::endl;
    std::cout << "addresse memoire de la referance stringREF :	" << &stringREF << std::endl;

    std::cout << "valeur de la chaine str :		" << str << std::endl;
	std::cout << "valeur de la chaine str2 :		" << str2 << std::endl;
    std::cout << "valeur du pointeur stringPTR :		" << *stringPTR << std::endl;
    std::cout << "valeur de la referance stringREF :	" << stringREF << std::endl;
	std::cout << std::endl;

	stringREF = str2;

	std::cout << "adresse memoire de la chaine std :		" << &str << std::endl;
	std::cout << "adresse memoire de la chaine std2 :		" << &str2 << std::endl;
    std::cout << "addresse memoire du pointeur stringPTR :	" << stringPTR << std::endl;
    std::cout << "addresse memoire de la referance stringREF :	" << &stringREF << std::endl;

    std::cout << "valeur de la chaine str :		" << str << std::endl;
	std::cout << "valeur de la chaine str2 :		" << str2 << std::endl;
    std::cout << "valeur du pointeur stringPTR :		" << *stringPTR << std::endl;
    std::cout << "valeur de la referance stringREF :	" << stringREF << std::endl;
	std::cout << std::endl;

    return (0);
}