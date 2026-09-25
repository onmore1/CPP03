#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("no name_clap_trap")
{
	this->_name = "no name";
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = 50;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap constructor for " << _name << " called\n";
}

DiamondTrap::DiamondTrap(const std::string &name) : ClapTrap(name + "_clap_name")
{
	this->_name = name;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = 50;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap constructor with name " << _name << " was called\n";
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy): ClapTrap(copy), ScavTrap(copy), FragTrap(copy), _name(copy._name)
{
	std::cout << "DiamondTrap copy constructor for " << copy._name << " called\n";
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src)
{
	std::cout << "Assigning Diamond Trap " << this->_name << " to Diamond Trap called " << src._name << "\n";
	ScavTrap::operator=(src);
	FragTrap::operator=(src);
	this->_name = src._name;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << _name << " destructor called\n";
}

void DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
}

void 	DiamondTrap::whoAmI()
{
	std::cout << "I am Diamond Trap and my name is " << this->_name
	<< " my second name (clap trap name) is " << ClapTrap::_name << "\n";
}