#include "main.hpp"

template < typename T >

void swap( T & a, T & b ) {
    T temp;
    
    temp = a;
    a = b;
    b = temp;
}

template < typename T >

T min( T & a, T & b) {
    if (a < b)
        return (a);
    else
        return (b);
}

template < typename T >

T max( T & a, T & b) {
    if (a > b)
        return (a);
    else
        return (b);
}

int main () {
    {
        std::cout << "_________INT_________" << std::endl;
        std::cout << std::endl;

        int a = 56;
        int b = 1;
        int res;

        std::cout << "-----SWAP-----" << std::endl;
        std::cout << "a : "<< a << " et b : "<< b << std::endl;
        swap(a, b);
        std::cout << "a : "<< a << " et b : "<< b << std::endl;

        std::cout << "-----MIN-----" << std::endl;
        res = min(a, b);
        std::cout << "a : "<< a << " et b : "<< b << ", le plus petit est : "<< res << std::endl;

        std::cout << "-----MAX-----" << std::endl;
        res = max(a, b);
        std::cout << "a : "<< a << " et b : "<< b << ", le plus grand est : "<< res << std::endl;
        std::cout << std::endl;
    }
    {
        std::cout << "_________STRING_________" << std::endl;
        std::cout << std::endl;

        std::string a = "salut";
        std::string b = "plop";
        std::string res;

        std::cout << "-----SWAP-----" << std::endl;
        std::cout << "a : "<< a << " et b : "<< b << std::endl;
        swap(a, b);
        std::cout << "a : "<< a << " et b : "<< b << std::endl;

        std::cout << "-----MIN-----" << std::endl;
        res = min(a, b);
        std::cout << "a : "<< a << " et b : "<< b << ", le plus petit est : "<< res << std::endl;

        std::cout << "-----MAX-----" << std::endl;
        res = max(a, b);
        std::cout << "a : "<< a << " et b : "<< b << ", le plus grand est : "<< res << std::endl;
        std::cout << std::endl;
    }
    {
        std::cout << "_________FLOAT_________" << std::endl;
        std::cout << std::endl;

        float a = 1.250;
        float b = 58.2;
        float res;

        std::cout << "-----SWAP-----" << std::endl;
        std::cout << "a : "<< a << " et b : "<< b << std::endl;
        swap(a, b);
        std::cout << "a : "<< a << " et b : "<< b << std::endl;

        std::cout << "-----MIN-----" << std::endl;
        res = min(a, b);
        std::cout << "a : "<< a << " et b : "<< b << ", le plus petit est : "<< res << std::endl;

        std::cout << "-----MAX-----" << std::endl;
        res = max(a, b);
        std::cout << "a : "<< a << " et b : "<< b << ", le plus grand est : "<< res << std::endl;
        std::cout << std::endl;
    }
    {
        int a = 2;
        int b = 3;
        swap( a, b );
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
        std::string c = "chaine1";
        std::string d = "chaine2";
        swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
        std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
    }
    
    return 0;
}