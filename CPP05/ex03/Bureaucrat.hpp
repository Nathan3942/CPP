/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 11:17:44 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/13 21:22:13 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <execution>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& copy);
		~Bureaucrat();

		Bureaucrat& operator=(const Bureaucrat& equal);

		const std::string	getName() const;
		int					getGrade() const;
		void				increment();
		void				decrement();
		void				signForm(AForm& form);
		void				executeForm(const AForm& form);

		class GradeTooHighException : public std::exception
		{
			const char* what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			const char*	what() const throw();
		};

		class NotSignedException : public std::exception
		{
			const char*	what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& out, const Bureaucrat& bur);

#endif