/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:12:19 by deryacar          #+#    #+#             */
/*   Updated: 2024/08/05 15:12:19 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <stdio.h>

PhoneBook::PhoneBook()
{
    counter = 0;
    y = 0;
    size = 0;
}

void PhoneBook::ADD()
{
    std::string data;
    if(counter == 8)
        counter = 0;
    std::cout << "> Please Enter Your First Name: ";
    std::getline(std::cin, data);
    cntact[counter].setFirstName(data);

    std::cout << "> Please Enter Your Last Name: ";
    std::getline(std::cin, data);
    cntact[counter].setLastName(data);

    std::cout << "> Please Enter Your NickName: ";
    std::getline(std::cin, data);
    cntact[counter].setNickName(data);

    std::cout << "> Please Enter Your Number: ";
    std::getline(std::cin, data);
    cntact[counter].setNumber(data);

    std::cout << "> Please Enter Your Secret: ";
    std::getline(std::cin, data);
    cntact[counter].setDarkestSecret(data);
        counter++;
    if (y != 8)
        y++;
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void PhoneBook::SEARCH()
{
    if(counter == 0)
        std::cout << "* Phonebook is empty *" << std::endl;
    else
    {
        std::cout << "_____________________________________________" << std::endl;
        std::cout << "----------------* PHONEBOOK *----------------" << std::endl;
        std::cout << "_____________________________________________" << std::endl;
        std::cout << "|     index|first name| last name|  nickname|" << std::endl;
        std::cout << "---------------------------------------------" << std::endl;
    }
    
    for(int i = 0; i < y; i++)
    {
        std::cout << "|" << "         " << i << "|" ;

        if(cntact[i].getFirstName().size() > 10)
            std::cout << cntact[i].getFirstName().substr(0, 9) << ".|";
        else
        {
            size = cntact[i].getFirstName().size();
            for(int j = 0; j < 10 - size; j++)
                std::cout << " ";
            std::cout << cntact[i].getFirstName();
            std::cout << "|";
        }

        if(cntact[i].getLastName().size() > 10)
            std::cout << cntact[i].getLastName().substr(0, 9) << ".|";
        else
        {
            size = cntact[i].getLastName().size();
            for(int j = 0; j < 10 - size; j++)
                std::cout << " ";
            std::cout << cntact[i].getLastName();
            std::cout << "|";
        }

        if(cntact[i].getNickName().size() > 10)
            std::cout << cntact[i].getNickName().substr(0, 9) << ".|" << std::endl;
        else
        {
            size = cntact[i].getNickName().size();
            for(int j = 0; j < 10 - size; j++)
                std::cout << " ";
            std::cout << cntact[i].getNickName();
            std::cout << "|" << std::endl;
        }
    }

    int index;
    int flag = 0;
    while(!flag && (y != 0))
    {
        std::cout << "> Select index: ";
        std::cin >> index;

        if (std::cin.fail())
        {
            std::cout << "* Invalid input *" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        }
        else if((index >= 0  && index <= 7) && !(index > y - 1))
        {
            std::cout << "First Name: " << cntact[index].getFirstName() << std::endl;
            std::cout << "Last Name: " << cntact[index].getLastName() << std::endl;
            std::cout << "NickName: " << cntact[index].getNickName() << std::endl;
            std::cout << "Number: " << cntact[index].getNumber() << std::endl;
            std::cout << "Darkest Secret: " << cntact[index].getDarkestSecret() << std::endl;
            flag = 1;
        }
        else
            std::cout << "* Wrong index *" << std::endl;
    }
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}


