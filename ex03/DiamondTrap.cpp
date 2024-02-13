/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 09:40:48 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/13 11:51:02 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name) {
	std::cout << "DiamondTrap: Default constructor called" << std::endl;
	this->name = name;
	this->_hit = FragTrap::_hit;
	this->_energy = ScavTrap::_energy;
	this->_attack = FragTrap::_attack;
}

DiamondTrap::DiamondTrap(const DiamondTrap &cpy): ClapTrap(cpy), FragTrap(cpy), ScavTrap(cpy) {
	std::cout << "DiamondTrap: Copy constructor called" << std::endl;
	*this = cpy;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap: Destructor called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &rhs) {
	std::cout << "DiamondTrap: Copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->name = rhs.name;
	this->_hit = rhs._hit;
	this->_energy = rhs._energy;
	this->_attack = rhs._attack;
	return (*this);
}

void	DiamondTrap::whoAmI(void) {
	std::cout << this->_hit << "  " << this->_energy << "  " << this->_attack << std::endl;
}
