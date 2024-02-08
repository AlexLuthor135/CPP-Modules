/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:06:25 by alappas           #+#    #+#             */
/*   Updated: 2024/02/08 04:04:02 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
: AForm("RobotomyRequestForm", 72, 45), _target("Default Target"){
    std::cout << "RobotomyRequestForm constructor init" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "RobotomyRequestForm destructor init" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
: AForm("RobotomyRequestForm", 72, 45), _target(target){
    std::cout << "RobotomyRequestForm full constructor init" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & other)
: AForm(other), _target(other._target) {
    std::cout << "RobotomyRequestForm copy constructor init" << std::endl;
    *this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm & other){
    std::cout << "RobotomyRequestForm assignment operator init" << std::endl;
    this->_target = other._target;
    return (*this);
}

void    RobotomyRequestForm::execute(const Bureaucrat &executor) const{
    std::cout << "Robotomy drilling noises!" << std::endl;
    if (!getSigned())
        throw AForm::NotSignedException();
    else if (getExecuteGrade() < executor.getGrade())
        throw AForm::GradeTooLowException();
    else{
        std::cout  << executor.getName() << " tries to robotomize (something?)" << std::endl;
        if (std::rand() % 2 == 0) 
            std::cout << this->_target << " has been robotomized successfully!" << std::endl;
        else
            std::cout << this->_target << " robotomization has failed!" << std::endl;
    }
}
