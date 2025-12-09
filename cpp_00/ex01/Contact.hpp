/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/09 16:25:24 by keteo             #+#    #+#             */
/*   Updated: 2025/12/09 16:25:24 by keteo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string	phone_num;
		std::string darkest_secret;
		
	public:
		Contact();

		void	setFirstName(const std::string	&s);
		void	setLastName(const std::string	&s);
		void	setNickname(const std::string	&s);
		void	setPhoneNumber(const std::string	&s);
		void	setDarkestSecret(const std::string	&s);

		std::string	getFirstName()	const;
		std::string	getLastName()	const;
		std::string	getNickname()	const;
		std::string	getPhoneNumber()	const;
		std::string	getDarkestSecret()	const;
};

#endif