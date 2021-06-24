#include "Mutantstack.hpp"

int main()
{
    Mutantstack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    std::cout << std::endl;
    mstack.push(25);
    mstack.push(48);
    mstack.push(1000);
    mstack.push(96);
    Mutantstack<int>::iterator it = mstack.begin();
    Mutantstack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);

    std::cout << std::endl;
    
    Mutantstack<int>::reverse_iterator it2 = mstack.rbegin();
    Mutantstack<int>::reverse_iterator ite2 = mstack.rend();
    while (it2 != ite2)
    {
        std::cout << *it2 << std::endl;
        ++it2;
    }

    std::cout << std::endl;
    std::cout << "Test avec un std::list" << std::endl;

    std::list<int> lst;
    lst.push_back(25);
    lst.push_back(48);
    lst.push_back(1000);
    lst.push_back(96);
    std::list<int>::iterator it3 = lst.begin();
    std::list<int>::iterator ite3 = lst.end();
    while (it3 != ite3)
    {
        std::cout << *it3 << std::endl;
        ++it3;
    }

    std::cout << std::endl;

    std::list<int>::reverse_iterator it4 = lst.rbegin();
    std::list<int>::reverse_iterator ite4 = lst.rend();
    while (it4 != ite4)
    {
        std::cout << *it4 << std::endl;
        ++it4;
    }

    return 0;
}