#include"stdafx.h"
#include"Figure.h"
#include<iostream>
MyChess::Rook::Rook(int x):Figure(x)
{
	this->SetType(ROOK);
}
bool MyChess::Rook::Move(int x1,int y1,vector<Cell> &board)
{
	
	return false;
}
