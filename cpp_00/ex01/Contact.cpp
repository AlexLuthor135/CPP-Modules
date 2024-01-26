/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alappas <alappas@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 02:58:29 by alappas           #+#    #+#             */
/*   Updated: 2024/01/26 22:09:44 by alappas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact::Contact()
{
    
}

Contact::~Contact()
{
    
}

void    Contact::create_contact()
{
    firstname = setfirstname();
    lastname = setlastname();
    nickname = setnickname();
    number = setnumber();
    secret = setsecret();
}

bool    Contact::isvalid(Contact &contact)
{
    if (contact.getname().size() > 0)
        return (true);
    return (false);
}

std::string Contact::setfirstname()
{
    std::string name;
    
    std::cout << "Type your first name" << std::endl;
    std::getline(std::cin, name);
    if (name.size() > 0)
    {
        if (name.size() > 10)
        {
            name = name.substr(0, 10);
            name[9] = '.';
        }
        return (name);
    }
    else
    {
        std::cout << "The type field can't be empty!" << std::endl;
        return (setfirstname());
    }
}

std::string Contact::setlastname()
{
    std::string lastname;
    
    std::cout << "Type your last name" << std::endl;
    std::getline(std::cin, lastname);
    if (lastname.size() > 0)
    {
        if (lastname.size() > 10)
            {
                lastname = lastname.substr(0, 10);
                lastname[9] = '.';
            }
        return (lastname);
    }
    else
    {
        std::cout << "The type field can't be empty!" << std::endl;
        return (setlastname());
    }
    
}

std::string Contact::setnickname()
{
    std::string nickname;
    
    std::cout << "Type your nickname" << std::endl;
    std::getline(std::cin, nickname);
    if (nickname.size() > 0)
    {
        if (nickname.size() > 10)
            {
                nickname = nickname.substr(0, 10);
                nickname[9] = '.';
            }
        return (nickname);
    }
    else
    {
        std::cout << "The type field can't be empty!" << std::endl;
        return (setnickname());
    }
}

std::string Contact::setnumber()
{
    std::string number;
    
    std::cout << "Type your number" << std::endl;
    std::getline(std::cin, number);
    if (number.size() > 0)
        return (number);
    else
    {
        std::cout << "The type field can't be empty!" << std::endl;
        return (setnumber());
    }
}

std::string Contact::setsecret()
{
    std::string secret;
    
    std::cout << "Type your secret" << std::endl;
    std::getline(std::cin, secret);
    if (secret.size() > 0)
    {
        if (secret.size() > 10)
        {
            secret = secret.substr(0, 10);
            secret[9] = '.';
        }
        return (secret);
    }
    else
    {
        std::cout << "The type field can't be empty!" << std::endl;
        return (setsecret());
    }
}

std::string    Contact::getname()
{
    return (firstname);
}

std::string    Contact::getsurname()
{
    return (lastname);
}

std::string    Contact::getnickname()
{
    return (nickname);
}

std::string    Contact::getnumber()
{
    return (number);
}

std::string    Contact::getsecret()
{
    return (secret);
}