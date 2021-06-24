/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 15:25:45 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/23 15:25:47 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# ifndef DEF_ROBOTOMYREQUESTFORM
# define DEF_ROBOTOMYREQUESTFORM

    #include <iostream>
    #include "Form.hpp"

    class RobotomyRequestForm: public Form
    {
        private:
            RobotomyRequestForm();
        public:
            RobotomyRequestForm(std::string target);
            RobotomyRequestForm(const RobotomyRequestForm & rhs);
            RobotomyRequestForm & operator=(const RobotomyRequestForm & rhs);
            virtual ~RobotomyRequestForm();

            void execute(Bureaucrat const & rhs) const;
    };

# endif
