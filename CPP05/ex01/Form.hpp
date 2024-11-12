/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:23:07 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/12 13:39:35 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "iostream"
#include "exception"
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string	_name;
        bool				_signed;
		const int			_signGrade;
		const int			_exGrade;
	
	public:
		Form();
		Form(std::string name, int signGrade, int exNote);
		Form(const Form& copy);
		~Form();

		Form&	operator=(const Form& equal);

		const std::string	getName() const;
		bool		getSigned() const;
		int			getSignGrade() const;
		int			getExGrade() const;

		void		beSigned(const Bureaucrat& bur);

		class GradeTooHighException : public std::exception
		{
			const char*	what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			const char*	what() const throw();
		};
};

std::ostream&	operator<<(std::ostream& out, const Form& form);

#endif