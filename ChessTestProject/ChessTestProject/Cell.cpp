#include"stdafx.h"
#include"Figure.h"
#include<iostream>
void MyChess::Cell::SetFigure(MyChess::Figure *f)
{
	this->f=f;
	f->SetPozition(this->x,this->y);
}
  MyChess::Cell::Cell()
{
}
 MyChess::Cell::~Cell()
{

}
 MyChess::Cell::Cell(int x,int y)
{
	this->x=x;
	this->y=y;
	this->f=NULL;
}
void   MyChess::Cell::Move(Cell &c,vector<Cell> &v)
{
	if(this->f->Move(c.x,c.y,v))
	{
		c.SetFigure(f);
		this->f=NULL;
	}

}
