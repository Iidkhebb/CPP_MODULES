#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // Animal instantiable_obj; <<< This is not allowed since Animal is abstract
    
    Animal *AnimalArray[20];
    for (int i = 0; i < 20; i++)
    {
        if (i % 2 == 0)
            AnimalArray[i] = new Dog();
        else
            AnimalArray[i] = new Cat();
    }
    std::cout << "-------------- Sound test --------------" << std::endl;
    for (int i = 0; i < 20; i++)
    {
        AnimalArray[i]->makeSound();
    }
    std::cout << "-------------- Sound test --------------" << std::endl;
    
    for (int i = 0; i < 20; i++)
        delete AnimalArray[i]; // << Free memory
    
    std::cout << "---------------Copy Test----------------" << std::endl;
    Dog copy;
    Dog data = copy;
    return 0;
}
