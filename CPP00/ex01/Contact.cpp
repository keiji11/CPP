/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llucente <llucente@student.42roma.it>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 17:10:28 by llucente          #+#    #+#             */
/*   Updated: 2021/08/04 18:35:42 by llucente         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void Contact::setFirstName(std::string fn)
{
	this->firstName = fn;
}

std::string Contact::getFirstName()
{
	return this->firstName;
}

void Contact::setLastName(std::string ln)
{
	this->lastName = ln;
}

std::string Contact::getLastName()
{
	return this->lastName;
}
