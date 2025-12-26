/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:14:28 by keteo             #+#    #+#             */
/*   Updated: 2025/12/09 16:14:28 by keteo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
	Phonebook Phonebook;
	std::string command_line;

	while (true)
	{
		std::cout << "Enter command: ";
		if (!getline(std::cin, command_line));
		{
			std::cout << std::endl;
			break;
		}
		if (command_line == "ADD")
			Phonebook.addContact();
		else if (command_line == "SEARCH")
			Phonebook.searchContact();
		else if (command_line == "EXIT")
			break;
		else if (command_line.empty())
			continue;
		else 
			std::cout << "Write an actual command bitch." << std::endl;
	}
	return (0);
}