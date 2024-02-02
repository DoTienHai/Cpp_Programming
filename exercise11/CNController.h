#ifndef CN_CONTROLLER_H
#define CN_CONTROLLER_H
#include "ComplexNumber.h"
#include "CNView.h"

class CNController
{
private:
    /* data */
    ComplexNumber z;
    CNView view;

public:
    CNController(/* args */){};
    CNController(const double &real, const double &img) : z(real, img){};
    ~CNController(){};

    ComplexNumber sumWith(ComplexNumber z);
    ComplexNumber subWith(ComplexNumber z);
    ComplexNumber multiWith(ComplexNumber z);
};

#endif // !CN_CONTROLLER_H
