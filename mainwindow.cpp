#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    m_loginForm = new LoginForm(ui->widget);
    m_userForm = new UserForm(ui->widget);

    connect(m_loginForm, SIGNAL(signalUserLogin(QString,QString)),
            this, SLOT(slotUserLogin(QString,QString)));

    m_loginForm->show();
    m_userForm->hide();

    ui->mainToolBar->hide();
    ui->menuBar->hide();
    ui->statusBar->hide();
    this->setContextMenuPolicy(Qt::NoContextMenu); //去掉工具栏的右键菜单
    this->setCentralWidget(ui->widget);

    m_msgServer = new MsgServer;

}

MainWindow::~MainWindow()
{
    delete m_msgServer;
    delete ui;
}

void MainWindow::slotUserLogin(QString id, QString pswd)
{
    ExecSQL::searchAllUserInfos();

    if(GlobalVars::g_userInfoMap.contains(id))
    {
        UserInfoList::iterator it = GlobalVars::g_userInfoMap[id];
        if(it->getPswd() == pswd)
        {
            ui->mainToolBar->show();
            on_actionUserMS_triggered();
        }else
        {
            m_loginForm->userLoginFail();
        }
    }
}

void MainWindow::on_actionUserMS_triggered()
{
    m_loginForm->hide();
    m_userForm->show();
}
