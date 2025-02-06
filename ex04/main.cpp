/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gchauvot <gchauvot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:30:15 by gchauvot          #+#    #+#             */
/*   Updated: 2025/02/06 14:42:20 by gchauvot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fh.hpp"
#include <filesystem>

void	replacer(std::string *src, std::string s1, std::string s2)
{
	int pos;
	int l1 = s1.length();

	if(s1 == s2)
		return ;
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
		return (0);

	std::string const filename = argv[1];
	std::string const filereplace = filename + ".replace";
	std::string s1 = argv[2], s2 = argv[3];
	std::string oldtext, newtext;


	std::ifstream filein(filename.c_str());
	std::ofstream fileout(filereplace.c_str());

	while(std::getline(filein, oldtext))
	{
		replacer(&oldtext, s1, s2);
		fileout << oldtext << std::endl;
	}

	return (0);
}