/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 02:58:34 by alappas           #+#    #+#             */
/*   Updated: 2024/05/11 01:55:39 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()

{
	std::string command;
	PhoneBook   phonebook;
	int         index = 0;

	while (command != "EXIT")
	{
		
		std::cout << "Write the command: ADD, SEARCH or EXIT" << std::endl;
		std::getline(std::cin, command);
		if (std::cin.eof())
			exit(0);
		if (command == "ADD")
		{
			phonebook.create_contact(index++);
			if (index == 8)
				index = 0;
		}
		else if (command == "SEARCH")
		{
			phonebook.print_contacts();
			std::cin.clear();
		}
	}
	return (0);
}