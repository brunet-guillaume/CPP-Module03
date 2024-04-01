/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 09:40:48 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/22 08:41:45 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(): ClapTrap() {
	std::cout << "FragTrap: Default constructor called" << std::endl;
	this->_hit = 100;
	this->_energy = 100;
	this->_attack = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name) {
	std::cout << "FragTrap: Default constructor with name " << name << " called" << std::endl;
	this->_hit = 100;
	this->_energy = 100;
	this->_attack = 30;
}

FragTrap::FragTrap(const FragTrap &cpy): ClapTrap(cpy) {
	std::cout << "FragTrap: Copy constructor for " << cpy.name << " called" << std::endl;
	*this = cpy;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap: Destructor for " << this->name << " called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs) {
	std::cout << "FragTrap: Copy assignment operator for " << rhs.name << " called" << std::endl;
	this->name = rhs.name;
	this->_hit = rhs._hit;
	this->_energy = rhs._energy;
	this->_attack = rhs._attack;
	return (*this);
}

void	FragTrap::attack(const std::string &target) {
	if (this->_energy > 0 && this->_hit > 0)
	{
		this->_energy--;
		std::cout << "\e[0;36mFragTrap " << this->name << " attacks " << target
			<< ", causing " << this->_attack << " points of damage!\e[0m" << std::endl;
	}
	else if (this->_energy == 0 && this->_hit == 0)
		std::cout << "\e[0;33mFragTrap " << this->name << " can't attacks " << target
			<< ", it's health and energy are too low (" << this->_hit
			<< " hit point; " << this->_energy << " energy point)\e[0m" << std::endl;
	else if (this->_energy > 0)
		std::cout << "\e[0;33mFragTrap " << this->name << " can't attacks " << target
			<< ", it's health is too low (" << this->_hit << " hit point)\e[0m" << std::endl;
	else
		std::cout << "\e[0;33mFragTrap " << this->name << " can't attacks " << target
			<< ", it's energy is too low (" << this->_energy << " energy point)\e[0m" << std::endl;
}

void	FragTrap::highFivesGuys(void) {
	if (this->_energy > 0 && this->_hit > 0)
	{
		this->_energy--;
		std::cout << "\e[0;36mFragTrap " << this->name << " ask for a cool high fives\e[0m" << std::endl;
	}
	else if (this->_energy == 0 && this->_hit == 0)
		std::cout << "\e[0;33mFragTrap " << this->name << " can't ask for a cool high fives"
			<< ", it's health and energy are too low (" << this->_hit
			<< " hit point; " << this->_energy << " energy point)\e[0m" << std::endl;
	else if (this->_energy > 0)
		std::cout << "\e[0;33mFragTrap " << this->name << " can't ask for a cool high fives"
			<< ", it's health is too low (" << this->_hit << " hit point)\e[0m" << std::endl;
	else
		std::cout << "\e[0;33mFragTrap " << this->name << " can't ask for a cool hgh fives"
			<< ", it's energy is too low (" << this->_energy << " energy point)\e[0m" << std::endl;
}
