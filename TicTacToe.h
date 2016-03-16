#pragma once
#include<iostream>
#include<string>

using namespace std;

class TicTacToe
{

private: 
	char board[3][3];

public:
	TicTacToe();
	~TicTacToe();
	void reset(int , int);
	void print();
	bool move(int x, int y, char  currentPlayer);
	int isWon();

};

