#pragma once

#include "ChessEnum.h"

#include<iostream>
#include<vector>
using namespace std;

namespace MyChess
{

class Cell;	
class Figure
{
	
public:
	friend Cell;
	int GetGamer();
	virtual bool Move(int x1,int y1,vector<Cell> &board)=0;
	void SetType(Chess type);
	void SetPozition(int x,int y);
	Figure(int x);
	int GetX();
	int GetY();

	~Figure();
private:
	int x;
	int y;
	int gamer;
	Chess type;
};

class Pawn:public Figure
{
public:
	bool Move(int x1,int y1,vector<Cell> &board);
	Pawn(int x);
	~Pawn();
	
};
class Rook:public Figure
{
public:
	Rook(int x);
	~Rook();
	bool Move(int x1,int y1,vector<Cell> &board);

};
class Hourse:public Figure
{
public:
	Hourse(int x);
	~Hourse();
	bool Move(int x1,int y1,vector<Cell> &board);


};
class Officer:public Figure
{
public:
	Officer(int x);
	~Officer();
	bool Move(int x1,int y1,vector<Cell> &board);

};
class Queen:public Figure
{
public:
	Queen(int x);
	~Queen();
	bool Move(int x1,int y1,vector<Cell> &board);

	
};
class King:public Figure
{
public:
	King(int x);
	~King();
	bool Move(int x1,int y1,vector<Cell>&board);
	bool Step(int x,int y)
	{

	}

};
class Collecthion
{
public:
	Collecthion(int type);
	~Collecthion();

	public:
	
	Figure *f[16];
	int type;
};

	class Cell
{
	
public:
	void Move(Cell &c,vector<Cell> &v);
	Cell(int x,int y);
	Cell(void);
	~Cell(void);
	void SetFigure(Figure *f);
	Figure *f;
private:

	//расположение на доске
	int x;
	int y;
};
	class Board
{
public:
	
	Board(Collecthion first);
	~Board();
	vector<Cell> board;

};
}



