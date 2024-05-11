/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 02:58:39 by alappas           #+#    #+#             */
/*   Updated: 2024/05/11 01:54:37 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cctype>
#include <limits>
#include <cstdlib>
#include "PhoneBook.hpp"

class Contact{
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string number;
		std::string secret;

	public:
	Contact();
	~Contact();
	std::string	setfirstname();
	std::string setlastname();
	std::string setnickname();
	std::string setnumber();
	std::string setsecret();
	std::string	getname();
	std::string	getsurname();
	std::string	getnickname();
	std::string	getnumber();
	std::string	getsecret();
	void		create_contact();
	bool		isvalid(Contact &contact);
};

#endif