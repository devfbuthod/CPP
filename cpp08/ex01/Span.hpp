#ifndef DEF_SPAN
#define DEF_SPAN

    #include <iostream>
    #include <vector>
    #include <string>
    #include <algorithm>


    class Span
    {
        public:
            void addNumber(unsigned int nb);
            int shortestSpan() const;
            int longestSpan() const;
            Span(unsigned int max);
            Span & operator=(const Span & rhs);
            Span(const Span & rhs);
            unsigned int getMax() const;
            int printNumbers(int index) const;
            void fillSpan();
            virtual ~Span();

            class SizeVectorException : public std::exception
            {
                public:
                    virtual const std::string exception () const throw();
            };
            
            class AllSpaceUsedException : public std::exception
            {
                public:
                    virtual const std::string exception () const throw();
            };

        private:
            unsigned int max;
            std::vector<int> vec;
            Span();
    };

#endif