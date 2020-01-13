/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   megaphone.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/13 09:32:15 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/13 10:00:16 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <iostream>

int     main(int argc, char **argv){
    int     i = 0;
    int     j;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else {
        while (++i < argc)
        {
            j = -1;
            while (argv[i][++j])
                std::cout << (char)std::toupper(argv[i][j]);
        }
        std::cout << std::endl;
    }
}