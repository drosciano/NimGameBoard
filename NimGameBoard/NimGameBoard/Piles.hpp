#pragma once
#include<iostream>
using namespace std;

class Piles {
private:
	int rocks;
public:
	Piles() { rocks = 0; };
	Piles(int rock) { rocks = rock; };
	int getRocks() { return rocks; };
	void grabRock(int qty) { rocks = rocks - qty; };
};