/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbrunet <gbrunet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 09:40:48 by gbrunet           #+#    #+#             */
/*   Updated: 2024/02/22 08:41:29 by gbrunet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(): name("default"), _hit(10), _energy(10), _attack(0) {
	std::cout << "ClapTrap: Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), _hit(10), _energy(10), _attack(0) {
	std::cout << "ClapTrap: Default constructor with name " << name << " called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &cpy) {
	std::cout << "ClapTrap: Copy constructor for " << cpy.name << " called" << std::endl;
	*this = cpy;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap: Destructor for " << this->name << " called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
	std::cout << "ClapTrap: Copy assignment operator for " << rhs.name << " called" << std::endl;
	this->name = rhs.name;
	this->_hit = rhs._hit;
	this->_energy = rhs._energy;
	this->_attack = rhs._attack;
	return (*this);
}

void	ClapTrap::attack(const std::string &target) {
	if (this->_energy > 0 && this->_hit > 0)
	{
		this->_energy--;
		std::cout << "\e[0;36mClapTrap " << this->name << " attacks " << target
			<< ", causing " << this->_attack << " points of damage!\e[0m" << std::endl;
	}
	else if (this->_energy == 0 && this->_hit == 0)
		std::cout << "\e[0;33mClapTrap " << this->name << " can't attacks " << target
			<< ", it's health and energy are too low (" << this->_hit
			<< " hit point; " << this->_energy << " energy point)\e[0m" << std::endl;
	else if (this->_energy > 0)
		std::cout << "\e[0;33mClapTrap " << this->name << " can't attacks " << target
			<< ", it's health is too low (" << this->_hit << " hit point)\e[0m" << std::endl;
	else
		std::cout << "\e[0;33mClapTrap " << this->name << " can't attacks " << target
			<< ", it's energy is too low (" << this->_energy << " energy point)\e[0m" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hit < amount)
		this->_hit = 0;
	else
		this->_hit -= amount;
	std::cout << "\e[0;31mClapTrap " << this->name << " tooks " << amount << " points of damage!"
			<< " Remaining hit points: " << this->_hit << "\e[0m" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energy > 0 && this->_hit > 0)
	{
		this->_energy--;
		this->_hit += amount;
		std::cout << "\e[0;35mClapTrap " << this->name << " repair itself (" << amount
			<< "), new hit points: " << this->_hit << "\e[0m" << std::endl;
	}
	else if (this->_energy == 0 && this->_hit == 0)
		std::cout << "\e[0;33mClapTrap " << this->name << " can't repair itself"
			<< ", it's health and energy are too low (" << this->_hit
			<< " hit point; " << this->_energy << " energy point)\e[0m" << std::endl;
	else if (this->_energy > 0)
		std::cout << "\e[0;33mClapTrap " << this->name << " can't repair itself"
			<< ", it's health is too low (" << this->_hit << " hit point)\e[0m" << std::endl;
	else
		std::cout << "\e[0;33mClapTrap " << this->name << " can't repair itself"
			<< ", it's energy is too low (" << this->_energy << " energy point)\e[0m" << std::endl;	
}
