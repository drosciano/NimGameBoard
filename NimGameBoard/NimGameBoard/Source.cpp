#include "GameBoard.hpp"


int main() {
	GameBoard Nim(3, 14);

	Nim.printBoardString();

	for (int i = 1; i <= Nim.getPiles(); i++) {
		cout << "Pile: " << i << " has " << Nim.getRocksInPile(i) << " rocks" << endl;
	}
	Nim.grabRocksFromPile(4, 3);
	for (int i = 1; i <= 3; i++) {
		cout << "Pile: " << i << " has " << Nim.getRocksInPile(i) << " rocks" << endl;
	}

}
