/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 12:23:07 by njeanbou          #+#    #+#             */
/*   Updated: 2024/11/12 13:39:35 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "iostream"
#include "exception"
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        const std::string	_name;
		const int			_signGrade;
		const int			_exGrade;
		bool				_signed;
	
	public:
		AForm();
		AForm(std::string name, int signGrade, int exNote);
		AForm(const AForm& copy);
		~AForm();

		AForm&	operator=(const AForm& equal);

		const std::string	getName() const;
		bool		getSigned() const;
		int			getSignGrade() const;
		int			getExGrade() const;

		void		beSigned(const Bureaucrat& bur);
		virtual int	execute(const Bureaucrat& bur) const = 0;

		class GradeTooHighException : public std::exception
		{
			const char*	what() const throw();
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

std::ostream&	operator<<(std::ostream& out, const AForm& Aform);

#endif