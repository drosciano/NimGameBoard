#include "GameBoard.hpp"

GameBoard::GameBoard()
{
	piles = 3;
	seed = "3010203";
}

GameBoard::GameBoard(string s)
{

	piles = int(s[0] - '0');

	for (int i = 1; i <= piles * 2; i += 2) {
		char t1 = s[i];
		char t2 = s[i + 1];
		int rocksPerPile = (int(t1) - '0') * 10 + int(t2) - '0';
			Piles temp(rocksPerPile);
			Board.push_back(temp);
	}

	seed = s;
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

void GameBoard::grabRocksFromPile(int rockNum, int pileNum)
{
	Board.at(pileNum - 1).grabRock(rockNum);
}

