#include"stdafx.h"
#include<iostream>
#include"Figure.h"
#include"stdafx.h"
#include<iostream>
MyChess::King::King(int x):Figure(x)
{
	this->SetType(KING);
}
MyChess::King::~King()
{
}
bool MyChess::King::Move(int x1,int y1,vector<Cell> &board)
{
	return true;
}