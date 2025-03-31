#include <iostream>
#include <string>
#include <utility>

class Piece{
    public:
        Piece(name);
        std::string GetName();
	std::string GetColor();
	std::pair<int,int> GetCurrentPosition();
	std::pair<int,int> GetValidMoves();

    private:
        std::string m_name;
	std::string m_color;
	std::pair<int,int> m_currentPosition();
};
