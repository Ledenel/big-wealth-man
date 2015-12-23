#ifndef CELL_H_INCLUDED
#define CELL_H_INCLUDED

#include "player.h"

class Cell{
public:
    virtual void passBy(Player player);
    int getX() const;
    int getY() const;
    int setX(int value) const;
    int setY(int value) const;
private:
protected:
    int x;
    int y;
};

class Bank : public Cell{
public:
    void passBy(Player player) override;
private:

};

#endif // CELL_H_INCLUDED
