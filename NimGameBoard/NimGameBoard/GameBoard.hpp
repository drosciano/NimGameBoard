#pragma once
#include"Piles.hpp"
#include<iostream>
#include<string>
#include<sstream>
#include<vector>

using namespace std;

class GameBoard {
private:
	//how many piles
	 int piles;
	//how many stones
	 int rocksPerPile;

	 string seed;

	 vector<Piles>Board;



public:
	GameBoard();
	GameBoard(int pile, int rocksPerPile);
	void printSeed() { cout << seed << endl; };
	void printBoard(string board);
	int getPiles() { return piles; };
	int getRocksInPile(int pileNum);
	void grabRocksFromPile(int rockNum, int pileNum);
};