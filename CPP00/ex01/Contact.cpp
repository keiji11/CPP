/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:10:28 by llucente          #+#    #+#             */
/*   Updated: 2021/08/06 18:53:05 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

typedef std::string t_str;

void Contact::setFirstName(std::string fn)
{
	this->firstName = fn;
}

std::string Contact::getFirstName()
{
	return this->firstName;
}

void Contact::setLastName(std::string ln)
{
	this->lastName = ln;
}

t_str Contact::getLastName()
{
	return this->lastName;
}

void Contact::setNickName(std::string nn)
{
	this->nickName = nn;
}

t_str Contact::getNickName()
{
	return this->nickName;
}

void Contact::setPhoneNumber(t_str pn)
{
	this->phoneNumber = pn;
}

t_str Contact::getPhoneNumber(void)
{
	return this->phoneNumber;
}

void Contact::setDarkestSecret(t_str ds)
{
	this->darkestSecret = ds;
}

t_str Contact::getDarkestSecret(void)
{
	return this->darkestSecret;
}

bool Contact::isEmpty(t_str &str)
{
	while (str.empty())
	{
		std::cout << "Insert something: ";
		std::getline(std::cin, str);
	}
	return false;
}
