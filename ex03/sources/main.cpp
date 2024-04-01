/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:31:41 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/22 08:53:32 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int	main(void) {
	DiamondTrap a;
	DiamondTrap b("Mrs DiamondTrap");
	DiamondTrap c(b);
	DiamondTrap d("Mr DiamondTrap");
	DiamondTrap e = d;

	std::cout << "a: ";
	a.whoAmI();
	a.attack("some random guy");
	std::cout << "b: ";
	b.whoAmI();
	b.attack("some random guy");
	std::cout << "c: ";
	c.whoAmI();
	c.attack("some random guy");
	std::cout << "d: ";
	d.whoAmI();
	d.attack("some random guy");
	std::cout << "e: ";
	e.whoAmI();
	e.attack("some random guy");
	
	std::cout << "a: ";
	a.takeDamage(30);
	std::cout << "b: ";
	b.takeDamage(50);
	std::cout << "c: ";
	c.takeDamage(70);
	std::cout << "d: ";
	d.takeDamage(120);
	std::cout << "e: ";
	e.takeDamage(90);

	std::cout << "a: ";
	a.attack("some random guy");
	std::cout << "a: ";
	a.attack("some random guy");
	std::cout << "a: ";
	a.attack("some random guy");
	std::cout << "a: ";
	a.attack("some random guy");
	std::cout << "b: ";
	b.attack("some random guy");
	std::cout << "c: ";
	c.attack("some random guy");
	std::cout << "d: ";
	d.attack("some random guy");
	std::cout << "e: ";
	e.attack("some random guy");

	std::cout << "a: ";
	a.takeDamage(50);
	std::cout << "a: ";
	a.beRepaired(40);
	std::cout << "a: ";
	a.takeDamage(50);
	std::cout << "a: ";
	a.beRepaired(80);
	std::cout << "a: ";
	a.takeDamage(50);
	std::cout << "a: ";
	a.beRepaired(40);
	std::cout << "a: ";
	a.takeDamage(50);
	std::cout << "a: ";
	a.beRepaired(40);
	std::cout << "a: ";
	a.takeDamage(50);
	std::cout << "a: ";
	a.beRepaired(40);
	std::cout << "a: ";
	a.takeDamage(50);
	std::cout << "a: ";
	a.beRepaired(40);
	std::cout << "a: ";
	a.beRepaired(40);
	std::cout << "a: ";
	a.attack("some random guy");
	std::cout << "a: ";
	a.takeDamage(50);
	std::cout << "a: ";
	a.attack("some random guy");
	for (int i = 0; i < 100; i++) {
		std::cout << "a: ";
		a.attack("some random guy");
	}
	std::cout << "a: ";
	a.beRepaired(40);
	std::cout << "a: ";
	a.takeDamage(50);
	std::cout << "a: ";
	a.beRepaired(40);

	std::cout << "a: ";
	a.guardGate();
	std::cout << "b: ";
	b.guardGate();
	std::cout << "b: ";
	b.highFivesGuys();
	std::cout << "b: ";
	b.highFivesGuys();

	std::cout << "c: ";
	c.attack("some random guy");
	std::cout << "d: ";
	d.attack("some random guy");
	std::cout << "e: ";
	e.attack("some random guy");

	return(0);
}
