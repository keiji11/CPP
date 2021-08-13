/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:10:28 by llucente          #+#    #+#             */
/*   Updated: 2021/08/13 14:51:38 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

typedef std::string t_str;

void	Contact::setIndex(int index)
{
	this->index = index;
}

int	Contact::getIndex()
{
	return this->index;
}

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
            return str.substr(0, width) + ".";
        else
            return str.substr(0, width);
	}
    return str;
}

void	Contact::printTitle()
{
	std::cout << " ___________________________________________________________________________________" << std::endl;
	std::cout << "|" << std::setw(20) << std::right << "index";
	std::cout << "|" << std::setw(20) << std::right << "first name";
	std::cout << "|" << std::setw(20) << std::right << "last name";
	std::cout << "|" << std::setw(20) << std::right << "nick name" << "|" << std::endl;
	std::cout << " ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾" << std::endl;
}
void	Contact::printData()
{
	std::cout << " ___________________________________________________________________________________" << std::endl;
	std::cout << "|" << std::setw(20) << std::right << getIndex();
	std::cout << "|" << std::setw(20) << std::right << truncate(getFirstName(), 9);
	std::cout << "|" << std::setw(20) << std::right << truncate(getLastName(), 9);
	std::cout << "|" << std::setw(20) << std::right << truncate(getNickName(), 9) << "|" << std::endl;
	std::cout << " ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾" << std::endl;
}
