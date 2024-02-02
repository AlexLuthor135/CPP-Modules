/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 02:32:36 by alappas           #+#    #+#             */
/*   Updated: 2024/02/02 03:03:21 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal{
	public:
		WrongCat();
		WrongCat(const WrongCat & other);
		WrongCat&operator=(const WrongCat & other);
		~WrongCat();
		void    makeSound() const;
};

#endif