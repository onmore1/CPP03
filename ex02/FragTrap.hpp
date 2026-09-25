#include "ScavTrap.hpp"
#pragma once

class FragTrap: public ClapTrap
{
	private:

	public:
		FragTrap();
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &src);
		FragTrap &operator=(const FragTrap &src);
		~FragTrap();
		//
		void attack(const std::string &target);
		void highFivesGuys(void);
};