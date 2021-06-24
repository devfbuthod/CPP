#ifndef DEF_EASYFIND
#define DEF_EASYFIND

    #include <iostream>
    #include <algorithm>
    #include <list>
    #include <array>
    #include <vector>

    template <typename T>
    int easyfind(T lst, int nb)
    {
        if (std::find(begin(lst), end(lst), nb) != end(lst))
        {
            std::cout << nb << std::endl;
            return (1);
        }
        return (0);
    }

    class IndexNotFound : public std::exception
    {
        public:
            virtual const std::string exception () const throw();
    };

    const std::string IndexNotFound::exception() const throw ()
    {
        return ("ERROR VALUE");
    }

#endif