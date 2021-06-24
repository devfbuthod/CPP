/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/31 10:10:08 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/31 10:10:10 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
    int i;

    i = rand() % 3;
    switch (i) {
        case 0:
            return (new A);
        case 1:
            return (new B);
        case 2:
            return (new C);
    }
    return (0);
}

void identify_from_pointer(Base * p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" <<std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" <<std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" <<std::endl;
    return ;
}

void identify_from_reference( Base & p)
{
    std::cout << "From reference, ";
    identify_from_pointer(&p);
    return ;
}

int main()
{
    srand(time(NULL));

    Base *base = generate();
    identify_from_pointer(base);
    identify_from_reference(*base);

    Base *base2 = generate();
    identify_from_pointer(base2);
    identify_from_reference(*base2);

    Base *base3 = generate();
    identify_from_pointer(base3);
    identify_from_reference(*base3);
}
