#include "Span.hpp"

Span::Span(unsigned int max): max(max) {
}

void Span::addNumber(unsigned int nb)
{
    if (max > vec.size())
        vec.push_back(nb);
    else
        throw AllSpaceUsedException();
}

int Span::shortestSpan() const
{
    int ecart = INT_MAX;

    if (vec.size() < 2)
        throw SizeVectorException();
    for (int i = 0; i < (int)vec.size(); i++)
    {
        for (int j = 0; j < (int)vec.size(); j++)
        {
            if (vec[i] - vec[j] >= 0 && vec[i] - vec[j] < ecart && vec[i] != vec[j])
                ecart = vec[i] - vec[j];
        }
    }
    return ecart;
}

int Span::longestSpan() const
{
    if (vec.size() < 2)
        throw SizeVectorException();

    int min = static_cast<int>(*min_element(vec.begin(), vec.end()));
    int max = static_cast<int>(*max_element(vec.begin(), vec.end()));

    return max - min;
}

unsigned int Span::getMax() const
{
    return (max);
}

int Span::printNumbers(int i) const
{
    return (vec[i]);
}

void Span::fillSpan()
{
    int values[getMax()];

    for (int i = 0; i < (int)getMax(); i++)
        values[i] = rand()%(getMax() * 10);
    
    vec.assign(values, values + getMax());
}

const std::string Span::SizeVectorException::exception() const throw ()
{
	return ("number inside vector < 2");
}

const std::string Span::AllSpaceUsedException::exception() const throw ()
{
    return ("all space of vector use");
}

Span::~Span() {}