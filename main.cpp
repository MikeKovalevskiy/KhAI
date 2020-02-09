#include <QApplication>
#include <QPushButton>
#include <QLabel>
 
int main(int argc, char *argv[ ]) 
{
    QApplication app(argc, argv);
 
    QLabel *label = new QLabel("<h2 style='color: green'>Hello, World! Life is great!</h2>");
    label->show();
 
    return app.exec();
}
