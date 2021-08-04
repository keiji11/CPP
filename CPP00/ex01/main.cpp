/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 15:27:08 by llucente          #+#    #+#             */
/*   Updated: 2021/08/04 17:47:12 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	command(std::string input)
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
	std::string str;
	
	std::cout << "Please insert your choice: " << std::endl;
	std::cout << "\"ADD\" to adding new contact " << std::endl;
	std::cout << "\"SEARCH\" to searching an existing contact " << std::endl;
	std::cout << "\"EXIT\" to exit. " << std::endl;
	while (1)
	{
		std::cout << "You have choose the command: ";
		std::cin >> str;
		switch (command(str))
		{
			case 1:
				pb.addingCon();
			case 2:
				pb.searchingCon();
			case 3:
				std::cout << "You're exiting, Goodbye.";
				return (0);
			default:
				std::cout << "Invalid choice, you HAVE to insert only \"ADD\","
						<< "\"SEARCH\" and \"EXIT\" commands" << std::endl;
				system("clear");
		}
	}
	return 0;
}
