/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:25:39 by alappas           #+#    #+#             */
/*   Updated: 2024/02/01 19:46:18 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string new_name)
: name(new_name), hp(10), mp(10), dmg(0) {
    std::cout << "ClapString constructor init" << std::endl;
}

ClapTrap::ClapTrap()
: name("NoName"), hp(10), mp(10), dmg(0) {
    std::cout << "ClapTrap constructor init" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor init" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap & other){
    std::cout << "Copy assignment operator called" << std::endl;
    this->hp = other.hp;
    this->mp = other.mp;
    this->dmg = other.dmg;
    return (*this);
}

ClapTrap::ClapTrap(const ClapTrap& other){
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

void    ClapTrap::attack(const std::string & target)
{
    if (hp <= 0)
        std::cout << "ClapTrap " << name << " is dead" << std::endl;
    else if (mp <= 0)
        std::cout << "ClapTrap " << name << " is out of mana!" << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->dmg << " points of damage!" << std::endl;
        mp--;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hp <= 0)
    {
        std::cout << "ClapTrap " << name << " is dead!" << std::endl;
        return ;
    }
    else
    {
        hp -= amount;
        std::cout << "ClapTrap " << name << " received " << amount << " of damage!" << std::endl;
        std::cout << "ClapTrap " << name << " has " << hp << " HP remaining!" << std::endl;
    }
    if (hp <= 0)
        std::cout << "ClapTrap " << name << " died!" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (hp <= 0)
        std::cout << "ClapTrap " << name << " is dead!" << std::endl;
    else if (mp <= 0)
        std::cout << "ClapTrap " << name << "is out of mana!" << std::endl;
    else
    {
        std::cout << "ClapTrap " << this->name << " heals " << amount << " hit points!" << std::endl;
        hp += amount;
        mp--;
        std::cout << "ClapTrap " << this->name << " has " << hp << " HP remaining!" << std::endl;
    }
}