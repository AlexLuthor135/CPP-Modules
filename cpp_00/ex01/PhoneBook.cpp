/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 02:58:37 by alappas           #+#    #+#             */
/*   Updated: 2024/01/26 22:09:16 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
: num(8) {}

PhoneBook::~PhoneBook()
{
	
}

void    PhoneBook::create_contact(int index)
{
	Contact new_contact;

	new_contact.create_contact();
	contact[index] = new_contact;
}

void	PhoneBook::getcontact(Contact contact)

{
	std::cout << "Number: " << contact.getname() << std::endl;
	std::cout << "Surname: " << contact.getsurname() << std::endl;
	std::cout << "Nickname: " << contact.getnickname() << std::endl;
	std::cout << "Number: " << contact.getnumber() << std::endl;
	std::cout << "The darkest secret!...: " << contact.getsecret() << std::endl;
}

void	PhoneBook::print_contacts()
{
	int	i = -1;
	int	index = -1;
	std::string check;
	
	std::cout << "|    INDEX|      NAME|   SURNAME|  NICKNAME|" << std::endl;
	std::cout << "--------------------------------------------" << std::endl;
	while (PhoneBook::num > ++i)
	{
		std::cout << std::setw(10) << i  << "|" << std::setw(10) << contact[i].getname() << "|" << std::setw(10) << contact[i].getsurname() << "|" 
			<< std::setw(10) << contact[i].getnickname() << "|" << std::endl;
		std::cout << "--------------------------------------------" << std::endl;
	}
	std::cout << std::endl << "Which number do you want to highlight?" << std::endl;
	while (!(index >= 0 && index <= 7))
	{
			std::cout << "Please type a valid index value from 1 to 8" << std::endl;
			std::cin >> index;
			std::getline(std::cin, check);
			if (std::cin.fail())
			{
				std::cout << "Only numeric symbols allowed!" << std::endl;
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				index = -1;
			}
			if (check[0])
			{
				std::cin.clear();
				std::cout << "Only single character is allowed!" << std::endl;
				index = -1;
			}
	}
	if (contact[index].isvalid(contact[index]))
		getcontact(contact[index]);
	else
		std::cout << std::endl << "Number doesn't exist." << std::endl;
	
}