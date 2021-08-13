/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 16:01:46 by llucente          #+#    #+#             */
/*   Updated: 2021/08/13 14:39:02 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"

#define MAX_CONTACTS 2

# define DEF  "\x1B[0m"
# define RED  "\x1B[31m"
# define GRN  "\x1B[32m"
# define YEL  "\x1B[33m"
# define BLU  "\x1B[34m"
# define MAG  "\x1B[35m"
# define CYN  "\x1B[36m"
# define WHT "\x1B[37m"

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
