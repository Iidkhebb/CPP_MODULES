#include "MutantStack.hpp"

int main()
{
    {
        std::cout << "\n[------------------- MutantStack -----------------------]\n" << std::endl;
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
        std::cout << "------------" << "The value of the iterator " << "--------" <<  std::endl;
        while (it != ite)
        {
            std::cout << *it << std::endl; // <- print the values
            ++it;
        }

        std::stack<int> s(mstack); // <- copy the MutantStack to a std::stack
    }

    // comparing output using different container
    
    {
        {
            std::cout << "\n[------------------- STD::LIST -----------------------]\n" << std::endl;
            std::list<int> list;
            list.push_front(5);
            list.push_front(17);
            std::cout << "------------------- \n" <<  " value at the front (top) of the list -> "<< list.front() << "\n-------------------\n" << std::endl;
            list.pop_front();
            std::cout << "-------------------- \n" << "The size of the list -> " << list.size() << "\n-------------------\n" <<  std::endl;
            list.push_back(3);
            list.push_back(5);
            list.push_back(737);
            //[...]
            list.push_back(0);
            std::list<int>::iterator it2 = list.begin();
            std::list<int>::iterator ite2 = list.end();
            ++it2;
            --it2;
            std::cout << "-------------" << "The value of the iterator " << "--------" <<  std::endl;
            while (it2 != ite2)
            {
                std::cout << *it2 << std::endl;
                ++it2;
            }
            std::list<int> s(list);
        }
    }
}