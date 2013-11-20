#include"stdafx.h"
#include<iostream>
#include"Figure.h"
MyChess::Collecthion::Collecthion(int type)
{
	this->type=type;
	for(int i=0;i<8;i++)
		this->f[i]=new Pawn(type);
	this->f[8]=new Rook(type);
	this->f[9]=new Rook(type);
	this->f[10]=new Hourse(type);
	this->f[11]=new Hourse(type);
	this->f[12]=new Officer(type);
	this->f[13]=new Officer(type);
	this->f[14]=new Queen(type);
	this->f[15]=new King(type);
}
MyChess::Collecthion::~Collecthion()
{
}
