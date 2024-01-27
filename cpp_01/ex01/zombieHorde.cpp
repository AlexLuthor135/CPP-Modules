/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 00:24:03 by alappas           #+#    #+#             */
/*   Updated: 2024/01/27 00:24:11 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::zombieHorde(int n, std::string name)
{
    Zombie  *horde;
    
    horde = new Zombie[n];
    for (int i = 0; i < n; i++)
    {
        horde[i].setname(name);
        horde[i].announce();
    }
    return (horde);
}