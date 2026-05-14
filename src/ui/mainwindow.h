#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qlabel.h>

class MainWindow : public QMainWindow
{
public:
    MainWindow();
private:
    int m_initialWidth{1080};
    int m_initialHeight{720};
    int m_minWidth{ 800 };
    int m_minHeight{ 600 };
    
};


#endif