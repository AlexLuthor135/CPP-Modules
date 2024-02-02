/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 21:08:11 by alappas           #+#    #+#             */
/*   Updated: 2024/02/02 02:26:40 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string new_name)
{
    name = new_name + "_clap_name";
    hp = FlagTrap::hp;
    mp = ScavTrap::mp;
    dmg = FlagTrap::dmg;
}

DiamondTrap::DiamondTrap()
{
    name = "NoName_clap_name";
    hp = FlagTrap::hp;
    mp = ScavTrap::mp;
    dmg = FlagTrap::dmg;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destructor init" << std::endl;
}

void DiamondTrap::attack(const std::string & target)
{
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap names are: " << this->name << " and " << ClapTrap::name << std::endl;
}