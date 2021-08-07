/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:47:28 by llucente          #+#    #+#             */
/*   Updated: 2021/08/07 17:49:34 by llucente         ###   ########.fr       */
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

void	Phonebook::addingCon(Contact &c)
{
	t_str		str;

	std::cout << "PHONEBOOK ADDING..." << std::endl;
	std::cout << std::setw(20) << std::endl << "Please insert firstname: ";
	std::getline(std::cin, str);
	control(str);
	c.setFirstName(str);
	std::cout << std::setw(20) << "Please insert lastname: ";
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

void Phonebook::searchingCon(Contact c[])
{
	int		i;

	std::cout << "PHONEBOOK SEARCHING..." << std::endl;
	std::cout << "Please insert index of contact: " << std::endl;
	std::cin >> i;
	if (i >= 0 && i <= 7)
		c[i].printData();
	else
		std::cout << "Incorrect index insertion" << std::endl;
}
