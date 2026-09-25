#pragma once
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap 
{
	private:
		std::string _name;
	public:
		DiamondTrap();
		DiamondTrap(const std::string &name);
		DiamondTrap(const DiamondTrap &copy);
		DiamondTrap &operator=(const DiamondTrap &src);
		virtual ~DiamondTrap();
		//
		void attack(const std::string &target);
		void whoAmI();
};