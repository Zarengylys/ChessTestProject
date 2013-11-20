// ChessTestProject.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Figure.h"
#include<iostream>
using namespace std;
using namespace MyChess;

void main()
{ 
	Collecthion *c=new Collecthion(1);
	Board *b=new Board(*c);
	Figure* f=new Pawn(1);
	
	b->board[1].Move(b->board[2],b->board);
	cin.get();
	cin.get();
	
}

