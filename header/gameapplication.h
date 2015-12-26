#ifndef GAMEAPPLICATION_H_INCLUDED
#define GAMEAPPLICATION_H_INCLUDED

class Player;
class Map;

/**
    @brief 代表一个游戏进程.\n
    游戏进程管理所有游戏中的对象（地图、玩家等），\n
    并赋予玩家控制权、负责给玩家和地图发送消息等。
    @author
    @see Player
    @see Map
    @see Resource
*/
class GameApplication{
public:
    /**
        @brief 加载游戏所必要的资源和所使用的对象。
        @author
        @see Resource
    */
    void load();
    /**
        @brief 运行游戏。
        @author
    */
    void run();
    /**
        @brief 使游戏结束，并进行胜负判定。
        @author
        @see Player
    */
    void gameover();
    /**
        @brief 获取当前回合的玩家。
        @author
        @return 当前回合的玩家。
        @see Player
    */
    Player& getCurrentPlayer();
    /**
        @brief 结束当前回合.\n
        结束当前玩家的回合，并将操作权转移给下一名玩家。
        @author
        @see Player
    */
    void playerFinish();
    /**
        @brief 将当前玩家的面板及地图绘制到控制台上。
        @author
        @see Map
    */
    void paintUserPanel();
    Map& getMap();
private:

};

#endif // GAMEAPPLICATION_H_INCLUDED
