/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 19:13:19 by njeanbou          #+#    #+#             */
/*   Updated: 2025/06/02 19:38:33 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "class_ex.hpp"
#include "unique_ptr.hpp"


int main ()
{
    UniquePtr<test> p(new test("kaka"));
    std::cout << p->getName() << std::endl;
    return (0);
}