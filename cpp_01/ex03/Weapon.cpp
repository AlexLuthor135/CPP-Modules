/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 00:46:14 by alappas           #+#    #+#             */
/*   Updated: 2024/01/29 19:14:06 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string w_type)
: type(w_type) {}

const std::string	Weapon::getType()
{
    return (type);
}

void    Weapon::setType(std::string new_type)
{
    this->type = new_type;
}