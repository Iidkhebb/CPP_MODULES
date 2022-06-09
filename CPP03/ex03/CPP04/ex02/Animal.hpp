#pragma once

#include <iostream>
#include <string>
#define str std::string

class Animal
{
    protected:
		str type;
	public:
		Animal ();
		Animal(const Animal &src);
		Animal &operator=(const Animal &rhs);
		virtual ~Animal();

		virtual void makeSound() const = 0;
		str getType(void) const;
};