/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.cpp                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpajot <bpajot@student.le-101.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2020/01/17 14:13:56 by bpajot       #+#   ##    ##    #+#       */
/*   Updated: 2020/01/17 18:53:54 by bpajot      ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SuperMutant.hpp"

int main()
{
	Character* zaz = new Character("zaz");
	Character* toto = new Character("toto");
	std::cout << *zaz;
	Enemy* b = new RadScorpion();
	Enemy* c = new SuperMutant();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->equip(pf);
	zaz->attack(b);
	std::cout << *zaz;
	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;

	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << b->getType() << " have " <<b->getHP() << " HP" << std::endl;
	std::cout << *zaz;
	zaz->recoverAP();
	std::cout << *zaz;
	zaz->recoverAP();
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;

	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << *toto;
	toto->attack(c);
	std::cout << *toto;
	toto->equip(pr);
	std::cout << *toto;
	toto->attack(c);
	std::cout << *toto;
	toto->equip(pf);
	std::cout << *toto;
	toto->attack(c);
	std::cout << *toto;
	toto->attack(c);
	std::cout << *toto;
	toto->attack(c);
	std::cout << *toto;
	toto->attack(c);
	std::cout << "end" <<std::endl;

	delete(zaz);
	delete(toto);
	delete(b);
	delete(c);
	delete(pf);
	delete(pr);
	return 0;
}