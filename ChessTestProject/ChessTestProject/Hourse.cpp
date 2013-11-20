#include"stdafx.h"
#include"Figure.h"
#include<iostream>
MyChess::Hourse::Hourse(int x):Figure(x)
{
	this->SetType(HOURSE);
}
bool MyChess::Hourse::Move(int x1,int y1,vector<Cell> &board)
{
	
	return false;
}