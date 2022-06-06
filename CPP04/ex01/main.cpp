#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal *AnimalArray[20];
    for (int i = 0; i < 20; i++)
    {
        if (i % 2 == 0)
            AnimalArray[i] = new Dog();
        else
            AnimalArray[i] = new Cat();
    }

    for (int i = 0; i < 20; i++)
        delete AnimalArray[i];
    std::cout << "---------------Copy Test----------------" << std::endl;
    Dog copy;
    Dog data = copy;
    return 0;
}
