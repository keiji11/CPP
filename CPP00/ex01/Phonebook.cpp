/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:47:28 by llucente          #+#    #+#             */
/*   Updated: 2021/08/13 14:54:33 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	Phonebook::control(t_str &str)
{
	if (str.empty())
	{
		while(str.empty())
		{
			std::cout << RED"Insert something, it's MANDATORY!: "DEF;
			std::getline(std::cin, str);
		}
	}
}

void	Phonebook::addingCon(Contact &c, int i)
{
	t_str		str;

	std::cout << GRN"PHONEBOOK ADDING..."DEF << std::endl;
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
	
	std::cout << GRN"CONTACT n " << c.getIndex() + 1 << " SUCCESFULLY ADDED!!!"DEF << std::endl;
}

void Phonebook::searchingCon(Contact *c)
{
	int 	i;

	std::cout << YEL"PHONEBOOK SEARCHING..."DEF << std::endl;
	bool initCond = c[0].getFirstName().empty();
	if (initCond)
		std::cout << RED"\nThere is no contacts in phonebook!!!\n"DEF << std::endl;
	else
		c[0].printTitle();
	for (size_t j = 0; j < MAX_CONTACTS; j++)
	{
		if (!c[j].getFirstName().empty())
			c[j].printData();
	}
	while (!initCond)
	{
		std::cout << CYN"Please insert index of contact ("RED"CTRL+C to exit"DEF""CYN"): "DEF << std::endl;
		std::cin >> i;
		if (i >= 0 && i < MAX_CONTACTS)
		{
			std::cout << CYN"\nFirst Name : "DEF + c[i].getFirstName() << std::endl;
			std::cout << CYN"Last Name : "DEF + c[i].getLastName() << std::endl;
			std::cout << CYN"Nick Name : "DEF + c[i].getNickName() << std::endl;
			std::cout << CYN"Phone Number : "DEF + c[i].getPhoneNumber() << std::endl;
			std::cout << CYN"Darkest Secret : "DEF + c[i].getDarkestSecret() << std::endl;
			continue ;
		}
		else
		{
			std::cout << RED"Incorrect index insertion"DEF << std::endl;
			continue ;
		}
	}
}
