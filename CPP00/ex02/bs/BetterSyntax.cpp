#include "BetterSyntax.hpp"

str bs :: input(str x)
{
	str temp;
	cout << x ;
	getline(std::cin, temp);
	return temp;
}