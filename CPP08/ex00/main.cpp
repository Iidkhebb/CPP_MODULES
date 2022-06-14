#include "easyfind.hpp"

int main()
{
    {
        std::vector<int> container;
        container.push_back(1);
        container.push_back(4);
        container.push_back(6);
        container.push_back(0);
        container.push_back(9);
        std::cout << "Lookig for value 6 and found at : " << easyfind(container, 6) << " index." << std::endl; 
    }

    {
        std::array<int, 3> container = {1, 10, 9};
        std::cout << "Lookig for value 10 and found at : " << easyfind(container, 10) << " index." << std::endl; 
    }   
    
    {
        std::array<int, 5> container = {1, 10, 9};
        std::cout << "Lookig for value 5 and found at : " << easyfind(container, 5) << " index." << std::endl; 
    }   
}