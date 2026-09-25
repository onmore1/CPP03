#include "ClapTrap.hpp"
#pragma once

class ScavTrap: public ClapTrap{
	private:
		bool	isGatekeeping;
	public:
		ScavTrap();
		ScavTrap(const std::string &name);
		ScavTrap(const ScavTrap &src);
		ScavTrap &operator=(const ScavTrap &src);
		~ScavTrap();
		//
		void attack(const std::string &target);
		void guardGate();
};