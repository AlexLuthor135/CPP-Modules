/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 02:36:31 by alappas           #+#    #+#             */
/*   Updated: 2024/02/02 02:47:45 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
: type("Default") {
    std::cout << "Animal constructor init" << std::endl;
}

Animal::Animal(std::string new_type)
: type(new_type) {
    std::cout << "AniStr constructor init" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor init" << std::endl;
}

Animal& Animal::operator=(const Animal & other){
    std::cout << "Animal copy assignment operator called" << std::endl;
    this->type = other.type;
    return (*this);
}

Animal::Animal(const Animal& other){
    std::cout << "Animal copy constructor called" << std::endl;
    *this = other;
}

void    Animal::makeSound() const{
    std::cout << "Animal sound" << std::endl;
}

const std::string &Animal::getType()const{
    return (this->type);
}