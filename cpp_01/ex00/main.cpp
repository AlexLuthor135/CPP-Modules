/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:41:22 by alappas           #+#    #+#             */
/*   Updated: 2024/01/26 23:53:28 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *zombie;
    Zombie chump;

    zombie = chump.newZombie("Zombilla");
    delete zombie;
    chump.randomChump("Zomboid");
    return (0);
}