#ifndef GAMEAPPLICATION_H_INCLUDED
#define GAMEAPPLICATION_H_INCLUDED

/**
    @brief ����һ����Ϸ����.
    ��Ϸ���̹���������Ϸ�еĶ��󣨵�ͼ����ҵȣ���
    ��������ҿ���Ȩ���������Һ͵�ͼ������Ϣ�ȡ�
    @author
    @see Player
    @see Map
    @see Resource
*/
class GameApplication{
public:
    /**
        @brief ������Ϸ����Ҫ����Դ����ʹ�õĶ���
        @author
        @see Resource
    */
    void load();
    /**
        @brief ������Ϸ��
        @author
        @see Resource
    */
    void run();
    /**
        @brief ʹ��Ϸ������������ʤ���ж���
        @author
        @see Player
    */
    void gameover();
private:

};

#endif // GAMEAPPLICATION_H_INCLUDED
