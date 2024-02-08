/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:42:53 by alappas           #+#    #+#             */
/*   Updated: 2024/02/08 04:06:40 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat{
	private:
		std::string _name;
		int			_grade;

	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat & other);
		Bureaucrat&operator=(const Bureaucrat & other);
		const std::string &getName() const;
		int getGrade() const;
		void	signForm(AForm& form);
		void	increment();
		void	decrement();
		
		void executeForm(AForm const &form);
class GradeTooHighException : public std::exception{
	public:
		virtual const char* what() const throw();
};

class GradeTooLowException : public std::exception{
	public:
		virtual const char* what() const throw();
};

};

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& other);

#endif