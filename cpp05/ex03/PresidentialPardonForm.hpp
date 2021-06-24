/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 15:25:32 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/23 15:25:33 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# ifndef DEF_PRESIDENTIALPARDONFORM
# define DEF_PRESIDENTIALPARDONFORM

    #include <iostream>
    #include "Form.hpp"

    class PresidentialPardonForm: public Form
    {
        private:
            PresidentialPardonForm();
        public:
            PresidentialPardonForm(std::string target);
            PresidentialPardonForm(const PresidentialPardonForm & rhs);
            PresidentialPardonForm & operator=(const PresidentialPardonForm & rhs);
            virtual ~PresidentialPardonForm();

            void execute(const Bureaucrat & rhs) const;
    };

# endif