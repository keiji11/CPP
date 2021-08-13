/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:01:46 by llucente          #+#    #+#             */
/*   Updated: 2021/08/13 12:48:38 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"

#define MAX_CONTACTS 2

class Phonebook
{
	private:
		Contact contact[MAX_CONTACTS];
		
	public:
		Phonebook(){}
		~Phonebook(){}
		void addingCon(Contact &c, int i);
		void searchingCon(Contact c[]);
		void control(t_str &str);
};
