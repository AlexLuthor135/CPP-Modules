/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:44:13 by alappas           #+#    #+#             */
/*   Updated: 2024/02/07 22:42:29 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat bob("Bob", 153);
	}
	catch(std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}

	std::cout<< std::endl;
	Bureaucrat *bob = NULL;
	try {
		bob = new Bureaucrat("Bob", 2);
		std::cout << "1: " << *bob << std::endl;
		bob->increment();
		std::cout << "2: " << *bob << std::endl;
		bob->increment();
		std::cout << "3: " << *bob << std::endl;
		bob->increment();
		std::cout << "4: " << *bob << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	delete bob;

	std::cout << std::endl;

	Bureaucrat *jim = NULL;
	try {
		jim = new Bureaucrat("Jim", 10);
		std::cout << "1: " << *jim << std::endl;
		jim->increment();
		std::cout << "2: " << *jim << std::endl;
		jim->increment();
		std::cout << "3: " << *jim << std::endl;
		jim->increment();
		std::cout << "4: " << *jim << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	delete jim;

	std::cout << std::endl;

	Bureaucrat *luffy = NULL;
	try {
		luffy = new Bureaucrat("Luffy", 145);
		std::cout << "1: " << *luffy << std::endl;
		luffy->decrement();
		std::cout << "2: " << *luffy << std::endl;
		luffy->decrement();
		std::cout << "3: " << *luffy << std::endl;
		luffy->decrement();
		std::cout << "4: " << *luffy << std::endl;
		luffy->decrement();
		std::cout << "5: " << *luffy << std::endl;
		luffy->decrement();
		std::cout << "6: " << *luffy << std::endl;
		luffy->decrement();
		std::cout << "7: " << *luffy << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	delete luffy;

	std::cout << std::endl;

	try {
		Bureaucrat yuno("Yuno", 151);
		std::cout << "HELLO WORLD!!!" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat yuno("Yuno", -1);
		std::cout << "HELLO WORLD!!!" << std::endl;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
