#include "Span.hpp"

Span::Span()
{
    this->N = 0;
}

Span::Span(unsigned int nbr)
{
    this->N = nbr;
}

Span::Span(Span const &src)
{
    this->N = src.N;
    this->container = src.container;
}

Span::~Span(){}

Span &Span::operator=(Span const &rhs)
{
    this->N = rhs.N;
    this->container = rhs.container;
    return *this;
}

void Span::addNumber(int nbr)
{
    if (this->container.size() >= N)
        throw Span::FullSpanException();
    container.push_back(nbr);
}

int Span::shortestSpan(void)
{
    if(this->container.size() < 2)
        throw Span::EmptySpanException();
    
    // search for lowest distance between two elements in the container using iterartor
    typedef std::vector<int>::iterator it;
    it it1 = this->container.begin();
    it it2 = this->container.begin() + 1;
    int min = std::abs(*it2 - *it1);
    
    while (it2 != this->container.end())
    {
        if (*it2 - *it1 < min)
            min = std::abs(*it2 - *it1);
        it1++;
        it2++;
    }
    return min;
}

int Span::longestSpan(void)
{
    if(this->container.size() < 2)
        throw Span::EmptySpanException();
    
    // search for highest distance between two elements in the container
    typedef std::vector<int>::iterator it;
    it it1 = this->container.begin();
    it it2 = this->container.begin() + 1;
    int max = std::abs(*it2 - *it1);

    while (it2 != this->container.end())
    {
        if (*it2 - *it1 > max)
            max = std::abs(*it2 - *it1);
        it1++;
        it2++;
    }
    return max;
}