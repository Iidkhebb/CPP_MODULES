#include <iostream>
#include <string>
#include <fstream>
#include "replaceString.hpp"


int main(int ac, char *av[])
{
	if (ac == 4)
	{
		std::string file_content;
		std::ifstream file(av[1]);
		if (file.is_open())
		{
			std::string line;
  			str output_file = av[1];
			while (getline(file, line))
				file_content += line;
			std::ofstream return_file;
			output_file += ".replace";
			return_file.open(output_file.c_str());
			return_file << ReplaceString(file_content).replace_string(av[2], av[3]) << std::endl;
			return_file.close();
			file.close();
		}
		else
		{
			std::cout << "Error: can't open file" << std::endl;
			return (1);
		}
		
	}
	else
	{
		std::cout << "Error: wrong number of arguments" << std::endl;
		return (1);
	}
	return 0;
}
