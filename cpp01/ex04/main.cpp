/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nkietwee <nkietwee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/22 01:12:55 by nkietwee          #+#    #+#             */
/*   Updated: 2023/12/25 00:50:47 by nkietwee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string	createfile(std::string av1)
{
	int	len;
	int	found;
	int	extension;
	std::string	file;

	file = av1;
	len = file.length();
	found = file.find(".");
	if (found != -1)
	{
		extension = len - found + 1;
		file.insert(found , ".replace");
		file.erase(found + 8, extension);
	}
	else
	{
		std::cout << "Cannot open file" << std::endl;
		exit (0);
	}
	return(file);
}

int main(int ac, char **av)
{
	std::ifstream	inputFile;
	std::string		line;
	size_t			found = 0;
	std::string		str1;
	std::string		str2;
	std::string		str3;
	std::string		outfile;

	if (ac != 4)
	{
		std::cerr << "input filename s1 s2 " << std::endl;
		return (0);
	}
	str1 = av[1];
	str2 = av[2];
	str3 = av[3];
	outfile = createfile(str1);
	std::ofstream outputFile(outfile);
	if (!outputFile.is_open())
	{
		std::cerr << "Error: Could not create or open the file." << std::endl;
		return 1;
	}
	inputFile.open(av[1]);
	if (!inputFile.is_open())
	{
		std::cerr << "Error: Could not open the file." << std::endl;
		return 1;
	}
	while (std::getline(inputFile, line))
	{
		found = line.find(str2);
		if (found != std::string::npos)
		{
			;
		}
		else // notfound
		{
			found = -1;
			outputFile << line << std::endl;
		}
		if (found != -1)
		{
			line.insert(found, str3);
			line.erase(found + str3.length(), str2.length());
			outputFile << line << std::endl;
		}
	}
	inputFile.close();
	return 0;
}
