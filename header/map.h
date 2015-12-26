#ifndef MAP_H_INCLUDED
#define MAP_H_INCLUDED

class GameApplication;
class Cell;

class Map{
public:
    Map();
    Map(GameApplication& game);
    void setGame(GameApplication& game);
    Cell& get(int x,int y);
};

#endif // MAP_H_INCLUDED
