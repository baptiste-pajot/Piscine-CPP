/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   DataClass.cpp                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/21 13:12:23 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/21 14:26:40 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "DataClass.hpp"
#include <ctime>

DataClass::DataClass(void)
{
	srand(clock());
	this->_dataStruct.s1 = randomStr();
	this->_dataStruct.n = rand();
	this->_dataStruct.s2 = randomStr();
	std::cout << "Data class created with s1 = " << this->_dataStruct.s1;
	std::cout << ", n = " << this->_dataStruct.n;
	std::cout << " and s2 = " << this->_dataStruct.s2 << std::endl;
}

DataClass::~DataClass(void)
{
}

std::string DataClass::randomStr(void)
{
	int			i = -1;
	int			r = 0;
	char		str[9];

	while (++i < 8)
	{
		r = rand() % 122;
		while (!(std::isalnum(r)))
			r += rand() % 7; 
		str[i] = r;
	}
	str[8] = '\0';
	std::string sstr(str);
	return sstr;
}

void	*DataClass::serialize(void)
{
	return &(this->_dataStruct);
}

Data	*DataClass::deserialize(void *raw)
{
	return reinterpret_cast<Data *>(raw);
}
