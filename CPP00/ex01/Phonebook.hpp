/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:01:46 by llucente          #+#    #+#             */
/*   Updated: 2021/08/06 19:28:48 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"

class Phonebook
{
	private:
		Contact contact[8];
		
	public:
		Phonebook(){}
		~Phonebook(){}
		void addingCon(Contact &c);
		// void searchingCon();
};
