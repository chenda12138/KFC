#ifndef GLOBALVARS_H
#define GLOBALVARS_H


#include <QQueue>

#include "userinfo.h"
#include "deskinfo.h"
#include "menuinfo.h"
#include "orderinfo.h"
#include "billinfo.h"
#include "imagemsg.h"

enum Oper_Data{
    Oper_None,
    Oper_Add,
    Oper_Del,
    Oper_Mdy
};

enum RESPONSE{
    RES_Down = '!',
    RES_Fail = '?'
};

enum COMMAND{

    ///通用请求命令
    CMD_UserLogin_A = 'A',          //用户登录
    CMD_DeskInfo_B = 'B',           //桌子信息
    CMD_UserExit_E = 'E',           //用户退出
    CMD_MenuInfo_M = 'M',           //菜单信息
    CMD_ClerkOrderDishes_F = 'F',   //点菜
    CMD_ClerkSettleAccounts_G = 'G', //结账
    CMD_DeskAndMenuInfo_H = 'H',      //桌子菜单信息
    CMD_ClerkAskOrder_I = 'I',   //请求订单信息
    CMD_ChefAddMenu_J= 'J',       //添加菜品
    CMD_ChefModiMenu_K= 'K',       //修改菜品
    CMD_MenuImage_N= 'N',          //请求菜单图片
};

enum MsgType{
    MsgType_Text = 0,
    MsgType_Image,
    MsgType_Audio,
    MsgType_Video,
    MsgType_File
};

class GlobalVars
{
public:
    static QQueue<QString> g_msgQueue; //消息队列
    static QQueue<Imagemsg> g_imageQueue; //图片消息队列

    static UserInfoMap g_userInfoMap;
    static UserInfoList *g_userInfoList;

    static DeskInfoMap g_deskInfoMap;
    static DeskInfoList *g_deskInfoList;

    static MenuInfoMap g_menuInfoMap;
    static MenuInfoList *g_menuInfoList;

    ////////订单变量//////////
    static OrderInfoList *g_orderInfoList;
};

#endif // GLOBALVARS_H
