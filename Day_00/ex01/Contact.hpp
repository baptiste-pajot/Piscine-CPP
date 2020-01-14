/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   Contact.hpp                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 11:01:58 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/14 09:00:36 by bpajot      ###    #+. /#+    ###.fr     */
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

    void    		add(void);
    void    		displayAll(int i) const;
    void    		displayOne(void) const;

private:
    std::string		_first_name;
    std::string		_last_name;
    std::string		_nickname;
    std::string		_login;
    std::string		_postal_adress;
    std::string		_email_adress;
    std::string		_phone_number;
    std::string		_birthday_date;
    std::string		_favorite_meal;
    std::string		_underwear_color;
    std::string		_darkest_secret;

    std::string		_resizeString(std::string in) const;
};

#endif