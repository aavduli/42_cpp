/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aavduli <aavduli@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/13 13:13:44 by aavduli           #+#    #+#             */
/*   Updated: 2025/01/21 14:24:53 by aavduli          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& _name)
	: name(_name), HP(10), EP(10), AD(0) {
	std::cout << "ClapTrap's constructor was called. " << name << " has: " <<  "HP: " << HP << " EP: " << EP
	<< " AD: " << AD << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) 
	: name(other.name), HP(other.HP), EP(other.EP), AD(other.AD) {
		std::cout << "Copy constructor was called for ClapTrap." << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &rhs) {
	std::cout << "Copy assignement operator called." << std::endl;
	if (this != &rhs) {
		this->name = rhs.name;
		this->HP = rhs.HP;
		this->EP = rhs.EP;
		this->AD = rhs.AD;
	}
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap's destructor was called" << std::endl;
}

void ClapTrap::setHP(int _HP) {
	this->HP = _HP;
}

int ClapTrap::getHP() const{
	return this->HP;
}

void ClapTrap::setEP(int _EP) {
	this->EP = _EP;
}

int ClapTrap::getEP() const {
	return this->EP;
}

void ClapTrap::setAD(int _AD) {
	this->AD = _AD;
}

int ClapTrap::getAD() const {
	return this->AD;
}

void ClapTrap::setName(const std::string& _name) {
	this->name = _name;
}

std::string ClapTrap::getName() const {
	return this->name;
}

void	ClapTrap::attack(const std::string& target) {
	if (this->EP == 0) {
		std::cout << name << " can't attack because he is out of energy point." << std::endl;
		return ;
	}
	if (this->HP == 0) {
		std::cout << name << " can't attack because he is out of HP." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << name << " attack " << target << ", causing " << AD << " point of dommage." 
		<< std::endl;
	this-> EP -= 1;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (HP == 0)
		std::cout << "ClapTrap: " << name << " is already at 0 HP and cannot take more damage." << std::endl;
	if (amount >= HP) {
		HP = 0;
		std::cout << "ClapTrap: " << name << " has taken " << amount << "damage and now is destroyed" << std::endl;
	}
	else {
		HP -= amount;
		std::cout << "ClapTrap: " << name << " has taken " << amount << " damage and have " << HP << " HP left" << std::endl;
	}
	return ;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (HP == 0) {
		std::cout << name << " can not be repaired because he is out of HP." << std::endl;
		return ;
	}
	if (EP == 0) {
		std::cout << name << " can not be repaired because he is out of EP." << std::endl;
		return ;
	}
	else {
		EP -= 1;
		HP += amount;
		if (HP > 10)
			HP = 10;
		std::cout << name << " has been repaired and regained " << amount << " HP back and now is at: " << HP << " HP." << std::endl;
	}
	return ;
}
