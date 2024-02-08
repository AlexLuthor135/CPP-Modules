/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 19:44:13 by alappas           #+#    #+#             */
/*   Updated: 2024/02/08 04:15:52 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
	Bureaucrat* normal = NULL;

	ShrubberyCreationForm *berry = NULL;
	RobotomyRequestForm *robot = NULL;
	PresidentialPardonForm *president = NULL;
	std::srand(std::time(NULL));
	std::cout << "============== BUREAUCRAT/FORMS INITIALIZATION! ==============" << std::endl << std::endl;
	
	try {
		poor = new Bureaucrat("Poor", 130);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		rich = new Bureaucrat("Rich", 5);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		normal = new Bureaucrat("Normal", 40);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	try {
		berry = new ShrubberyCreationForm("berry");
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try {
		robot = new RobotomyRequestForm("robot");
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try {
		president = new PresidentialPardonForm("president");
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "============== FORMS SETTINGS! ==============" << std::endl << std::endl;

	if (berry)
		std::cout << *berry << std::endl;
	if (robot)
		std::cout << *robot << std::endl;
	if (president)
		std::cout << *president << std::endl;
	std::cout << std::endl;
	
	std::cout << "============== ShrubberyCreationForm Tests! ==============" << std::endl << std::endl;
	//SIGN FIRST!!
	if (poor && berry){
	try {
		poor->signForm(*berry);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}
	if (rich && berry){
	try {
		rich->signForm(*berry);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}
	if (normal && berry){
	try {
		normal->signForm(*berry);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}
	std::cout << std::endl;
	std::cout << std::endl;
	//EXECUTE LATER!!
	if (poor && berry){
	try {
		berry->execute(*poor);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}
	
	if (rich && berry){
	try {
		berry->execute(*rich);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}

	if (normal && berry){
	try {
		berry->execute(*normal);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}
	std::cout << std::endl;

	std::cout << "============== RobotomyRequestForm Tests! ==============" << std::endl << std::endl;

	//SIGN FIRST!!
	if (poor && robot){
	try {
		poor->signForm(*robot);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}
	if (rich && robot){
	try {
		rich->signForm(*robot);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}
	if (normal && robot){
	try {
		normal->signForm(*robot);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}
	std::cout << std::endl;
	std::cout << std::endl;
	//EXECUTE LATER!!
	if (poor && robot){
	try {
		robot->execute(*poor);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}
	
	if (rich && robot){
	try {
		robot->execute(*rich);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}

	if (normal && robot){
	try {
		robot->execute(*normal);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}
	std::cout << std::endl;

	std::cout << "============== PresidentialPardonForm Tests! ==============" << std::endl << std::endl;

	//SIGN FIRST!!
	if (poor && president){
	try {
		poor->signForm(*president);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}
	if (rich && president){
	try {
		rich->signForm(*president);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}
	if (normal && president){
	try {
		normal->signForm(*president);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}
	std::cout << std::endl;
	std::cout << std::endl;
	//EXECUTE LATER!!
	if (poor && president){
	try {
		president->execute(*poor);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}
	
	if (rich && president){
	try {
		president->execute(*rich);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}

	if (normal && president){
	try {
		president->execute(*normal);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}
	std::cout << std::endl;

	std::cout << "============== FORMS CALLED BY BUREAUCRATS Tests! ==============" << std::endl << std::endl;
	std::cout << "============== BUREAUCRATS CALL THE BERRIES Tests! ==============" << std::endl << std::endl;

	if (poor && berry){
	try {
		poor->executeForm(*berry);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}
	
	if (rich && berry){
	try {
		rich->executeForm(*berry);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}

	if (normal && berry){
	try {
		normal->executeForm(*berry);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}
	std::cout << std::endl;
	
	std::cout << "============== BUREAUCRATS CALL THE ROBOTS Tests! ==============" << std::endl << std::endl;
	
	if (poor && robot){
	try {
		poor->executeForm(*robot);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}
	
	if (rich && robot){
	try {
		rich->executeForm(*robot);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}

	if (normal && robot){
	try {
		normal->executeForm(*robot);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}
	std::cout << std::endl;

	std::cout << "============== BUREAUCRATS CALL THE PRESIDENT Tests! ==============" << std::endl << std::endl;
	if (poor && president){
	try {
		poor->executeForm(*president);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}
	
	if (rich && president){
	try {
		rich->executeForm(*president);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}

	if (normal && president){
	try {
		normal->executeForm(*president);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}}
	std::cout << std::endl;

	
	std::cout << "============== BUREAUCRAT/FORMS DESTRUCTION! ==============" << std::endl << std::endl;

	delete poor;
	delete rich;
	delete normal;
	delete berry;
	delete robot;
	delete president;
	return 0;
}
