#include "DiamondTrap.hpp"

int main()
{
		DiamondTrap juju("Juju");
		DiamondTrap bobby("Bobby");
		DiamondTrap juju_clone(juju);
		DiamondTrap dude;
		std::cout << "------------------\n";
		juju.whoAmI();
		juju.attack("some super random dude");
		bobby.whoAmI();
		bobby.attack("Chadd-clone");
		juju_clone.whoAmI();
		dude.whoAmI();
}		