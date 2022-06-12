#include "convert.hpp"

bool is_char(str &data)
{
	if (data.length() == 1 and std::isalpha(data[0]))
	{
		data = std::to_string(static_cast<int>(data[0]));
		return true;
	}
	return false;
};

bool is_inf(str &data)
{
	str value_Array[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"}; 
	
	for (int i = 0; i < 6; i++)
	{
		if (data == value_Array[i])
			return true;
	}
	return false;
};

bool is_interger(str &data)
{
	for (size_t i = 0; i < data.size(); i++)
	{
		if (std::isdigit(data[i]) == false and data[i] != '.' \
			and data[i] != '-' and data[i] != '+' and data[i] != 'f')
			return false;
	}
	return true;
};


static void convert_int(str &data)
{
	if (is_interger(data))
	{
		int value = std::atoi(data.c_str());
		std::cout << value << std::endl;
		return ;
	}
	std::cout << " impossible" << std::endl;
};

static void convert_char(str &data)
{
	if (is_inf(data))
	{
		std::cout << "impossible" << std::endl;
		return ;
	}	
	else
	{
		char value = static_cast<char>(atoi(data.c_str()));
		if (value < ' ' || value > '~')
			std::cout << "Non displayable" << std::endl;
		else
			std::cout << value << std::endl;
		return ;
	}
	return ;
};

static void convert_float(str &data)
{
	if (is_interger(data))
	{
		float nbr = static_cast<float>(std::strtof(data.c_str(), nullptr));
		if (nbr - static_cast<int>(nbr) == 0)
			std::cout << static_cast<int>(nbr) << ".0f" << std::endl;
		else
			std::cout << nbr << "f" << std::endl;
		return ;
	}
	else if (is_inf(data))
	{
		std::cout << " " << (data == "nan" ? data + "f" : data )  << std::endl;
		return ;
	}
	std::cout << " impossible" << std::endl;
};

static void convert_double(str &data)
{
	if (is_interger(data))
	{
		float nbr = static_cast<double>(std::strtod(data.c_str(), nullptr));
		if (nbr - static_cast<int>(nbr) == 0)
			std::cout << static_cast<int>(nbr) << ".0" << std::endl;
		else
			std::cout << nbr << std::endl;
		return ;
	}
	else if (is_inf(data))
	{
		std::cout << " " << data  << std::endl;
		return ;
	}
	std::cout << " impossible" << std::endl;
};

void print_convert(str &data)
{
	std::cout << "char: ", convert_char(data);
	std::cout << "int:", convert_int(data);
	std::cout << "float:", convert_float(data);
	std::cout << "double:", convert_double(data);
};