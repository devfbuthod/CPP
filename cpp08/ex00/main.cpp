#include "easyfind.hpp"

int main()
{
    {
        std::list<int> l;
        l.push_back(55);
        l.push_back(69);
        try {
            if (!(easyfind(l, 45)))
                throw IndexNotFound();
        }
        catch (IndexNotFound & e)
        {
            std::cout << "ERROR: " << e.exception() << std::endl;
        }

        try {
            if (!(easyfind(l, 46)))
                throw IndexNotFound();
        }
        catch (IndexNotFound & e)
        {
            std::cout << "ERROR: " << e.exception() << std::endl;
        }

        try {
            if (!(easyfind(l, 69)))
                throw IndexNotFound();
        }
        catch (IndexNotFound & e)
        {
            std::cout << "ERROR: " << e.exception() << std::endl;
        }

        try {
            if (!(easyfind(l, 55)))
                throw IndexNotFound();
        }
        catch (IndexNotFound & e)
        {
            std::cout << "ERROR: " << e.exception() << std::endl;
        }
    }
    std::cout << std::endl;
    {
        std::array<int, 3> l2 = {21, 42, 38};
        try {
            if (!(easyfind(l2, 2)))
                throw IndexNotFound();
        }
        catch (IndexNotFound & e)
        {
            std::cout << "ERROR: " << e.exception() << std::endl;
        }

        try {
            if (!(easyfind(l2, 42)))
                throw IndexNotFound();
        }
        catch (IndexNotFound & e)
        {
            std::cout << "ERROR: " << e.exception() << std::endl;
        }
    }
    std::cout << std::endl;
    {
        std::vector<int> l3;
        l3.push_back(25);
        l3.push_back(13);
        try {
            if (!(easyfind(l3, 2)))
                throw IndexNotFound();
        }
        catch (IndexNotFound & e)
        {
            std::cout << "ERROR: " << e.exception() << std::endl;
        }

        try {
            if (!(easyfind(l3, 13)))
                throw IndexNotFound();
        }
        catch (IndexNotFound & e)
        {
            std::cout << "ERROR: " << e.exception() << std::endl;
        }
    }
    return 0;
}