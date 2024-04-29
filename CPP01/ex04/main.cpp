/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ezhou <ezhou@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:11:43 by ezhou             #+#    #+#             */
/*   Updated: 2024/04/29 11:41:46 by ezhou            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>

void	modifyLine(std::string& line, std::string string1, std::string string2)
{
	std::size_t	pos;
	std::size_t	start = 0;

	while (pos != std::string::npos){
		pos = line.find(string1, start);
		if (pos != std::string::npos){
			line.erase(pos, string1.length());
			line.insert(pos, string2);
			start = pos + string2.length();
		}
	}
}

int main(int argc, char **argv)
{
	if (argc < 4)
		return (0);
	std::ifstream Infile(argv[1]);
	if (!Infile){
		std::cerr << "Error opening Infile." << std::endl;
		return (1);
	}
	std::string out = argv[1];
	std::ofstream Outfile(out.append(".replace"));
	if (!Outfile){
		std::cerr << "Error opening Outfile." << std::endl;
	}
	std::string string1(argv[2]);
	std::string string2(argv[3]);
	std::string	line;

	while(std::getline(Infile, line))
	{
		if (Infile.fail()){
			std::cerr << "Error reading from Infile." << std::endl;
		}
		modifyLine(line, string1, string2);
		Outfile << line << "\n";
		if (Outfile.fail()){
			std::cerr << "Error writing to Outfile." << std::endl;
		}
	}
	return (0);
}
