/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 15:27:08 by llucente          #+#    #+#             */
/*   Updated: 2021/08/13 14:56:41 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

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
	Contact		c[MAX_CONTACTS];
	int 		i = 0;
	int 		j = 0;
	
	std::cout << "Please insert your choice: " << std::endl;
	std::cout << GRN"\"ADD\""DEF" to adding new contact " << std::endl;
	std::cout << YEL"\"SEARCH\""DEF" to searching an existing contact " << std::endl;
	std::cout << BLU"\"EXIT\""DEF" to exit. " << std::endl;
	while (1)
	{
		if (i < MAX_CONTACTS)
		{
			std::cout << MAG"\n\nYou have to write the command: "DEF;
			std::getline(std::cin, str);
			switch (command(str))
			{
				case 1:
					pb.addingCon(c[i++], j++);
					continue ;
				case 2:
					pb.searchingCon(c);
					continue ;
				case 3:
					std::cout << BLU"You're exiting, Goodbye."DEF;
					return (0);
				default:
					std::cout << RED"Invalid choice, you HAVE to insert only \"ADD\","
							<< "\"SEARCH\" and \"EXIT\" commands"DEF << std::endl;
					continue ;
			}
		}
		if (i >= MAX_CONTACTS)
		{
			std::cout << RED"\nWARNING!"DEF" -> Phonebook is full now: there are already " << MAX_CONTACTS << " contacts in phonebook!" << std::endl;
			std::cout << "Do you want overwrite contact with ADD? " << std::endl;
			if (i == MAX_CONTACTS)
			{
				i = 0;
				j = 0;
			}
			continue ;
		}
	}
	return 0;
}
