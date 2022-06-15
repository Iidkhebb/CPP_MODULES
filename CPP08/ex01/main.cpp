#include "Span.hpp"

int main()
{
    {
    std::cout << "------- Test with 5 elements --------" << std::endl;
    Span sp(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);

    std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
    std::cout << "Longest span: " << sp.longestSpan() << std::endl;

    }

    {
        std::cout << "------- Test with 10K elements --------" << std::endl;
        std::vector<int> container;
        Span sp(10000);
        for (int i = 0; i < 10000; i++)
        {
            container.push_back(i);
        }
        sp.addNumber(container.begin(), container.end());
        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    }

    {
        std::cout << "------- Test with 10K elements with exception --------" << std::endl;
        try
        {
            std::vector<int> container;
            Span sp(10000);
            for (int i = 0; i < 10000; i++)
            {
                container.push_back(i);
            }
            sp.addNumber(container.begin(), container.end());
            std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
            std::cout << "Longest span: " << sp.longestSpan() << std::endl;
            sp.addNumber(45);
        }
        catch (const std::exception &e)
        {
            std::cout << e.what() << std::endl;
        }
    }

    {
        std::cout << "------- Test with single element --------" << std::endl;
        try
        {
            Span sp(1);
            sp.addNumber(6);
   
            std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
            std::cout << "Longest span: " << sp.longestSpan() << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
}