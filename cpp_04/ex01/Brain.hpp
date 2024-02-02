/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 03:14:50 by alappas           #+#    #+#             */
/*   Updated: 2024/02/02 03:19:53 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain{
    private:
        std::string ideas[100];
	public:
		Brain();
		Brain(const Brain & other);
		Brain&operator=(const Brain & other);
		virtual ~Brain();
};

#endif