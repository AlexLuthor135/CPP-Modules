/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 19:42:53 by alappas           #+#    #+#             */
/*   Updated: 2024/02/08 03:31:15 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;

class AForm{
	private:
		std::string _name;
		bool		_signed;
		const int	_signGrade;
		const int	_executeGrade;

	public:
		AForm();
		virtual ~AForm();
		AForm(std::string name, int signGrade, int executeGrade);
		AForm(const AForm & other);
		AForm&operator=(const AForm & other);

		const std::string &getName() const;
		int getSignGrade() const;
		int getExecuteGrade() const;
		bool getSigned() const;
		void beSigned(const Bureaucrat& bureaucrat);
		
		virtual void execute(Bureaucrat const & executor) const = 0;

class GradeTooHighException : public std::exception{
	public:
		virtual const char* what() const throw();
};

class GradeTooLowException : public std::exception{
	public:
		virtual const char* what() const throw();
};
class NotSignedException : public std::exception{
	public:
		virtual const char* what() const throw();
};

};

std::ostream& operator<<(std::ostream& stream, const AForm& other);

#endif