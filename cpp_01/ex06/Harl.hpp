/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 04:16:53 by alappas           #+#    #+#             */
/*   Updated: 2024/01/27 05:07:02 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <cstring>

class Harl{
	private:
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
		int	i;
	public:
		Harl();
		int getswitch();
		void setswitch(std::string level);
		void complain(std::string level);
};