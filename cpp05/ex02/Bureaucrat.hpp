/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 09:26:53 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/23 09:26:55 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# ifndef DEF_BUREAUCRAT
# define DEF_BUREAUCRAT

    #include <iostream>
    #include "Form.hpp"

    class Bureaucrat
    {
        private:
            std::string const name;
            int grade;
        public:
            Bureaucrat();
            Bureaucrat(std::string name, int grade);
            Bureaucrat(const Bureaucrat & rhs);
            Bureaucrat & operator=(const Bureaucrat & rhs);
            virtual ~Bureaucrat();
            std::string getName() const;
            int getGrade() const;
            void increment();
            void decrement();
            void signForm(Form formulaire) const;
            void executeForm(const Form & form);

            class GradeTooHighException : public std::exception
            {
                public:
                    virtual const char* exception () const throw();
            };

            class GradeTooLowException : public std::exception
            {
                public:
                    virtual const char* exception () const throw();
            };
    };

    std::ostream & operator<<( std::ostream & o, Bureaucrat const & i );

# endif