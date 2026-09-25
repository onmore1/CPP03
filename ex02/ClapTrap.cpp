#include "ClapTrap.hpp"
ClapTrap::ClapTrap(): _name("no name"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap constructor for " << _name << " called" << "\n";
}

ClapTrap::ClapTrap(const std::string &name): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	if (name.empty() || name.size() == 0)
		_name = "no name";
	std::cout << "ClapTrap constructor with name " << _name << " was called" << "\n";
}	

ClapTrap::ClapTrap(const ClapTrap &src)
{ 
	std::cout << "ClapTrap copy constructor for " << src._name << " called" << "\n";
	*this = src;
}
ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "Assigning " << this->_name << " to " << src._name << "\n"; 
	this->_name = src._name;
	this->_attackDamage = src._attackDamage;
	this->_name = src._name;
	this->_energyPoints = src._energyPoints;
	this->_hitPoints = src._hitPoints;
	return *this;
}
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destructor called" << "\n";
}

void ClapTrap::attack(const std::string& target)
{
	if (!this->_hitPoints)
	{
		std::cout << this->_name << " is dead\n";
		return;
	}
	if (!this->_energyPoints)
	{
		std::cout << "not enough energy points to attack!\n";
		return;
	}	
	std::cout << "ClapTrap named " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int _dmgAmount)
{
	if (this->_hitPoints <= _dmgAmount)
		this->_hitPoints = 0;
	else
	this->_hitPoints -= _dmgAmount;
	std::cout << this->_name << " takes " << _dmgAmount << " amount of damage!\n";
}

void ClapTrap::beRepaired(unsigned int _healAmount)
{
	if (!this->_hitPoints)
	{
		std::cout << this->_name << " is dead\n";
		return;
	}
	if (!this->_energyPoints)
	{
		std::cout << "not enough energy points to repair!\n";
		return;
	}	
			std::cout << "Clap Trap named " << this->_name << " is reparing himself!\n";
	this->_hitPoints += _healAmount;
	this->_energyPoints--;
}

