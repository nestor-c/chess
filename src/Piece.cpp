#include "../include/Piece.hpp"

Piece::Piece(name):m_Name(name){};

std::string Piece::GetName(){
	return m_name;
};

std::string Piece::GetColor(){
	return m_color;
};

std::pair<int,int> Piece::GetCurrentPosition(){
	return m_currentPosition;
};

std::pair<int,int> Piece::GetValidMoves(){};
