#include "passwordlineedit.h"

#include <KLineEdit>

PasswordLineEdit::PasswordLineEdit(QGraphicsWidget *parent) :
    LineEdit(parent)
{
    nativeWidget()->setEchoMode(QLineEdit::Password);
}
