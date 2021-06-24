/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbuthod- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 10:22:39 by fbuthod-          #+#    #+#             */
/*   Updated: 2021/03/25 10:22:41 by fbuthod-         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>
#include <cstring>

int main(int argc, char *argv[])
{
    std::string filename, filename_modif, s1, s2, file, line, temp_line;
    int find;
    std::ifstream myfile;
    std::ofstream secondfile;
    
    if (argc == 4)
    {
        filename = argv[1];
        filename_modif = filename + ".replace";
        s1 = argv[2];
        s2 = argv[3];
        myfile.open(filename);
        if (myfile.is_open())
        {
            while (std::getline(myfile,line))
            {
                while ((find = line.find(s1)) != -1)
                {
                    temp_line = line.substr(0, find);
                    line = temp_line + s2 + line.substr(find + s1.length(), line.length());
                }
                file = file + line + "\n";
            }
            myfile.close();
            secondfile.open(filename_modif, std::ios::out);
            secondfile << file << std::endl;
            secondfile.close();
        }
    }
    return (0);
}