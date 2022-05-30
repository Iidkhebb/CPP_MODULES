#pragma once
#include <string>
#include <iostream>
#define str std::string

class ReplaceString
{
	public:
		ReplaceString(str base);
		str replace_string(str s1, str s2);
		~ReplaceString();
	private:
		str _base;
};
