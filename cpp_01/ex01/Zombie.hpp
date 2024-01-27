/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:41:58 by alappas           #+#    #+#             */
/*   Updated: 2024/01/27 00:43:21 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie{
	private:
		std::string name;
	
	public:
	Zombie();
	~Zombie();
	void		announce(void);
	void		setname(std::string name);
	Zombie*		zombieHorde(int n, std::string name);
	void		hordedestroy(Zombie *horde);
};

#endif