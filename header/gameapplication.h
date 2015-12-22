#ifndef GAMEAPPLICATION_H_INCLUDED
#define GAMEAPPLICATION_H_INCLUDED

/**
    @brief 代表一个游戏进程.
    游戏进程管理所有游戏中的对象（地图、玩家等），
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
        @see Resource
    */
    void run();
    /**
        @brief 使游戏结束，并进行胜负判定。
        @author
        @see Player
    */
    void gameover();
private:

};

#endif // GAMEAPPLICATION_H_INCLUDED
