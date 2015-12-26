#ifndef RESOURCES_H_INCLUDED
#define RESOURCES_H_INCLUDED

#include <string>
/**
    @brief 代表一个游戏资源管理器.
    所有的游戏资源（对话，文字，地图显示及提示信息等）都可以从该管理器中获得。
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
        @return 一个代表控制台输出颜色的整数.
        这包括前景色、背景色以及特殊格式。
    */
    int getColor(const std::string& resourceName);
private:

};

#endif // RESOURCES_H_INCLUDED
