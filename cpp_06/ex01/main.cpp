/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 00:01:09 by alappas           #+#    #+#             */
/*   Updated: 2024/02/11 19:00:10 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(){
    Data *d = new Data(619);

    std::cout << "Initial Data address: " << d << std::endl;
    d->value = Serializer::serialize(d);
    std::cout << "Serialized num: " << d->value << std::endl;
    d = Serializer::deserialize(d->value);
    std::cout << "Deserialized pointer: " << d << std::endl;
	delete d;
    return(0);
}
