/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:41:33 by alappas           #+#    #+#             */
/*   Updated: 2024/01/27 00:24:49 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
: name("NoName") {}

Zombie::~Zombie()

{
    std::cout << name << " got destroyed by the forces of light" << std::endl;
}

void    Zombie::hordedestroy(Zombie *horde)
{
    delete [] horde;
}

void    Zombie::announce()

{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::setname(std::string name)
{
    this->name = name;
}