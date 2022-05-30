#include "replaceString.hpp"

ReplaceString::ReplaceString(str base)
{
	this->_base = base;
}

str ReplaceString::replace_string(str s1, str s2)
{
	str result = "";
	int pos = 0;
	if ((s1.empty() || s2.empty()))
		return (this->_base);

	while (pos != -1)
	{
		pos = this->_base.find(s1, pos);
		if (pos != -1)
		{
			result += this->_base.substr(0, pos);
			result += s2;
			this->_base = this->_base.substr(pos + s1.size());
			pos = 0;
		}
	}
	result += this->_base;
	return (result);
}

ReplaceString::~ReplaceString(void)
{

}