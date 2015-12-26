#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

class GameApplication;

class Player{
public:
    Player();
    Player(GameApplication& game);
    void setGame(GameApplication& game);
    int getX() const;
    int getY() const;
        /**
        @brief 获取当前还能够走的步数。
        @return 当前能够走的步数.\n
        如果当前玩家无法行动，则返回0.
    */
    void setSteps(int value);
    /**
        @brief 获取当前还能够走的步数。
        @return 当前能够走的步数.\n
        如果当前玩家无法行动，则返回0.
    */
    int getSteps() const;

    int getSkipRound() const;
    /**
        @brief 设置玩家应当跳过的回合数.
        @param value 玩家应当跳过的回合数.\n
        当这个值为0时，表明玩家无需跳过回合.
    */
    void setSkipRound(int value);
    int setX(int value);
    int setY(int value);
    //void MoveUp
};

#endif // PLAYER_H_INCLUDED
