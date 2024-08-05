/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deryacar <deryacar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/05 15:12:10 by deryacar          #+#    #+#             */
/*   Updated: 2024/08/05 15:12:10 by deryacar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"

class PhoneBook {
    private:
       Contact cntact[8];
       int counter;
       int y;
       int size;
    public:
        PhoneBook();
        void ADD();
        void SEARCH();   
};

#endif