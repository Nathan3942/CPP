/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:32:30 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/14 18:15:27 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{

	public:
		Intern();
		Intern(const Intern& copy);
		~Intern();

		// AForm*	makePresident(const std::string target);
		// AForm*	makeRobot(const std::string target);
		// AForm*	makeShrubbery(const std::string target);

		AForm*	makeForm(const std::string formName, const std::string target);

};


#endif