/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/14 17:55:07 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 18:47:17 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int argc, char **argv)
{	
	std::string		filename;
	std::string		filestr;
	std::string		s1;
	std::string		s2;
	std::size_t		found;

	if (argc == 4)
	{
		filename = argv[1];
		s1 = argv[2];
		s2 = argv[3]; 
		std::ifstream	ifs(filename);
		if (ifs.is_open() > 0 && s1.length() && s2.length())
		{
			std::getline(ifs, filestr, '\0');
			found = filestr.find(s1, 0);
			while(found != std::string::npos)
			{
				filestr.replace(found, s1.length(), s2);
				found = filestr.find(s1, found + s2.length());
			}
			std::transform(filename.begin(), filename.end(), filename.begin(), ::toupper);
			filename.replace(filename.length(), 8, ".replace");
			std::ofstream	ofs(filename);
			ofs << filestr;
		}
		else
			std::cout << "This filename or s1 or s2 doesn't exist"<< std::endl;
	}
	else
		std::cout << "Wrong number of parameters"<< std::endl << "Usage : ./replace filename s1 s2"<< std::endl;
}