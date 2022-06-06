#pragma once

#include <iostream>
#include <string>
#define str std::string

class WrongAnimal
{
    protected:
		str type;
	public:
		WrongAnimal ();
		WrongAnimal(const WrongAnimal &src);
		WrongAnimal &operator=(const WrongAnimal &rhs);
		virtual ~WrongAnimal();

		virtual void makeSound() const;
		str getType(void) const;
};