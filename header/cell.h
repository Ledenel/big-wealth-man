#ifndef CELL_H_INCLUDED
#define CELL_H_INCLUDED

#include <string>
class Player;
class GameApplication;

class Cell{
public:
    Cell();
    Cell(GameApplication &game);
    void setGame(GameApplication &game);
    virtual void passBy(Player& player);
    virtual const std::string& getResourceName() const;
    int getX() const;
    int getY() const;
    void setX(int value);
    void setY(int value);
private:
protected:
    int x;
    int y;
};

class Bank : public Cell{
public:
    void passBy(Player& player) override;
    const std::string& getResourceName() const override;
private:

};

#endif // CELL_H_INCLUDED
