/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/19 13:12:11 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/19 13:12:13 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# ifndef DEF_MATERIASOURCE
# define DEF_MATERIASOURCE

    #include "AMateria.hpp"
    #include "IMateriaSource.hpp"

    class MateriaSource: public IMateriaSource
    {
        private:
            AMateria* materias[4];
        public:
            MateriaSource();
            MateriaSource & operator=(const MateriaSource & rhs);
            MateriaSource(const MateriaSource & rhs);
            virtual ~MateriaSource() {}
            
            void learnMateria(AMateria* m);
            AMateria* createMateria(std::string const & type);
    };

# endif
