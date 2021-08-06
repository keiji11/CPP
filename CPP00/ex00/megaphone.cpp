/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/03 18:00:51 by llucente          #+#    #+#             */
/*   Updated: 2021/08/06 16:40:11 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <locale>

int main(int argc, char **argv) {

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else 
	{
		for (int i = 1; i < argc; i++) {
			std::string str(argv[i]);
			for (size_t j = 0; j < str.length(); j++) 
				std::cout << (char)std::toupper(str[j]);
		}
		std::cout << std::endl;
	}
	return (0);
}
