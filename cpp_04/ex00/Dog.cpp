/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 02:55:40 by alappas           #+#    #+#             */
/*   Updated: 2024/02/02 02:57:38 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    type = "Dog";
    std::cout << "Dog constructor init" << std::endl;
}
Dog::~Dog() {
    std::cout << "Dog destructor init" << std::endl;
}

Dog& Dog::operator=(const Dog & other){
    std::cout << "Dog copy assignment operator called" << std::endl;
    this->type = other.type;
    return (*this);
}

Dog::Dog(const Dog& other){
    std::cout << "Dog copy constructor called" << std::endl;
    *this = other;
}

void    Dog::makeSound() const{
    std::cout << "Dog sound" << std::endl;
}