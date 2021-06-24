/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/21 14:23:49 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/21 14:23:50 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_VICTIM
#define DEF_VICTIM

    #include <iostream>

    class Victim
    {
        public:
            Victim();
            Victim(const Victim &victim);
            Victim & operator=(Victim const & rhs);
            virtual ~Victim();

            Victim(std::string name);
            void setName(std::string name);
            std::string getName() const;
            std::string announce(void) const;
            virtual void getPolymorphed() const;
        private:
            std::string name;
    };

    std::ostream &operator<<(std::ostream &o, Victim const &rhs);

#endif
