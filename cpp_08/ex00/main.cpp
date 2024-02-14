/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 22:14:07 by alappas           #+#    #+#             */
/*   Updated: 2024/02/13 03:13:33 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
	std::vector<int> v;
	std::vector<int>::iterator it;

	for (int i = 0; i < 10; ++i) {
		v.push_back(i * i);
	}
	std::cout << "Vector:" << std::endl;
	for (std::vector<int>::iterator i = v.begin(); i != v.end(); ++i) {
		std::cout << *i << std::endl;
	}
	std::cout << std::endl;

	it = easyfind(v, -3);
	if (it == v.end()) std::cout << "Not found" << std::endl;
	else std::cout << "Found: " << *it << std::endl;

	it = easyfind(v, 2);
	if (it == v.end()) std::cout << "Not found" << std::endl;
	else std::cout << "Found: " << *it << std::endl;

	it = easyfind(v, 25);
	if (it == v.end()) std::cout << "Not found" << std::endl;
	else std::cout << "Found: " << *it << std::endl;

	it = easyfind(v, 81);
	if (it == v.end()) std::cout << "Not found" << std::endl;
	else std::cout << "Found: " << *it << std::endl;

	return 0;

}