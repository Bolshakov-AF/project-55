#include <iostream>
#include "socialnetwork.h"

int main(char* ar[], int count)
{
	SocialNetwork sn;

	sn.addnewMan("Oleg");
	sn.addnewMan("Nikita");
	sn.addnewMan("Misha");
	sn.addnewMan("Nastya");
	sn.addnewMan("Vanya");

	sn.delMan("Nastya");
	sn.addnewMan("Zhenya");

	sn.addFriendship("Oleg", "Nikita");
	sn.addFriendship("Nikita", "Misha");
	sn.addFriendship("Misha", "Zhenya");
	sn.addFriendship("Zhenya", "Vanya");

	sn.showThreeHandshakes();

	return 0;

}