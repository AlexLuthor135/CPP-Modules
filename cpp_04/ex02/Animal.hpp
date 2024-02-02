/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 02:29:37 by alappas           #+#    #+#             */
/*   Updated: 2024/02/02 03:30:10 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
#include <iostream>

class Animal{
	protected:
		std::string type;

	public:
		Animal();
		Animal(std::string type);
		Animal(const Animal & other);
		Animal&operator=(const Animal & other);
		virtual ~Animal();
		void virtual	makeSound() const = 0;
		const std::string		&getType() const;
};

#endif