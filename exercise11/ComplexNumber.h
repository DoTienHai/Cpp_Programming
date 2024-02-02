#ifndef COMPLEX_NUMBER_H
#define COMPLEX_NUMBER_H
#include <iostream>
using namespace std;

class ComplexNumber
{
private:
    /* data */
    double real;
    double img;

public:
    ComplexNumber(/* args */){};
    ComplexNumber(const double &real, const double &img) : real(real), img(img){};
    ComplexNumber(ComplexNumber& z){
        real = z.getReal();
        img = z.getImg();
    }
    ~ComplexNumber(){};

    double getReal() const;
    double getImg() const;

    void setReal(const double &real);
    void setImg(const double &img);
};

#endif // !COMPLEX_NUMBER_H
