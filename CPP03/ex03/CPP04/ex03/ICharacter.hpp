#pragma omce

#include <iostream>
#include <string>

class ICharacter
{
    public:
        ICharacter();
        virtual std::string const & getName() const = 0; //Returns the character name
        virtual void equip(AMateria* m) = 0; //Equip a materia into the inventory
        virtual void unequip(int idx) = 0; //Unequip a materia from the inventory
        virtual void use(int idx, ICharacter& target) = 0; //Use a materia
};