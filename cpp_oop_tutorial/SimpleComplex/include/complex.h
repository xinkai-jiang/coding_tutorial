#ifndef __cOMPLEX__
#define __cOMPLEX__

#include <iostream>

class complex
{
private:
    double re, im;
    friend complex& __doapl (complex*, const complex&);
public:
    complex(double r = 0, double i = 0)
        : re(r), im(i){};
    complex& operator += (const complex&);

    double real() const {return re;};
    double imag() const {return im;};
    ~complex();
};

complex operator + (const complex& x, const complex& y);
complex operator - (const complex& x, const complex& y);

std::ostream& operator << (std::ostream& os, const complex& x);

#endif