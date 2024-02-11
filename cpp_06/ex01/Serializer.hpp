/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 20:13:52 by alappas           #+#    #+#             */
/*   Updated: 2024/02/11 18:21:20 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

struct Data{
	uintptr_t value;
	Data(int val) : value(val){}
};

class Serializer{
		Serializer();
		Serializer(const Serializer & other);
		Serializer&operator=(const Serializer & other);
		~Serializer();
	public:
		static uintptr_t	serialize(Data* ptr);
		static Data*		deserialize(uintptr_t num);
};

#endif
