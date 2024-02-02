/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 03:20:35 by alappas           #+#    #+#             */
/*   Updated: 2024/02/02 03:22:21 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor init" << std::endl;
}
Brain::~Brain() {
    std::cout << "Brain destructor init" << std::endl;
}

Brain& Brain::operator=(const Brain & other){
    std::cout << "Brain copy assignment operator called" << std::endl;
    for(int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    return (*this);
}

Brain::Brain(const Brain& other){
    std::cout << "Brain copy constructor called" << std::endl;
    *this = other;
}