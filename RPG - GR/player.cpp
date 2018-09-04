#include "player.h"


player::player(std::string initName)
{
	player::playerName = initName;
}

void player::setPlayerName(std::string pName) {
	player::playerName = pName;
}

void player::setPlayerHp(int pHp) {
	player::playerHp = pHp;
}

std::string player::getPlayerName() {
	return player::playerName;
}

int player::getPlayerHp() {
	return player::playerHp;
}
