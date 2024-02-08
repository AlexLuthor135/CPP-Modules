/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:44:13 by alappas           #+#    #+#             */
/*   Updated: 2024/02/07 22:38:57 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	// std::cout << "Bureaucrat tests!" << std::endl;
	// try {
	// 	Bureaucrat bob("Bob", 153);
	// }
	// catch(std::exception& e)
	// {
	// 	std::cout << e.what() << std::endl;
	// }

	// std::cout<< std::endl;

	// Bureaucrat *bob = new Bureaucrat("Bob", 2);
	// try {
	// 	std::cout << "1: " << *bob << std::endl;
	// 	bob->increment();
	// 	std::cout << "2: " << *bob << std::endl;
	// 	bob->increment();
	// 	std::cout << "3: " << *bob << std::endl;
	// 	bob->increment();
	// 	std::cout << "4: " << *bob << std::endl;
	// } catch (std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }
	// delete bob;

	// std::cout << std::endl;

	// Bureaucrat *jim = new Bureaucrat("Jim", 10);
	// try {
	// 	std::cout << "1: " << *jim << std::endl;
	// 	jim->increment();
	// 	std::cout << "2: " << *jim << std::endl;
	// 	jim->increment();
	// 	std::cout << "3: " << *jim << std::endl;
	// 	jim->increment();
	// 	std::cout << "4: " << *jim << std::endl;
	// } catch (std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }
	// delete jim;

	// std::cout << std::endl;

	// Bureaucrat *luffy = new Bureaucrat("Luffy", 145);
	// try {
	// 	std::cout << "1: " << *luffy << std::endl;
	// 	luffy->decrement();
	// 	std::cout << "2: " << *luffy << std::endl;
	// 	luffy->decrement();
	// 	std::cout << "3: " << *luffy << std::endl;
	// 	luffy->decrement();
	// 	std::cout << "4: " << *luffy << std::endl;
	// 	luffy->decrement();
	// 	std::cout << "5: " << *luffy << std::endl;
	// 	luffy->decrement();
	// 	std::cout << "6: " << *luffy << std::endl;
	// 	luffy->decrement();
	// 	std::cout << "7: " << *luffy << std::endl;
	// } catch (std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }
	// delete luffy;

	// std::cout << std::endl;

	// try {
	// 	Bureaucrat yuno("Yuno", 151);
	// 	std::cout << "HELLO WORLD!!!" << std::endl;
	// } catch (std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }

	// std::cout << std::endl;

	// try {
	// 	Bureaucrat yuno("Yuno", -1);
	// 	std::cout << "HELLO WORLD!!!" << std::endl;
	// } catch (std::exception& e) {
	// 	std::cout << e.what() << std::endl;
	// }
	std::cout << "Form tests!" << std::endl;
	Bureaucrat* poor = NULL;
	Bureaucrat* rich = NULL;
	Form* budgets = NULL;
	try {
		poor = new Bureaucrat("Poor", 130);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		rich = new Bureaucrat("Rich", 15);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		budgets = new Form("budgets", 30, 10);
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	if (budgets)
		std::cout << *budgets;
	std::cout << std::endl;
	if (poor && budgets){
	try {
		poor->signForm(*budgets);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}
	if (rich && budgets){
	try {
		rich->signForm(*budgets);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}
	std::cout << std::endl;
	if (budgets)
		std::cout << *budgets;

	std::cout << std::endl;

	// Form::beSigned()
	if (budgets && poor){
	try {
		budgets->beSigned(*poor);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}
	if (budgets && rich){
	try {
		budgets->beSigned(*rich);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}

	std::cout << std::endl;

	delete poor;
	delete rich;
	delete budgets;
	return 0;
}
