/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 22:41:58 by alappas           #+#    #+#             */
/*   Updated: 2024/01/27 00:42:54 by alappas          ###   ########.fr       */
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
	Zombie		*newZombie(std::string name);
	void		randomChump(std::string name);
	void		setname(std::string name);
};

#endif