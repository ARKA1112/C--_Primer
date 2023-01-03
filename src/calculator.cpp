#include <QApplication>
#include <QHBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QWidget>

class Calculator : public QWidget {
  Q_OBJECT

 public:
  Calculator(QWidget* parent = nullptr);

 private slots:
  void buttonClicked();

 private:
  QLineEdit* display_;
  QPushButton* buttons_[4][5];
};

Calculator::Calculator(QWidget* parent) : QWidget(parent) {
  display_ = new QLineEdit("0");
  display_->setReadOnly(true);
  display_->setAlignment(Qt::AlignRight);

  // Create the buttons
  const char* buttons[4][5] = {
      {"7", "8", "9", "/", "C"}, {"4", "5", "6", "*", "("},
      {"1", "2", "3", "-", ")"}, {"0", ".", "=", "+", ""}};

  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 5; ++j) {
      QString text = buttons[i][j];
      if (text == "") {
        buttons_[i][j] = nullptr;
      } else {
        buttons_[i][j] = new QPushButton(text);
      }
    }
  }

  // Create the layout
  QVBoxLayout* mainLayout = new QVBoxLayout;
  mainLayout->addWidget(display_);

  QHBoxLayout* layout[5];
  for (int i = 0; i < 5; ++i) {
    layout[i] = new QHBoxLayout;
    for (int j = 0; j < 4; ++j) {
      if (buttons_[j][i]) {
        layout[i]->addWidget(buttons_[j][i]);
      }
    }
    mainLayout->addLayout(layout[i]);
  }

  setLayout(mainLayout);

  // Connect the buttons to the calculator's slots
  for (int i = 0; i < 4; ++i) {
    for (int j = 0; j < 5; ++j) {
      if (buttons_[i][j]) {
        connect(buttons_[i][j], &QPushButton::clicked, this, &Calculator::buttonClicked);
      }
    }
  }
}

void Calculator::buttonClicked() {
  QPushButton* button = static_cast<QPushButton*>(sender());
  QString buttonText = button->text();

  if (buttonText == "C") {
    // Clear the display
    display_->setText("0");
  } else if (buttonText == "=") {
    // Calculate the result
    double
