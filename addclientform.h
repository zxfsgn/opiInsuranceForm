#ifndef ADDCLIENTFORM_H
#define ADDCLIENTFORM_H

#include <QGroupBox>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QRadioButton>
#include <QSpinBox>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QWidget>

class AddClientForm : public QWidget {
  Q_OBJECT
 public:
  explicit AddClientForm(QWidget* parent = nullptr);

 signals:
 private:
  QLineEdit* name;
  QLineEdit* surname;
  QLineEdit* patronymic;
  QLineEdit* phoneNumber;
  QTextEdit* property;
  QGroupBox* insuranceOptions;
  QSpinBox* maximumAmount;
  QPushButton* addPhotoBtn;
  QPushButton* saveBtn;
};

#endif  // ADDCLIENTFORM_H
