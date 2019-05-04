﻿#pragma once
#include <vector>
#include<conio.h>
#include<Windows.h>
#include <iostream>

using namespace std;
class HintBoard
{
public:
	// constructor
	//HintBoard();
	HintBoard(int cursorX = 130, int cursorY = 2, int sizeX = 28, int sizeY = 48); // this is bigger one position
	//HintBoard(int cursorX, int cursorY, int sizeX, int sizeY);
	~HintBoard();

	// member function
	void printBoard();
	
	// when change order(black: 0/red: 1), call this
	void printHint1(int order);
	// when choose a chess, call this
	void printHint2(int order, int chessIndex);
	// when gameFinish, call this
	void printHint3(int order);
private:
	// data member
	vector<int> cursor;
	vector<int> size;
	vector<int> lowerBoardCursor;
	vector<int> lowerBoardSize;
	int order;
	//helper function
	void printLowerBoard();
};

