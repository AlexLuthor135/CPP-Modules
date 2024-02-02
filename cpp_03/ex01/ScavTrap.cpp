/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 19:03:59 by alappas           #+#    #+#             */
/*   Updated: 2024/02/01 19:53:44 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    this->name = "NoName";
    this->hp = 100;
    this->mp = 50;
    this->dmg = 20;
    std::cout << "ScavTrap constructor init" << std::endl;
}

ScavTrap::ScavTrap(std::string new_name)
{
    this->name = new_name;
    this->hp = 100;
    this->mp = 50;
    this->dmg = 20;
    std::cout << "ScavString constructor init" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor init" << std::endl;
}

void    ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << name << " is in guard mode!" << std::endl;
}

void    ScavTrap::attack(const std::string & target)
{
    if (hp <= 0)
        std::cout << "ScavTrap " << name << " is dead" << std::endl;
    else if (mp <= 0)
        std::cout << "ScavTrap " << name << " is out of mana!" << std::endl;
    else
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->dmg << " points of damage!" << std::endl;
        mp--;
    }
}