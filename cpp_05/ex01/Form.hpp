/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:42:53 by alappas           #+#    #+#             */
/*   Updated: 2024/02/07 21:54:50 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	private:
		std::string _name;
		bool		_signed;
		const int	_signGrade;
		const int	_executeGrade;

	public:
		Form();
		~Form();
		Form(std::string name, int signGrade, int executeGrade);
		Form(const Form & other);
		Form&operator=(const Form & other);
		const std::string &getName() const;
		int getSignGrade() const;
		int getExecuteGrade() const;
		bool getSigned() const;
		void beSigned(const Bureaucrat& bureaucrat);

class GradeTooHighException : public std::exception{
	public:
		virtual const char* what() const throw();
};

class GradeTooLowException : public std::exception{
	public:
		virtual const char* what() const throw();
};

};

std::ostream& operator<<(std::ostream& stream, const Form& other);

#endif