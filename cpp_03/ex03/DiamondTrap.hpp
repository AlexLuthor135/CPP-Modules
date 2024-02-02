/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 20:24:54 by alappas           #+#    #+#             */
/*   Updated: 2024/02/01 21:19:06 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FlagTrap.hpp"

class DiamondTrap : public ScavTrap, virtual public FlagTrap
{
	private:
		std::string name;
	public:
		DiamondTrap();
        DiamondTrap(std::string name);
        ~DiamondTrap();
		void	attack(const std::string &target);
		void	whoAmI();
};

#endif