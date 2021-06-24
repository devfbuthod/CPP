#include "Array.hpp"

int main()
{
    try 
    {
        Array<unsigned int> plop(10);
        plop[2] = 52;
        std::cout << plop.getSize() << std::endl;
        std::cout << plop[2] << std::endl;
        std::cout << plop[25] << std::endl;
    }
    catch (std::exception &e)
	{
		std::cout << "index does not exist" << std::endl;
	}

    try 
    {
        Array<unsigned int> test(5);
        test[0] = 52;
        test[1] = 28;
        test[2] = 99;
        test[3] = 100000000;
        test[4] = 63;
        test[5] = 10;
        std::cout << test.getSize() << std::endl;
        std::cout << test[0] << std::endl;
        std::cout << test[1] << std::endl;
        std::cout << test[2] << std::endl;
        std::cout << test[3] << std::endl;
        std::cout << test[4] << std::endl;
        std::cout << test[5] << std::endl;
    }
    catch (std::exception &e)
	{
		std::cout << "index does not exist" << std::endl;
	}
    return 0;
}