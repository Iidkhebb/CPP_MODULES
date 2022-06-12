#include <iostream>
#include <string>

struct Data
{
    int a,b;
    char c;
};


uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
};

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data*>(raw);
};

int main()
{
    Data ptr;
    ptr.a = 42;
    ptr.b = 1337;
    ptr.c = 'g';
    
    uintptr_t raw = serialize(&ptr);
    Data *ptr2 = deserialize(raw);
    
    std::cout << (&ptr != ptr2 ? "DIFFRENT POINTER" : "SAME POINTER") << std::endl;
    std::cout << "ptr = " << &ptr << std::endl;
    std::cout << "ptr2 = " << ptr2 << std::endl;

    return 0;
}
