#include "ComplexNumber.h"

double ComplexNumber::getReal() const
{
    return real;
}
double ComplexNumber::getImg() const
{
    return img;
}

void ComplexNumber::setReal(const double &real)
{
    this->real = real;
}
void ComplexNumber::setImg(const double &img)
{
    this->img = img;
}
