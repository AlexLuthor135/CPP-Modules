/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 00:31:10 by alappas           #+#    #+#             */
/*   Updated: 2024/01/27 01:08:12 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{
	private:
		Weapon *weapon;
		std::string name;
	
	public:
		HumanB(std::string new_name);
		void	setWeapon(Weapon &weapon);
		void	attack();
};

#endif