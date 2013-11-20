#include"stdafx.h"
#include"Figure.h"
#include<iostream>
MyChess::Queen::Queen(int x):Figure(x)
{
	this->SetType(QUEEN);
}
bool MyChess::Queen::Move(int x1,int y1,vector<Cell> &board)
{
	
	return false;
}