/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 09:40:48 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/12 18:19:56 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(std::string name): ClapTrap(name) {
	std::cout << "ScavTrap: Default constructor called" << std::endl;
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
	this->gate_keeper_mode = false;
}

ScavTrap::ScavTrap(const ScavTrap &cpy): ClapTrap(cpy) {
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
	*this = cpy;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap: Destructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
	std::cout << "ScavTrap: Copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->name = rhs.name;
	this->_hit = rhs._hit;
	this->_energy = rhs._energy;
	this->_attack = rhs._attack;
	this->gate_keeper_mode = false;
	return (*this);
}

void	ScavTrap::attack(const std::string &target) {
	if (this->_energy > 0 && this->_hit > 0)
	{
		this->_energy--;
		std::cout << "\e[0;36mScavTrap " << this->name << " attacks " << target
			<< ", causing " << this->_attack << " points of damage!\e[0m" << std::endl;
	}
	else if (this->_energy == 0 && this->_hit == 0)
		std::cout << "\e[0;33mScavTrap " << this->name << " can't attacks " << target
			<< ", it's health and energy are too low (" << this->_hit
			<< " hit point; " << this->_energy << " energy point)\e[0m" << std::endl;
	else if (this->_energy > 0)
		std::cout << "\e[0;33mScavTrap " << this->name << " can't attacks " << target
			<< ", it's health is too low (" << this->_hit << " hit point)\e[0m" << std::endl;
	else
		std::cout << "\e[0;33mScavTrap " << this->name << " can't attacks " << target
			<< ", it's energy is too low (" << this->_energy << " energy point)\e[0m" << std::endl;
}

void	ScavTrap::guardGate(void) {
	if (this->_energy > 0 && this->_hit > 0 && !this->gate_keeper_mode)
	{
		this->_energy--;
		this->gate_keeper_mode = true;
		std::cout << "\e[0;36mScavTrap " << this->name << " is now in gate keeper mode\e[0m" << std::endl;
	}
	else if (this->_energy > 0 && this->_hit > 0 && this->gate_keeper_mode)
		std::cout << "\e[0;36mScavTrap " << this->name << " is already in gate keeper mode\e[0m" << std::endl;
	else if (this->_energy == 0 && this->_hit == 0)
		std::cout << "\e[0;33mScavTrap " << this->name << " can't switch to gate keeper mode"
			<< ", it's health and energy are too low (" << this->_hit
			<< " hit point; " << this->_energy << " energy point)\e[0m" << std::endl;
	else if (this->_energy > 0)
		std::cout << "\e[0;33mClapTrap " << this->name << " can't switch to gate keeper mode"
			<< ", it's health is too low (" << this->_hit << " hit point)\e[0m" << std::endl;
	else
		std::cout << "\e[0;33mClapTrap " << this->name << " can't switch to gate keeper mode"
			<< ", it's energy is too low (" << this->_energy << " energy point)\e[0m" << std::endl;
}
