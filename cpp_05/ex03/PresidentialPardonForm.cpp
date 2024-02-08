/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:06:25 by alappas           #+#    #+#             */
/*   Updated: 2024/02/08 04:03:59 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
: AForm("PresidentialPardonForm", 25, 5), _target("Default Target"){
    std::cout << "PresidentialPardonForm constructor init" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "PresidentialPardonForm destructor init" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
: AForm("PresidentialPardonForm", 25, 5), _target(target){
    std::cout << "PresidentialPardonForm full constructor init" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & other)
: AForm(other), _target(other._target) {
    std::cout << "PresidentialPardonForm copy constructor init" << std::endl;
    *this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm & other){
    std::cout << "PresidentialPardonForm assignment operator init" << std::endl;
    this->_target = other._target;
    return (*this);
}

void    PresidentialPardonForm::execute(const Bureaucrat &executor) const{
    if (!getSigned())
        throw AForm::NotSignedException();
    else if (getExecuteGrade() < executor.getGrade())
        throw AForm::GradeTooLowException();
    else
        std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox!" << std::endl;
}
