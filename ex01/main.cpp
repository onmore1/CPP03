#include "ScavTrap.hpp"

int main()
{
	ScavTrap bot1("Trevor");
	ScavTrap bot2;
	bot1.attack("enemy");
	bot2.attack("enemy");
	bot1.guardGate();
	bot1.guardGate();
	bot1.beRepaired(1);
	bot1.takeDamage(1);
	return (0);
}		