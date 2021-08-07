/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:10:28 by llucente          #+#    #+#             */
/*   Updated: 2021/08/07 17:38:09 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

typedef std::string t_str;

void	Contact::setFirstName(std::string fn)
{
	this->firstName = fn;
}

t_str	Contact::getFirstName()
{
	return this->firstName;
}

void	Contact::setLastName(std::string ln)
{
	this->lastName = ln;
}

t_str	Contact::getLastName()
{
	return this->lastName;
}

void	Contact::setNickName(std::string nn)
{
	this->nickName = nn;
}

t_str	Contact::getNickName()
{
	return this->nickName;
}

void	Contact::setPhoneNumber(t_str pn)
{
	this->phoneNumber = pn;
}

t_str	Contact::getPhoneNumber(void)
{
	return this->phoneNumber;
}

void	Contact::setDarkestSecret(t_str ds)
{
	this->darkestSecret = ds;
}

t_str	Contact::getDarkestSecret(void)
{
	return this->darkestSecret;
}

bool	Contact::isEmpty(t_str &str)
{
	while (str.empty())
	{
		std::cout << "Insert something: ";
		std::getline(std::cin, str);
	}
	return false;
}


std::string truncate(std::string str, size_t width, bool show_ellipsis=true)
{
    if (str.length() > width)
	{
        if (show_ellipsis)
            return str.substr(0, width) + "...";
        else
            return str.substr(0, width);
	}
    return str;
}

void	Contact::printData(void)
{
	std::cout << " __________________________________________________________" << std::endl;
	std::cout << "|" << std::setw(20) << std::right << "first name";
	std::cout << "|" << std::setw(20) << std::right << "last name";
	std::cout << "|" << std::setw(20) << std::right << "nick name";
	std::cout << "|" << std::setw(20) << std::right << "phone";
	std::cout << "|" << std::setw(20) << std::right << "darkest secret" << "|" << std::endl;
	std::cout << " ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾" << std::endl;
	// std::cout << "_______________________________________________________" << std::endl;
	std::cout << "|" << std::setw(20) << std::right << truncate(getFirstName(), 10);
	std::cout << "|" << std::setw(20) << std::right << truncate(getLastName(), 10);
	std::cout << "|" << std::setw(20) << std::right << truncate(getNickName(), 10);
	std::cout << "|" << std::setw(20) << std::right << truncate(getPhoneNumber(), 10);
	std::cout << "|" << std::setw(20) << std::right << truncate(getDarkestSecret(), 10) << "|" << std::endl;
	std::cout << " ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾" << std::endl;
	// std::cout << std::setw(20) << std::left << "First name" << this->firstName << std::endl;
	// std::cout << std::setw(20) << std::left << "Last name" << this->lastName << std::endl;
	// std::cout << std::setw(20) << std::left << "Nickname" << this->nickName << std::endl;
	// std::cout << std::setw(20) << std::left << "Phone" << this->phoneNumber << std::endl;
	// std::cout << std::setw(20) << std::left << "Darkest secret" << this->darkestSecret << std::endl;
}
