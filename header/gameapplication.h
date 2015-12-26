#ifndef GAMEAPPLICATION_H_INCLUDED
#define GAMEAPPLICATION_H_INCLUDED

class Player;
class Map;

/**
    游戏进程管理所有游戏中的对象（地图、玩家等），\n
    并赋予玩家控制权、负责给玩家和地图发送消息等。\n
    @brief 代表一个游戏进程.\n
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
        这将使得游戏主循环开始运行；
        这包括赋予玩家控制权、负责给玩家和地图发送消息。\n
        若没有加载资源，则游戏不会运行（无任何效果）。
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
        结束当前玩家的回合，并将操作权转移给下一名玩家。
        @brief 结束当前回合.
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
    /**
        @brief 获取游戏中使用的地图。
        @return 地图对象。
        @see Map
    */
    Map& getMap();
private:

};
/**
    @brief 代表界面绘制器。
*/
class Painter{
public:
    /**
        @brief 通过指定的界面数据打印至控制台。
    */
    static void paint(const char * data);
    /**
        可以在其中设置格式，并插入相应的数据。
        @brief 通过指定的界面数据打印至控制台。
    */
    static void paintFormat(const char * data,...);
};

#endif // GAMEAPPLICATION_H_INCLUDED
