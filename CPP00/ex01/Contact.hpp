/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:13:36 by llucente          #+#    #+#             */
/*   Updated: 2021/08/04 18:54:40 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <iomanip>
#include <string>
#include <stdlib.h>
#include <stdio.h>

class Contact
{
	private:
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNumber;
		std::string	darkestSecret;
		
	public:
		Contact();
		Contact(std::string aFirstName, std::string aLastName, std::string aNickName, 
			std::string aPhoneNumber, std::string aDarkestSecret)
		{
			firstName = aFirstName;
			lastName = aLastName;
			nickName = aNickName;
			phoneNumber = aPhoneNumber;
			darkestSecret = aDarkestSecret;
		}
		~Contact();
		void setFirstName(std::string firstName);
		std::string getFirstName(void);
		void setLastName(std::string lastName);
		std::string getLastName(void);
};

#endif