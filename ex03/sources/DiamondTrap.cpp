/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 09:40:48 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/22 09:00:19 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(): ClapTrap("default_clap_name") {
	std::cout << "DiamondTrap: Default constructor called" << std::endl;
	this->name = "default";
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 30;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name") {
	std::cout << "DiamondTrap: Default constructor with name " << name << " called" << std::endl;
	this->name = name;
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &cpy): ClapTrap(cpy), ScavTrap(cpy), FragTrap(cpy) {
	std::cout << "DiamondTrap: Copy constructor for " << cpy.name << " called" << std::endl;
	*this = cpy;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap: Destructor for " << this->name << " called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &rhs) {
	std::cout << "DiamondTrap: Copy assignment operator for " << rhs.name << " called" << std::endl;
	this->name = rhs.name;
	this->_hit = rhs._hit;
	this->_energy = rhs._energy;
	this->_attack = rhs._attack;
	return (*this);
}

void	DiamondTrap::whoAmI(void) {
	std::cout << "\e[0;34mMy name is " << this->name << " and the ClapTrap name is " << this->ClapTrap::name << "\e[0m" << std::endl;
}
