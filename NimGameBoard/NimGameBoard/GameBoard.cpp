#include "GameBoard.hpp"

GameBoard::GameBoard()
{
	piles = 3;
	rocksPerPile = 1;
	seed = "3010203"
}

GameBoard::GameBoard(int pile, int rocks)
{
	piles = pile;
	rocksPerPile = rocks;
	stringstream pileNum;
	pileNum << piles;
	seed = pileNum.str();
	for (int i = 1; i <= rocksPerPile; i++) {
		stringstream iS;
		iS << i;
		if (i < 10) {
			seed = seed.append("0");
			seed = seed.append(iS.str());
		}
		else {
			seed = seed.append(iS.str());
		}
	}

	for (int i = 1; i <= piles; i++) {
		Piles temp(rocksPerPile);
		Board.push_back(temp);
	}
	
}

void GameBoard::printBoard(string board)
{
	
	for (int i = 1; i < int(board[0] - '0'); i++) {
		stringstream iS;
		iS << i;

	}
}

int GameBoard::getRocksInPile(int pileNum)
{
	return Board.at(pileNum - 1).getRocks();
}

void GameBoard::grabRocksFromPile(int pileNum, int rockNum)
{
	Board.at(pileNum - 1).grabRock(rockNum);
}

