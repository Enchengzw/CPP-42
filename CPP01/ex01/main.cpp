# include "Zombie.hpp"

int main(void)
{
	Zombie *z1= newZombie("PZ");
	delete(z1);
	randomChump("Project Zomboid");
	return(0);
}