/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 18:53:08 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/24 21:45:11 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.cpp"

int	main(int ac, char **av)
{
	std::string prompt;
	std::string str;
	Harl harl;
	if (ac != 2)
	{
		std::cout << "Plz type argument" << std::endl;
		return (0);
	}
	str = av[1];
	for (int j = 0; j < str.length(); j++)
	{
		prompt += (char)tolower(av[1][j]);
	}

	if (prompt == "debug" || prompt == "info" || prompt == "warning" || prompt == "error")
		harl.complain(prompt);
	else
		std::cout << "Can type only DEBUG, INFO, WARNING, ERROR and COMPLAIN" << std::endl;

}