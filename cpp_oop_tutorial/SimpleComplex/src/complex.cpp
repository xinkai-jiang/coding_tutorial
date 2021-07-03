#include <SimpleComplex/include/complex.h>

complex& __doapl(complex* ths, const complex& r)
{
    ths->re += r.re;
    ths->im += r.im;
    return *ths;
}


inline complex& complex::operator += (const complex& r)
{
    return __doapl(this, r);
}

inline complex operator + (const complex& x, const complex& y)
{
    return complex(x.real() + y.real(), x.imag() + y.imag());
}

inline complex operator + (const complex& x, double y)
{
    return complex(x.real() + y, x.imag());
}

inline complex operator + (double x, const complex& y)
{
    return complex(x + y.real(), y.imag());
}

inline complex operator - (const complex& x, const complex& y)
{
    return complex(x.real() - y.real(), x.imag() - y.imag());
}

inline complex operator - (const complex& x, double y)
{
    return complex(x.real() - y, x.imag());
}

inline complex operator - (double x, const complex& y)
{
    return complex(x - y.real(), y.imag());
}

std::ostream& operator << (std::ostream& os, const complex& x)
{
    return os << '(' << x.real() << ',' << x.imag() << ')';
}
