/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:13:36 by llucente          #+#    #+#             */
/*   Updated: 2021/08/07 16:40:19 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <stdio.h>

typedef std::string t_str;

class Contact
{
	std::string	firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phoneNumber;
	std::string	darkestSecret;
		
	public:
		Contact(){}
		Contact(std::string aFirstName, std::string aLastName, std::string aNickName, 
			std::string aPhoneNumber, std::string aDarkestSecret)
		{
			firstName = aFirstName;
			lastName = aLastName;
			nickName = aNickName;
			phoneNumber = aPhoneNumber;
			darkestSecret = aDarkestSecret;
		}
		~Contact(){}
		void setFirstName(std::string firstName);
		std::string getFirstName(void);
		void setLastName(std::string lastName);
		std::string getLastName(void);
		void setNickName(std::string nickName);
		std::string getNickName(void);
		void setPhoneNumber(std::string phoneNumber);
		std::string getPhoneNumber(void);
		void setDarkestSecret(std::string darkestSecret);
		std::string getDarkestSecret(void);
		bool isEmpty(t_str &str);
		void printData(void);
};
