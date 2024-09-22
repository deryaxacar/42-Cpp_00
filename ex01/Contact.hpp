/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:12:50 by deryacar          #+#    #+#             */
/*   Updated: 2024/08/05 15:12:50 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
    private:
        std::string firstName;
        std::string lastName;
        std::string nickName;
        std::string number;
        std::string darkestSecret;
    public:

    //setter
    void    setFirstName(std::string str);
    void    setLastName(std::string str);
    void    setNickName(std::string str);
    void    setNumber(std::string str);
    void    setDarkestSecret(std::string str);

    //getter
    std::string getFirstName();
    std::string getLastName();
    std::string getNickName();
    std::string getNumber();
    std::string getDarkestSecret();
};

#endif
