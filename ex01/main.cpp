/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:12:41 by deryacar          #+#    #+#             */
/*   Updated: 2024/08/05 15:12:41 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"

int main()
{
    PhoneBook data;
    std::cout << "/----------------------------------------\\" << std::endl;
    std::cout << "|  Hi!  Welcome  My  Awesome  PhoneBook  |" << std::endl;
    std::cout << "| *You Can Use Only ADD, SEARCH or EXIT* |" << std::endl;
    std::cout << "\\----------------------------------------/" << std::endl;

    while(1)
    {
        std::cout << "> Please enter a command: ";
        std::string command;
        std::getline(std::cin, command);
        if(command == "ADD")
        {
            data.ADD();
            std::cout << "* Informations has added Phonebook *" << std::endl;
        }
        else if(command == "SEARCH")
            data.SEARCH();
        else if(command == "EXIT")
        {
            std::cout << "* This Program Exited *\n";
            return (0);
        }
        else
            std::cout << "* Invalid Command *" << std::endl;
    }
}