#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->isGatekeeping = false;
	std::cout << "ScavTrap constructor for " << _name << " called\n";
}

ScavTrap::ScavTrap(const std::string &name): ClapTrap(name)
{
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	this->isGatekeeping = false;
	std::cout << "ScavTrap constructor with name " << _name << " was called\n";
}

ScavTrap::ScavTrap(const ScavTrap &src): ClapTrap(src), isGatekeeping(src.isGatekeeping)
{
	std::cout << "ScavTrap copy constructor for " << this->_name << " called\n";
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "Assigning " << this->_name << " to " << src._name << "\n";
	this->_attackDamage = src._attackDamage;
	this->isGatekeeping = src.isGatekeeping;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_name = src._name;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " destructor called\n";
}

void ScavTrap::attack(const std::string &target)
{
	if (!this->_hitPoints)
	{
		std::cout << "ScavTrap named " << this->_name << " is dead\n";
		return;
	}
	if (!this->_energyPoints)
	{
		std::cout << "ScavTrap named " << this->_name << " can not attack, not enough energy points!\n";
		return;
	}
	std::cout << "ScavTrap named " << this->_name
	<< " attacks " << target << " causing " << this->_attackDamage << " points of damage!\n";
	this->_energyPoints--;
}

void ScavTrap::guardGate()
{
	if (!this->isGatekeeping)
	{
		std::cout << "ScavTrap named " << this->_name << " is now gate keeping\n";
		this->isGatekeeping = true;
	}
	else
		std::cout << "ScavTrap named " << this->_name << " is already gate keeping\n";
}
