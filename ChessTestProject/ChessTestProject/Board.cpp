#include"stdafx.h"
#include<iostream>
#include"Figure.h"
 MyChess::Board::Board(MyChess::Collecthion first)
{
	for(int i=1;i<9;i++)
	for(int j=1;j<9;j++)
	{
		Cell *c=new Cell(i,j);
		this->board.push_back(*c);
	}
	if(first.type==1)
	{
		for(int i=1;i<9;i++)
			{
				int x=8*(i-1)+1;
				Figure *f;
				this->board[x].SetFigure(first.f[i-1]);
			}
		this->board[0].SetFigure(first.f[8]);
		this->board[56].SetFigure(first.f[9]);
		this->board[8].SetFigure(first.f[10]);
		this->board[48].SetFigure(first.f[11]);
		this->board[16].SetFigure(first.f[12]);
		this->board[40].SetFigure(first.f[13]);
		this->board[24].SetFigure(first.f[14]);
		this->board[32].SetFigure(first.f[15]);
			

	}

}