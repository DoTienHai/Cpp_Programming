#include <iostream>
#include "CNController.h"
#include "CNView.h"

int main()
{

    CNController controller(1.2, -3.4);
    ComplexNumber z(-2.2, -3.4);
    ComplexNumber z1 = z;
    controller.sumWith(ComplexNumber(2.8, -1.7));
    controller.subWith(z);
    controller.multiWith(z);

    return 0;
}