#ifndef PLANNIST_H
#define PLANNIST_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class Plannist; }
QT_END_NAMESPACE

class Plannist : public QWidget
{
    Q_OBJECT

public:
    Plannist(QWidget *parent = nullptr);
    ~Plannist();
    //virtual QSize sizeHint() const override;

protected:
    virtual void paintEvent(QPaintEvent *event) override;
    //virtual void openTray(QPaintEvent *) override;

//connect(sidebarHead, isPressed, openSidebar, showOptions);

public slots:
    // void showOptions(QPoint openHead);

private:
    //Ui::Plannist *ui;
};
#endif // PLANNIST_H
