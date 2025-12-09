/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/08 13:09:48 by keteo             #+#    #+#             */
/*   Updated: 2025/12/08 13:09:48 by keteo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class Phonebook
{
	private:
		Contact contacts[8];
		int		index;
		int		count;

		static std::string	formatField(const std::string	&s);

	public:
		Phonebook();
		void	addContact();
		void	searchContact() const;
};

#endif