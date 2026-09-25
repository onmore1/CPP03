#include "FragTrap.hpp"

int main()
{
	FragTrap bot1("Trevor");
	FragTrap bot2;
	ScavTrap bot3;
	ClapTrap bot4;
	bot1.attack("enemy");
	bot2.attack("enemy");
	bot1.highFivesGuys();
	std::cout << "------\n";
	bot3.guardGate();
	std::cout << "------\n";
	bot4.beRepaired(1);
	std::cout << "------\n";
	return (0);
}		