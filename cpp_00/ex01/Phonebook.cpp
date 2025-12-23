/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:47:47 by keteo             #+#    #+#             */
/*   Updated: 2025/12/09 16:47:47 by keteo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook() : index(0), count(0) {}

std::string Phonebook::formatField(const std::string &s)
{
	if (s.size() > 10)
		return (s.substr(0, 9) + ".");
	return (s);
}

static void prompt_for_cmd(const std::string &fieldName, std::string &out)
{
	while (true)
	{
		std::cout << fieldName << ": ";
		if (!std::getline(std::cin, out))
		{
			out = "";
			return ;
		}
		if (!out.empty())
			return ;
		std::cout << "Fill in field you little dingus 3:(" << std::endl;
	}
}

void	Phonebook::addContact()
{
	std::string first;
	std::string last;
	std::string nick;
	std::string phone;
	std::string secret;

	prompt_for_cmd("First Name", first);
	if (first.empty() && std::cin.eof())	return;
	prompt_for_cmd("Last Name", last);
	if (last.empty() && std::cin.eof())	return;
	prompt_for_cmd("Nickname", nick);
	if (nick.empty() && std::cin.eof())	return;
	prompt_for_cmd("Phone Number", phone);
	if (phone.empty() && std::cin.eof())	return;
	prompt_for_cmd("Darkest Secret", secret);
	if (secret.empty() && std::cin.eof())	return;

	contacts[index].setFirstName(first);
	contacts[index].setLastName(last);
	contacts[index].setNickname(nick);
	contacts[index].setPhoneNumber(phone);
	contacts[index].setDarkestSecret(secret);

	index = (index + 1) % 8;
	if (count < 8)
		count++;
	std::cout << "Contact added." << std::endl;
}