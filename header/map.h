#ifndef MAP_H_INCLUDED
#define MAP_H_INCLUDED

class GameApplication;
class Cell;

class Map{
public:
    Map(int width, int height);
    Map(int width, int height, GameApplication& game);
    void setGame(GameApplication& game);
    int getWidth();
    int getHeight();
    Cell& getCell(int x, int y);
    void setCell(Cell& value, int x, int y);
};

#endif // MAP_H_INCLUDED
