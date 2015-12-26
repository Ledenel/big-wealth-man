#ifndef RESOURCES_H_INCLUDED
#define RESOURCES_H_INCLUDED

#include <string>
/**
    所有的游戏资源（对话，文字，地图显示及提示信息等）都可以从该管理器中获得。\n
    通过指定的资源名来获取文本及颜色资源。\n
    资源名使用.来分隔，以唯一标识资源。\n
    例如：\n
    "player.A.name" 代表A玩家的名称.\n
    "player.panel" 代表玩家的信息面板.\n
    "cell.bank.display" 代表游戏地图上的银行的显示样式.\n
    "cell.bank.view" 代表银行的操作界面.\n
    @brief 代表一个游戏资源管理器.\n
    @author
*/
class Resource{
public:
    /**
        @brief 将资源加载至Resource对象中。
        @author
    */
    void load();
    /**
        @brief 获取具有指定资源名的文本。
        @param resourceName 要获取的资源名。
        @return 资源名所代表的文本。
    */
    const std::string& getString(const std::string& resourceName);
    /**
        @brief 获取为指定资源所设置的控制台颜色。
        @param resourceName 要获取的资源名。
        @return 一个代表控制台输出颜色的整数.\n
        这包括前景色、背景色以及特殊格式。
    */
    int getColor(const std::string& resourceName);
private:

};

/**
    可输出调试用的信息，并切换调试信息的输出模式。\n
    例如，要检查TestCase中的某段代码是否能够运行，则可以在代码中加入如下语句：\n
    Logger.log("TestCase","Something done.");\n
    然后通过观察日志输出来确认代码是否成功运行。
    @brief 代表调试用的日志，将调试信息与游戏界面字符分离。
*/
class Logger{
public:
    /**
        @brief 记录日志。
        @param from 日志信息的来源。
        @param message 要记录的日志信息。
        @author
    */
    static void log(const std::string& from,const std::string& message);
    /**
        @brief 记录日志。
        @param from 日志信息的来源。
        @param message 要记录的日志信息。
        @author
    */
    static void log(const char *from,const char *message);
    /**
        @brief 将日志的输出模式改变为控制台输出。
        @author
    */
    static void toConsole();
    /**
        @brief 将日志的输出模式改变为向日志文件输出。
        @author
    */
    static void toFile();
    /**
        @brief 禁用日志输出（log方法将不产生任何信息。）
        @author
    */
    static void disabled();
private:
    static std::ostream& out;
};

#endif // RESOURCES_H_INCLUDED
