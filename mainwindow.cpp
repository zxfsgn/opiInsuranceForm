#include "mainwindow.h"

MainWindow::MainWindow(QWidget* parent) : QMainWindow(parent) {
  addClientForm = new AddClientForm();
  setCentralWidget(addClientForm);
}

MainWindow::~MainWindow() {}
