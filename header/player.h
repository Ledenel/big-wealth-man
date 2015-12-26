#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED

class GameApplication;

class Player{
public:
    Player();
    Player(GameApplication& game);
    void setGame(GameApplication& game);
    double getCash();
    double addCash(double value);
    void setCash(double value);
    double getBankDeposit();
    double addBankDeposit(double value);
    int getX() const;
    int getY() const;
    void setX(int value);
    void setY(int value);
    /**
        @brief 设置当前还能够走的步数。
        @param value 当前能够走的步数.\n
        如果当前玩家无法行动，则应当设置为0.
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
    /**
        @brief 玩家从自己的账户里支付一笔钱.\n
        这包括从现金中支付，若钱不够，则从存款中支付。
        @param amount 要支付的钱数。
        @return 是否支付成功。\n
        若支付失败，则说明玩家已经破产。
    */
    bool payFor(double amount);
    /**
        @brief 玩家开始行动.\n
        包括掷骰子，玩家移动，经过格子的事件处理等。
        @see Cell
    */
    void startRound();
};

#endif // PLAYER_H_INCLUDED
