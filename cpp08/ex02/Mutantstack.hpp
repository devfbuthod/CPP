#ifndef DEF_MUTANTSTACK
#define DEF_MUTANTSTACK

    #include <iostream>
    #include <stack>
    #include <list>

    template < typename T >
    class Mutantstack: public std::stack<T>
    {
        public:
            Mutantstack(): std::stack<T>() {};
            Mutantstack(const Mutantstack & rhs){ *this = rhs; };
            Mutantstack & operator=(const Mutantstack & rhs)
            {
                if (&rhs == this) return (*this);
                this->~Mutantstack();
                return *new(this) Mutantstack(rhs);
            };
            virtual ~Mutantstack() {};

            typedef typename std::stack<T>::container_type::iterator iterator;
            iterator begin() { return (std::stack<T>::c.begin()); }
            iterator end() { return (std::stack<T>::c.end()); }

            typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
            reverse_iterator rbegin() { return (std::stack<T>::c.rbegin()); }
            reverse_iterator rend() { return (std::stack<T>::c.rend()); }

        private:
            std::stack<T> mstack;
    };

#endif