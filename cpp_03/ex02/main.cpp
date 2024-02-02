/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:48:41 by alappas           #+#    #+#             */
/*   Updated: 2024/02/01 20:11:50 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

int main ()
{
    ClapTrap a("Hero");
    ScavTrap b("Villain");
    FlagTrap c("Peasant");

    a.attack("Villain");
    b.attack("Hero");
    c.attack("Peasant");
    
    b.takeDamage(7);
    b.takeDamage(7);
    b.takeDamage(7);
    b.beRepaired(10);

    c.takeDamage(1);
    c.highFivesGuys();
    c.beRepaired(10);
    
    // b.guardGate();
    // a.beRepaired(10);
    // a.beRepaired(10);
    // a.beRepaired(10);
    // a.beRepaired(10);
    // a.beRepaired(10);
    // a.beRepaired(10);
    // a.beRepaired(10);
    // a.beRepaired(10);
}