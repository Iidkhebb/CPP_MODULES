#include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    
    std::cout << "------------------- \n" <<  " value at the top of the stack -> "<< mstack.top() << "\n-------------------\n" << std::endl;
    mstack.pop(); // <- remove the top element
    std::cout << "-------------------- \n" << "The size of the stack -> " << mstack.size() << "\n-------------------\n" <<  std::endl;
    
    mstack.push(3); // <- add an element to the top of the stack
    mstack.push(5); // <- add an element to the top of the stack
    mstack.push(737); // <- add an element to the top of the stack
    mstack.push(0); // <- add an element to the top of the stack

    MutantStack<int>::iterator it = mstack.begin(); // <- get the iterator on the first element of the stack
    MutantStack<int>::iterator ite = mstack.end(); // <- get the iterator on the last element of the stack
   
    ++it; // <- increment the iterator
    --it; // <- decrement the iterator
    std::cout << "--------------------" << "The value of the iterator " << "-------------------" <<  std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl; // <- print the values
        ++it;
    }

    std::stack<int> s(mstack); // <- copy the MutantStack to a std::stack
    return (0);
}