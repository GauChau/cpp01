/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchauvot <gchauvot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:30:15 by gchauvot          #+#    #+#             */
/*   Updated: 2025/02/24 16:58:44 by gchauvot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fh.hpp"
#include <filesystem>
#include <stdio.h>

void	replacer(std::string *src, std::string s1, std::string s2)
{
	int pos;
	int l1 = s1.length();

	if(s1 == s2)
	{
		std::cout << "Error: <to_replace> equal to <replace_by>";
		return ;
	}
	while (true)
	{
		pos = src->find(s1);
		if (pos == -1)
			return ;
		else
		{
			src->erase(pos, l1);
			src->insert(pos, s2);
		}
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments.\nExample: ./sedition <filename> <to_replace> <replace_by>\n";
		return (0);
	}

	std::string const filename = argv[1];
	std::string const filereplace = filename + ".replace";
	std::string s1 = argv[2], s2 = argv[3];
	std::string oldtext;


	std::ifstream filein(filename.c_str());
	if (filein.fail() != 0)
	{
		std::cout << "Error regarding file opening. File doesnt exit or access is denied. \n";
		return 0;
	}
	std::ofstream fileout(filereplace.c_str());

	while(std::getline(filein, oldtext))
	{
		replacer(&oldtext, s1, s2);
		fileout << oldtext << std::endl;
	}

	return (0);
}