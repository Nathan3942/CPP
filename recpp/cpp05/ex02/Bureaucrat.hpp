/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: njeanbou <njeanbou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 13:48:07 by njeanbou          #+#    #+#             */
/*   Updated: 2025/04/10 12:06:47 by njeanbou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
    private:
        std::string name;
        int grade;

    public:
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat& copy);
        ~Bureaucrat();

        Bureaucrat& operator=(const Bureaucrat& equal);
        
        void    signForm(AForm& form);
        void    executeAForm(const AForm& form);

        std::string getName() const;
        int getGrade() const;
		void	increment();
		void	decrement();


        class GradeToLowException : public std::exception
        {
        	const char* what() const throw();
    	};

    	class GradeToHeighException : public std::exception
    	{
    		const char* what() const throw();
    	};
};

std::ostream&   operator<<(std::ostream& out, const Bureaucrat& bur);

#endif