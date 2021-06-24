#include "Span.hpp"

int main()
{
    srand(time(NULL));
    try
    {
        Span test(5);
        test.addNumber(56);
        std::cout << test.shortestSpan() << std::endl;
        std::cout << test.longestSpan() << std::endl;
    }
    catch (Span::SizeVectorException & e)
    {
        std::cout << "Error : " << e.exception() << std::endl; 
    }
    catch (Span::AllSpaceUsedException & e)
    {
        std::cout << "Error : " << e.exception() << std::endl; 
    }

    std::cout << std::endl;
    
    try
    {
        Span test(5);
        test.addNumber(56);
        test.addNumber(1);
        test.addNumber(26);
        test.addNumber(2);
        test.addNumber(3);
        test.addNumber(9);
        std::cout << test.shortestSpan() << std::endl;
        std::cout << test.longestSpan() << std::endl;
    }
    catch (Span::SizeVectorException & e)
    {
        std::cout << "Error : " << e.exception() << std::endl; 
    }
    catch (Span::AllSpaceUsedException & e)
    {
        std::cout << "Error : " << e.exception() << std::endl; 
    }

    std::cout << std::endl;
    
    try
    {
        Span test(5);
        test.addNumber(89);
        test.addNumber(1);
        test.addNumber(26);
        test.addNumber(4);
        test.addNumber(23);
        std::cout << test.shortestSpan() << std::endl;
        std::cout << test.longestSpan() << std::endl;
    }
    catch (Span::SizeVectorException & e)
    {
        std::cout << "Error : " << e.exception() << std::endl; 
    }
    catch (Span::AllSpaceUsedException & e)
    {
        std::cout << "Error : " << e.exception() << std::endl; 
    }

    std::cout << std::endl;

    try {
        Span test(1001);

        std::cout << "Taille de test : " << test.getMax() << std::endl;
        test.fillSpan();
        /*for (int i = 0; i < (int)test.getMax(); i++)
            std::cout << test.printNumbers(i) << " ";*/
        std::cout << std::endl;
        
        std::cout << test.shortestSpan() << std::endl;
        std::cout << test.longestSpan() << std::endl;
    }
    catch (Span::SizeVectorException & e)
    {
        std::cout << "Error : " << e.exception() << std::endl; 
    }
    catch (Span::AllSpaceUsedException & e)
    {
        std::cout << "Error : " << e.exception() << std::endl; 
    }
}