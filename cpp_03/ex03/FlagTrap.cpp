/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FlagTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 20:02:14 by alappas           #+#    #+#             */
/*   Updated: 2024/02/01 20:08:28 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FlagTrap.hpp"

FlagTrap::FlagTrap()
{
    this->name = "NoName";
    this->hp = 100;
    this->mp = 100;
    this->dmg = 30;
    std::cout << "FlagTrap constructor init" << std::endl;
}

FlagTrap::FlagTrap(std::string new_name)
{
    this->name = new_name;
    this->hp = 100;
    this->mp = 100;
    this->dmg = 30;
    std::cout << "FlagString constructor init" << std::endl;
}

FlagTrap::~FlagTrap()
{
    std::cout << "FlagTrap destructor init" << std::endl;
}

void    FlagTrap::attack(const std::string & target)
{
    if (hp <= 0)
        std::cout << "FlagTrap " << name << " is dead" << std::endl;
    else if (mp <= 0)
        std::cout << "FlagTrap " << name << " is out of mana!" << std::endl;
    else
    {
        std::cout << "FlagTrap " << this->name << " attacks " << target << ", causing " << this->dmg << " points of damage!" << std::endl;
        mp--;
    }
}

void    FlagTrap::highFivesGuys()
{
    if (hp <= 0)
    {
        std::cout << "FlagTrap " << name << " is dead" << std::endl;
        return ;
    }
    std::cout << "FlagTrap " << name << " gave a high five!" << std::endl;
}