#include "CNController.h"

ComplexNumber CNController::sumWith(ComplexNumber z)
{
    ComplexNumber ret = ComplexNumber(this->z.getReal() + z.getReal(), this->z.getImg() + z.getImg());
    view.Display(ret);
    return ret;
}
ComplexNumber CNController::subWith(ComplexNumber z)
{
    ComplexNumber ret = ComplexNumber(this->z.getReal() - z.getReal(), this->z.getImg() - z.getImg());
    view.Display(ret);
    return ret;
}
ComplexNumber CNController::multiWith(ComplexNumber z)
{
    ComplexNumber ret;
    ret.setImg(this->z.getReal() * z.getImg() + z.getReal() * this->z.getImg());
    ret.setReal(this->z.getReal() * z.getReal() - this->z.getImg() * z.getImg());
    view.Display(ret);
    return ret;
}