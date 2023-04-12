#pragma once
#include"Piles.hpp"
#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<stdexcept>

using namespace std;

class GameBoard {
private:
	 int piles;
	 string seed;
	 vector<Piles>Board;

public:
	GameBoard();
	GameBoard(string s);
	void printSeed() { cout << seed << endl; };
	void printBoard(string board);
	int getPiles() { return piles; };
	int getRocksInPile(int pileNum);
	void grabRocksFromPile(int rockNum, int pileNum);
	bool validMove(string s);
};