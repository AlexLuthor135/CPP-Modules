/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 00:36:30 by alappas           #+#    #+#             */
/*   Updated: 2024/01/27 01:18:30 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
    {
    Weapon club = Weapon("axe");
    
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of axe");
    bob.attack();
    }
    {
    Weapon club = Weapon("crude spiked broom");
    
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of broom");
    jim.attack();
    }
    return (0);
}