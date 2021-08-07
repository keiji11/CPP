/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 15:27:08 by llucente          #+#    #+#             */
/*   Updated: 2021/08/07 16:54:59 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

int	command(t_str input)
{
	if (input == "ADD")
		return 1;
	else if (input == "SEARCH")
		return 2;
	else if (input == "EXIT")
		return 3;
	else
		return 0;
}

int main(void)
{
	Phonebook 	pb;
	t_str		str;
	Contact		c[8];
	int 		i = 0;
	
	std::cout << "Please insert your choice: " << std::endl;
	std::cout << "\"ADD\" to adding new contact " << std::endl;
	std::cout << "\"SEARCH\" to searching an existing contact " << std::endl;
	std::cout << "\"EXIT\" to exit. " << std::endl;
	while (1)
	{
		if (i < 8)
		{
			std::cout << "You have choose the command: ";
			std::getline(std::cin, str);
			switch (command(str))
			{
				case 1:
					pb.addingCon(c[i++]);
					continue ;
				case 2:
					pb.searchingCon(c);
					continue ;
				case 3:
					std::cout << "You're exiting, Goodbye.";
					return (0);
				default:
					// system("clear");
					std::cout << "Invalid choice, you HAVE to insert only \"ADD\","
							<< "\"SEARCH\" and \"EXIT\" commands" << std::endl;
					exit(0);
			}
		}
		else
		{
			std::cout << "There are already 8 contacts in phonebook!" << std::endl;
			std::cout << c[i].getFirstName() << std::endl;
			if (i == 8)
				i = 0;
			continue ;
		}
	}
	return 0;
}
