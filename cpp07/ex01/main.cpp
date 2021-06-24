#include "iter.hpp"

template < typename T >
void print_element(T &element)
{
    std::cout << element << std::endl;
}

template < typename T >
void iter(T *array, int taille, void (*func)(T &)) {
    for (int i = 0; i < taille; i++)
        func(array[i]);
}

int main(int ac, char **av) {
    iter(av, ac, &print_element);
    std::cout << std::endl;
    int		inttab[] = 
    {
		1, 5, 456
	};
    std::cout << "--------INT TAB----------" << std::endl;
	iter(inttab, 3, &print_element);
    std::cout << std::endl;

    std::cout << "--------STRING----------" << std::endl;
    std::string str = "Sucre";
    iter(&str, 1, &print_element);
    std::cout << std::endl;

    std::cout << "-------STRING TAB-------" << std::endl;
    std::string		strtab[] = 
    {
		"plop", "le sang", "la veine"
	};
    iter(strtab, 3, &print_element);
}

