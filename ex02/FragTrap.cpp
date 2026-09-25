#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->_attackDamage = 30;
	this->_energyPoints = 100;
	this->_hitPoints = 100;
	std::cout << "FragTrap constructor for " << _name << " called\n";
}

FragTrap::FragTrap(const std::string &name): ClapTrap(name)
{
	this->_attackDamage = 30;
	this->_energyPoints = 100;
	this->_hitPoints = 100;
	this->_name = name;
	std::cout << "FragTrap constructor with name " << _name << " was called\n";
}

FragTrap::FragTrap(const FragTrap &src): ClapTrap(src)
{
	std::cout << "FragTrap copy constructor for " << this->_name << " called\n";
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	std::cout << "Assigning " << this->_name << " to " << src._name << "\n";
	this->_hitPoints = src._hitPoints;
	this->_attackDamage = src._attackDamage;
	this->_energyPoints = src._energyPoints;
	this->_name = src._name;
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " destructor called\n";
}

void FragTrap::attack(const std::string &target)
{
	if (!this->_hitPoints)
	{
		std::cout << "FragTrap named " << this->_name << " is dead\n";
		return;
	}
	if (!this->_energyPoints)
	{
		std::cout << "FragTrap named " << this->_name << " does not have enough energy to attack!\n";
		return;
	}
	std::cout << "FragTrap named " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!\n";
	this->_energyPoints--;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap named " << this->_name << " is giving away high fives!\n";
}
