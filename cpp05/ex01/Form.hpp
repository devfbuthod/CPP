/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/23 11:58:04 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/05/23 11:58:06 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# ifndef DEF_FORM
# define DEF_FORM

    #include <iostream>
    class Bureaucrat;

    class Form
    {
        private:
            std::string const name;
            int const gSign;
            int const gExec;
            bool is_signed;
        public:
            Form();
            Form & operator=(const Form & rhs);
            Form(const Form & rhs);
            virtual ~Form();
            
            Form(std::string name, int gSign, int gExec);
            std::string getName() const;
            bool getIsSigned() const;
            int getSignGrade() const;
            int getExecGrade() const;
            void beSigned(const Bureaucrat & src);

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

    std::ostream & operator<<( std::ostream & o, Form const & i );

# endif
