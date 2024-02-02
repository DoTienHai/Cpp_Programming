#include "CNView.h"

void CNView::Display(ComplexNumber z)
{
    cout << z.getReal() << (z.getImg() > 0 ? " + " : " - ") << (z.getImg()<0?-z.getImg():z.getImg()) << "i" << endl;
}