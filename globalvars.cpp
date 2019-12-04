#include "globalvars.h"

QQueue<QString> GlobalVars::g_msgQueue;
QQueue<Imagemsg> GlobalVars::g_imageQueue;

UserInfoMap GlobalVars::g_userInfoMap;
DeskInfoMap GlobalVars::g_deskInfoMap;
MenuInfoMap GlobalVars::g_menuInfoMap;

UserInfoList *GlobalVars::g_userInfoList = new UserInfoList;
DeskInfoList *GlobalVars::g_deskInfoList = new DeskInfoList;
MenuInfoList *GlobalVars::g_menuInfoList = new MenuInfoList;
OrderInfoList *GlobalVars::g_orderInfoList = new OrderInfoList;

