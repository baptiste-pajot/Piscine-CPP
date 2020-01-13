/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Contact.hpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 11:01:58 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/13 11:19:04 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class Contact
{

public:
    Contact(void);
    ~Contact(void);

private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string login;
    std::string postal_adress;
    std::string email_adress;
    std::string phone_number;
    std::string birthday_date;
    std::string favorite_meal;
    std::string underwear_color;
    std::string darkest_secret;
};

#endif CONTACT_H