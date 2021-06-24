/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 15:26:00 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/23 15:26:02 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# ifndef DEF_SHRUBBERYCREATIONFORM
# define DEF_SHRUBBERYCREATIONFORM

    #include "Form.hpp"

    class ShrubberyCreationForm: public Form
    {
        private:
            ShrubberyCreationForm();
        public:
            ShrubberyCreationForm(std::string target);
            ShrubberyCreationForm(const ShrubberyCreationForm & rhs);
            ShrubberyCreationForm & operator=(const ShrubberyCreationForm & rhs);
            virtual ~ShrubberyCreationForm();

            void execute(const Bureaucrat & rhs) const;
    };

# endif