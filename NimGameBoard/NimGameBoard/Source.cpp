#include "GameBoard.hpp"


int main() {
	GameBoard Nim("50513070915");

	Nim.printSeed();

	for (int i = 1; i <= Nim.getPiles(); i++) {
		cout << "Pile: " << i << " has " << Nim.getRocksInPile(i) << " rocks" << endl;
	}
	Nim.grabRocksFromPile(4, 3);
	for (int i = 1; i <= Nim.getPiles(); i++) {
		cout << "Pile: " << i << " has " << Nim.getRocksInPile(i) << " rocks" << endl;
	}

}
