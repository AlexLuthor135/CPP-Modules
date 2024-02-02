/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:48:41 by alappas           #+#    #+#             */
/*   Updated: 2024/02/01 19:00:00 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main ()
{
    ClapTrap a("Hero");

    a.attack("Villain");
    a.takeDamage(7);
    a.beRepaired(10);
    a.takeDamage(7);
    a.beRepaired(10);
    a.takeDamage(7);
    a.beRepaired(10);
    a.beRepaired(10);
    a.beRepaired(10);
    a.beRepaired(10);
    a.beRepaired(10);
    a.beRepaired(10);
    a.beRepaired(10);
    a.beRepaired(10);
    a.beRepaired(10);
    a.beRepaired(10);
}