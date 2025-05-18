#include "addclientform.h"

AddClientForm::AddClientForm(QWidget* parent) : QWidget{parent} {
  name = new QLineEdit();
  name->setPlaceholderText("Имя");
  surname = new QLineEdit();
  surname->setPlaceholderText("Фамилия");
  patronymic = new QLineEdit();
  patronymic->setPlaceholderText("Отчество");
  phoneNumber = new QLineEdit();
  phoneNumber->setPlaceholderText("Телефон");
  property = new QTextEdit();
  property->setPlaceholderText("Описание имущества...");
  insuranceOptions = new QGroupBox("Вариант страхования");
  auto optionsLayout = new QHBoxLayout(insuranceOptions);
  optionsLayout->addWidget(new QRadioButton("Базовый"));
  optionsLayout->addWidget(new QRadioButton("Полный"));
  optionsLayout->addWidget(new QRadioButton("Расширенный"));
  auto maximumAmountLabel = new QLabel("Предельная сумма");
  maximumAmount = new QSpinBox();
  addPhotoBtn = new QPushButton("Добавить фото");
  saveBtn = new QPushButton("Сохранить");
  auto mainLayout = new QVBoxLayout(this);
  mainLayout->addWidget(name);
  mainLayout->addWidget(surname);
  mainLayout->addWidget(patronymic);
  mainLayout->addWidget(phoneNumber);
  mainLayout->addWidget(property);
  mainLayout->addWidget(insuranceOptions);
  mainLayout->addWidget(maximumAmountLabel);
  mainLayout->addWidget(maximumAmount);
  mainLayout->addWidget(addPhotoBtn);
  mainLayout->addWidget(saveBtn);
}
