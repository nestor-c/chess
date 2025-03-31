#include Pawn.hpp

class Board
{
private:
    enum File { A = 0,B,C,D,E,F,G,H};
    
    int grid[8][8] = {};
    Pawn gamePawns[8];
    
public:
    Board();
    ~Board();
};

Board::Board()
{
}

Board::~Board()
{
}
