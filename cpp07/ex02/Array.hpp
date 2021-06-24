#ifndef DEF_ARRAY
#define DEF_ARRAY

    #include <stddef.h>
    #include <iostream>

    template < typename T >
    class Array
    {
        public:
            Array(): array(NULL), size(0) {}

            Array & operator=(const Array & rhs)
            {
                if (&rhs == this) return (this);
                return *new (this) Array(rhs);
            }

            Array(const Array & rhs)
            {
                if (&rhs != this)
                {
                    for (unsigned int i = 0; i < rhs.getSize(); i++)
                        array[i] = rhs[i];
                }
            }

            Array(unsigned int n): size(n), array(new T[n]) {
                
            }

            unsigned int getSize() const
            {
                return (size);
            }

            T & operator[](unsigned int n)
            {
                if (n >= size)
                    throw std::exception();
                return (array[n]);
            }

        private:
            T *array;
            unsigned int size;
    };

#endif