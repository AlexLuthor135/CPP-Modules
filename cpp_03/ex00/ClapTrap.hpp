/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 14:16:18 by alappas           #+#    #+#             */
/*   Updated: 2024/02/01 18:32:57 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> 

class ClapTrap{
	private:
		std::string name;
		int			hp;
		int			mp;
		int			dmg;
	public:
		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

		ClapTrap(std::string name);
		
		ClapTrap();
		ClapTrap(const ClapTrap & other);
		ClapTrap&operator=(const ClapTrap & other);
		~ClapTrap();
};