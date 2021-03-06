/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Phonebook.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 11:48:16 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/13 14:31:38 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class Phonebook
{
public:
    Phonebook(void);
    ~Phonebook(void);
    void        add(void);
    void        search(void) const;

private:
    int         _nb_contact;
    Contact     _contacts[8];
};

#endif