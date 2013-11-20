#include"stdafx.h"
#include"Figure.h"
#include<iostream>
using namespace std;
MyChess::Pawn::Pawn(int x):Figure(x)
{
	this->SetType(PAWN);

}
bool MyChess::Pawn::Move(int x1,int y1,vector<Cell> &board)
{
	if(board[8*(x1-1)+y1-1].f==NULL)
		{
			if((x1==this->GetX())&&(y1==this->GetY()+1))
				return true;
		}
	else
	{
		if(this->GetGamer()==board[8*(x1-1)+y1-1].f->GetGamer())
		{
		cout<<"Stop";
		return false;
		}
	}
	
	return false;

}