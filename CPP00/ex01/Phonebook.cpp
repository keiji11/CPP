/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:47:28 by llucente          #+#    #+#             */
/*   Updated: 2021/08/06 19:28:39 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"



void	Phonebook::addingCon(Contact &c)
{
	// Contact		c;
	t_str		str;

	std::cout << "PHONEBOOK ADDING..." << std::endl;
	std::cout << std::setw(20) << std::endl << "Please insert firstname: ";
	std::getline(std::cin, str);
	if (!c.isEmpty(str))
		c.setFirstName(str);
	std::cout << std::setw(20) << "FIRSTNAME: " << c.getFirstName() << std::endl;
	std::cout << std::setw(20) << "Please insert lastname: ";
	std::getline(std::cin, str);
	if (str.empty())
		{
			while(str.empty()){
				std::cout << "Insert something: ";
				std::getline(std::cin, str);
			}
		}
		else
			c.setLastName(str);
	std::cout << std::setw(20) << "\nPlease insert nickname: ";
	std::getline(std::cin, str);
	c.setNickName(str);
	std::cout << std::setw(10) << "\nPlease insert phone number: ";
	std::getline(std::cin, str);
	c.setPhoneNumber(str);
	std::cout << std::setw(50) << "\nPlease insert darkest secret: ";
	std::getline(std::cin, str);
	c.setDarkestSecret(str);
	
	// con = c;
}

// void searchingCon()
// {
	
// }
