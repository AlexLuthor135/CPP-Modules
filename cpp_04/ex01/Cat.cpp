/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 02:47:50 by alappas           #+#    #+#             */
/*   Updated: 2024/02/03 14:19:57 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat constructor init" << std::endl;
    type = "Cat";
    this->brain = new Brain();
}
Cat::~Cat() {
    delete this->brain;
    std::cout << "Cat destructor init" << std::endl;
}

Cat& Cat::operator=(const Cat & other){
    std::cout << "Cat copy assignment operator called" << std::endl;
    this->type = other.type;
    this->brain = new Brain();
    *(this->brain) = *(other.brain);
    return (*this);
}

Cat::Cat(const Cat& other){
    std::cout << "Cat copy constructor called" << std::endl;
    *this = other;
}

void    Cat::makeSound() const{
    std::cout << "Cat sound" << std::endl;
}