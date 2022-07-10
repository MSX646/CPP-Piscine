/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kezekiel <kezekiel@student.21-schoo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:46:44 by kezekiel          #+#    #+#             */
/*   Updated: 2022/07/07 17:25:59 by kezekiel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}
	for (size_t i = 1; i < ac; i++)
	{
		std::string str(av[i]);
		for(size_t j = 0; j < str.length(); j++)
		{
			std::cout << (char)std::toupper(str[j]);
		}
	}
	std::cout << std::endl;
	return 0;
}
