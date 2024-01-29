/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 00:36:20 by alappas           #+#    #+#             */
/*   Updated: 2024/01/29 23:41:36 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string new_name)
: weapon(NULL), name(new_name) {}

void	HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()
{
    if (weapon == NULL)
    {
        std::cout << name << " attacks with only his willpower!" << std::endl;
        return ;
    }
    std::cout << name << " attacks with his " << weapon->getType() << std::endl;
}