#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "loginform.h"
#include "userform.h"
#include "msgserver.h"
#include "execsql.h"
#include "globalvars.h"

class LoginForm;
class UserForm;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public slots:
    void slotUserLogin(QString id, QString pswd);

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_actionUserMS_triggered();

private:
    Ui::MainWindow *ui;
    LoginForm *m_loginForm;
    UserForm *m_userForm;

    MsgServer *m_msgServer;
};

#endif // MAINWINDOW_H
