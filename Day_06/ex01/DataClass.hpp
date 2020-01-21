/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   DataClass.hpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 13:08:03 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 14:26:43 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef DATACLASS_HPP
# define DATACLASS_HPP

# include <iostream>

struct Data 
{
	std::string	s1;
	int 		n;
	std::string	s2;
};

class DataClass
{
	public:
		DataClass(void);
		~DataClass(void);
		
		void 		*serialize(void);
		Data		*deserialize(void *raw);
		std::string randomStr(void);

	private:
		DataClass(const DataClass &data);
		Data &operator=(const DataClass &data);

		Data	_dataStruct;

};

#endif