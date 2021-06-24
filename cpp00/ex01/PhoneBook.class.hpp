/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cpp01.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 11:21:10 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/15 11:21:11 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEF_PHONEBOOK
#define DEF_PHONEBOOK

    #include <string>

    class PhoneBook
    {
        public:
            PhoneBook();
            PhoneBook(std::string f_name, std::string lname, std::string nname, 
            std::string log, std::string p_number, std::string b_date, 
            std::string f_meal, std::string underw_c, std::string d_secret);
            void hello();
            void search_book_phone(PhoneBook tab, int i);
            void print_infos();
            PhoneBook add_new_phone();
            std::string getFname() const;
            std::string getLname() const;
            std::string getNname() const;
            std::string getLog() const;
            std::string getPnumber() const;
            std::string getFmeal() const;
            std::string getBdate() const;
            std::string getUnderwc() const;
            std::string getDsecret() const;
            ~PhoneBook();

        private:
            std::string fname;
            std::string lname;
            std::string nname;
            std::string log;
            std::string p_number;
            std::string b_date;
            std::string f_meal;
            std::string underw_c;
            std::string d_secret;
    };

#endif