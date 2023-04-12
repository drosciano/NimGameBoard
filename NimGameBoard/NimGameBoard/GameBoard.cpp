#include "GameBoard.hpp"

GameBoard::GameBoard()
{
	piles = 3;
	seed = "3010203";
}

GameBoard::GameBoard(string s)
{
	if (int(s[0] - '0' >= 3) && (s[0] - '0' <= 9)) {
		piles = int(s[0] - '0');
	}
	else {
		if (int(s[0] - '0' < 3)) {
			throw std::domain_error("Not enough Piles \n");
		}
		else {
			throw std::domain_error("Too many Piles \n");
		}
	}

	for (int i = 1; i <= piles * 2; i += 2) {
		char t1 = s[i];
		char t2 = s[i + 1];
		int rocksPerPile = (int(t1) - '0') * 10 + int(t2) - '0';
		if ((rocksPerPile > 0) && (rocksPerPile < 21)) {
			Piles temp(rocksPerPile);
			Board.push_back(temp);
		}
		else {
			if (int(rocksPerPile < 1)) {
				throw std::domain_error("Not enough rocks \n");
			}
			else {
				throw std::domain_error("Too many rocks \n");
			}
		}
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

bool GameBoard::validMove(string s) {
	bool result = false;
	if ((this->getPiles() >= int(s[0] - '0')) && (int(s[0] - '0') >= 3)) {
		char t1 = s[1];
		char t2 = s[2];
		int rocksInPile = (int(t1) - '0') * 10 + int(t2) - '0';
		if (rocksInPile <= this->getRocksInPile(int(s[0] - '0')) && rocksInPile > 0) {
			result = true;
		}
	}
	return result;
}
