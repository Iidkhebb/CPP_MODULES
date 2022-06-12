#include <iostream>

class Base 
{
    public:
        virtual ~Base(){};
};  

class A : public Base {};
class B : public Base {};
class C : public Base {};



Base *A_Base(void)
{
    std::cout << "Generating => A <=\n" << std::endl;
    return (new A());
};

Base *B_Base(void)
{
    std::cout << "Generating => B <=\n" << std::endl;
    return (new B());
};

Base *C_Base(void)
{
    std::cout << "Generating => C <=\n" << std::endl;
    return (new C());
};



Base * generate(void)
{
    srand(time(NULL));
    typedef Base *(*generator)(void);
    generator tab[3] = {&A_Base, &B_Base, &C_Base};
    int i = rand() % 3;
    return (*tab[i])();
};

void identify(Base* p)
{
    std::cout << "------ Identify using pointers------" << std::endl;
    
    std::cout << "p : ";
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Unknown" << std::endl;
    std::cout << "------ Identify using pointers------\n\n" << std::endl;
};

void identify(Base& p)
{
    std::cout << "------ Identify using references------" << std::endl;
    
    std::cout << "p : ";
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e){}
    try
    {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    }
    catch(const std::exception& e){}
    try
    {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    }
    catch(const std::exception& e){}
    std::cout << "------ Identify using references------\n\n" << std::endl;
};

int main()
{
    Base *ptr =  generate();
    identify(*ptr);
    identify(ptr);
    return 0;
}
