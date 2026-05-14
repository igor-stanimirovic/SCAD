#include "mainwindow.h"

MainWindow::MainWindow()
{
    resize(m_initialWidth, m_initialHeight);
    setWindowTitle("SCAD");
    setMinimumSize(m_minWidth, m_minHeight);
}