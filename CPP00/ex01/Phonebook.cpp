/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:47:28 by llucente          #+#    #+#             */
/*   Updated: 2021/08/13 12:48:32 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	Phonebook::control(t_str &str)
{
	if (str.empty())
	{
		while(str.empty())
		{
			std::cout << "Insert something, it's MANDATORY!: ";
			std::getline(std::cin, str);
		}
	}
}

void	Phonebook::addingCon(Contact &c, int i)
{
	t_str		str;

	std::cout << "PHONEBOOK ADDING..." << std::endl;
	c.setIndex(i);
	std::cout << std::setw(20) << std::endl << "\nPlease insert firstname: ";
	std::getline(std::cin, str);
	control(str);
	c.setFirstName(str);
	std::cout << std::setw(20) << "\nPlease insert lastname: ";
	std::getline(std::cin, str);
	control(str);
	c.setLastName(str);
	std::cout << std::setw(20) << "\nPlease insert nickname: ";
	std::getline(std::cin, str);
	control(str);
	c.setNickName(str);
	std::cout << std::setw(10) << "\nPlease insert phone number: ";
	std::getline(std::cin, str);
	control(str);
	c.setPhoneNumber(str);
	std::cout << std::setw(50) << "\nPlease insert darkest secret: ";
	std::getline(std::cin, str);
	c.setDarkestSecret(str);
}

void Phonebook::searchingCon(Contact *c)
{
	int i;

	std::cout << "PHONEBOOK SEARCHING..." << std::endl;
	for (int j = 0; j < MAX_CONTACTS; j++)
	{
		if (!c[j].getFirstName().empty())
			c[j].printData();
	}
	while (1)
	{
		std::cout << "Please insert index of contact (CTRL+C to exit): " << std::endl;
		std::cin >> i;
		if (i >= 0 && i < MAX_CONTACTS)
		{
			std::cout << "\nFirst Name : " + c[i].getFirstName() << std::endl;
			std::cout << "Last Name : " + c[i].getLastName() << std::endl;
			std::cout << "Nick Name : " + c[i].getNickName() << std::endl;
			std::cout << "Phone Number : " + c[i].getPhoneNumber() << std::endl;
			std::cout << "Darkest Secret : " + c[i].getDarkestSecret() << std::endl;
			continue ;
		}
		else
		{
			std::cout << "Incorrect index insertion" << std::endl;
			continue ;
		}
	}
}
