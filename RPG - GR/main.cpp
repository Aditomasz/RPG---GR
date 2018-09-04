#include <iostream>
#include <string>
#include <Windows.h>

#include "player.h" // Nasz biblioteka gracza


player mainPlayer("Kadisz"); // Inicjalizacja objektu player, argumentem jest jego nick (mozna zrobic tez pusta inicjalizacje).

int plyrHp = 0; // Dla testu, inicjalizujemy HP dla objektu mainPlayer

int main() {
	std::cout << "Player name: " << mainPlayer.getPlayerName() << std::endl; // Wyswietlamy nick naszego gracza(objektu).
	std::cout << "Enter amount of HP for " << mainPlayer.getPlayerName() << " : "; // Wyswietlamy nick i prosimy o ilosc jego hp.
	std::cin >> plyrHp; // Bierzemy jego hp
	mainPlayer.setPlayerHp(plyrHp); // Ustawiamy hp dla gracza(objektu), robimy to zawsze poprzez taka komende nie poprzez np. player.hp = 25
	std::cout << "Player " << mainPlayer.getPlayerName() << " has " << mainPlayer.getPlayerHp() << " hp!" << std::endl; // Wysietlamy nick gracza(objektu) i jego hp.
	system("pause"); // Pausujemy zeby okienko konsoli nie zpier... od razu.
	return 0; // Program dziala
}