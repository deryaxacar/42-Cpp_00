/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:13:03 by deryacar          #+#    #+#             */
/*   Updated: 2024/08/05 15:13:03 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

std::string Contact::getFirstName() {
        return(firstName);
}

std::string Contact::getLastName() {
        return(lastName);
}

std::string Contact::getNickName() {
        return(nickName);
}

std::string Contact::getNumber() {
        return(number);
}

std::string Contact::getDarkestSecret() {
        return(darkestSecret);
}

void    Contact::setFirstName(std::string str) {
    firstName = str;
}

void    Contact::setLastName(std::string str) {
    lastName = str;
}

void    Contact::setNickName(std::string str) {
    nickName = str;
}

void    Contact::setNumber(std::string str) {
    number = str;
}

void    Contact::setDarkestSecret(std::string str) {
    darkestSecret = str;
}