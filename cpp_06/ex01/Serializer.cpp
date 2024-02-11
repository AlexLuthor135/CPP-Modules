/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:11:06 by alappas           #+#    #+#             */
/*   Updated: 2024/02/11 16:13:18 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{
	std::cout << "Serializer constructor init" << std::endl;
}

Serializer::~Serializer(){
	std::cout << "Serializer destructor init" << std::endl;
}

Serializer::Serializer(const Serializer & other)
{
	std::cout << "Serializer copy constructor init" << std::endl;
	(void) other;
}

Serializer& Serializer::operator=(const Serializer & other){
	std::cout << "Serializer assignment operator init" << std::endl;
	(void) other;
	return (*this);
}

uintptr_t Serializer::serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t num){
	return (reinterpret_cast<Data *>(num));
}
