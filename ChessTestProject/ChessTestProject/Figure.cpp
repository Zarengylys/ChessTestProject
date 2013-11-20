#include "StdAfx.h"
#include "Figure.h"
MyChess::Figure::Figure(int x)
{
	if((x!=1)&&(x!=2))
		cout<<"ERRROR";
	else
		this->gamer=x;
}
MyChess::Figure::~Figure()
{
}
void MyChess::Figure::SetType(Chess type)
{
	this->type=type;
}
int MyChess::Figure::GetGamer()
{
	return this->gamer;
}
void MyChess::Figure::SetPozition(int x,int y)
{
	this->x=x;
	this->y=y;
}
int MyChess::Figure::GetX()
{
	return this->x;
}
int MyChess::Figure::GetY()
{
	return this->y;
}