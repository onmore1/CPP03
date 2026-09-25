#include "ClapTrap.hpp"

int main()
{
	ClapTrap robotBobby("Bobby");

	robotBobby.attack("Enemy");
	robotBobby.takeDamage(3);
	robotBobby.beRepaired(2);
	std::cout << "----------------------------\n";
	ClapTrap robotJarvis("Chuck");
	robotJarvis.takeDamage(15);
	robotJarvis.attack("Enemy");
	robotJarvis.beRepaired(5);
	std::cout << "----------------------------\n";
	ClapTrap robotNoname;
	for (int i = 0; i < 11; i++)
		robotNoname.attack("Bot");
	std::cout << "----------------------------\n";
		ClapTrap robotDude("Robodude");
	for (int i = 0; i < 11; i++)
		robotDude.takeDamage(1);
	robotDude.attack("someone");
	std::cout << "----------------------------\n";
		return (0);
}		