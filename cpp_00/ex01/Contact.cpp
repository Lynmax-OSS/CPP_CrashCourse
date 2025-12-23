/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 17:03:51 by keteo             #+#    #+#             */
/*   Updated: 2025/12/09 17:03:51 by keteo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() : First_Name(""), Last_Name(""), Nickname(""), Phone_Num(""), Darkest_Secret("") {}

void	Contact::setFirstName(const	std::string	&s)	{First_Name = s;}
void	Contact::setLastName(const	std::string	&s)	{Last_Name = s;}
void	Contact::setNickname(const	std::string	&s)	{Nickname = s;}
void	Contact::setPhoneNumber(const	std::string	&s)	{Phone_Num = s}
void	Contact::setDarkestSecret(const	std::string	&s)	{Darkest_Secret = s}

std::string	Contact::getFirstName()	const {return First_Name;}
std::string	Contact::getLastName()	const {return Last_Name;}
std::string	Contact::getNickname()	const {return Nickname;}
std::string	Contact::getPhoneNumber()	const {return Phone_Num;}
std::string	Contact::getDarkestSecret()	const {return Darkest_Secret;}