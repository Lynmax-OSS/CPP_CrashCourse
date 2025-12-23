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
		std::cout << "Fill in field you little dingus >:<" << std::endl;
	}
}