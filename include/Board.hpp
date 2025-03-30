#include <string>
#include <utility>

class Board{
    public:
           Board();
    
    protected:
    private:

        struct Space
        {
            Space(std::pair<int,int>coord={0,0},std::string pieceName=""):coordinates(coord){};
            std::pair<int,int> coordinates;
            std::string piece = "";
        };
        Space Gameboard[8][8];
     
};