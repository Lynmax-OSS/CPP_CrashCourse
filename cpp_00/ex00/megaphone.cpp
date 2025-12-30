/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: keteo <keteo@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 15:40:50 by keteo             #+#    #+#             */
/*   Updated: 2025/12/05 15:40:50 by keteo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>


int	main (int ac, char **av)
{
	if (ac < 2)
		std::cout << "* LOUD AND UBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < ac; i++)
	{
		for (int j = 0; j < strlen(av[i]); j++)
			std::cout << (unsigned char)toupper(av[i][j]);
	}
	std::cout << std::endl;
}