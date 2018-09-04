#pragma once
#include <string>

class player
{
public:
	player(std::string);

	void setPlayerName(std::string);
	void setPlayerHp(int);

	std::string getPlayerName();
	int getPlayerHp();

private:
	std::string playerName;
	int playerHp;
};

