#pragma once

#include <vector>
#include <algorithm>
#include <iostream>
#include <string>
#include <array>

class Span
{
    public:
        Span();
        Span(unsigned int nbr);
        Span(Span const &src);
        ~Span();

        Span &operator=(Span const &rhs);

        void addNumber(int nbr);
        template <typename T>
        void addNumber(T begin, T end)
        {
            if (this->container.size() >= N)
                throw Span::FullSpanException();
            this->container.insert(this->container.end(), begin, end);
        }
        int shortestSpan(void);
        int longestSpan(void);

        class EmptySpanException : public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return "Span Is Empty";
                };
        };

        class FullSpanException : public std::exception
        {
            public:
                virtual const char *what() const throw()
                {
                    return "Span Is Full";
                };
        };

    private:
        unsigned int N;
        std::vector<int> container;
};
