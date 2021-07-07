#ifndef __RECTANGLE__
#define __RECTANGLE__

#include <include/shape.h>

class rectangle : public shape
{

public:
    rectangle(/* args */);
    ~rectangle();

    virtual void draw() const;

};

rectangle::rectangle(/* args */)
{
    _type = "rectangle";
    createLog();
}

rectangle::~rectangle()
{
    destroyLog();
}

void rectangle::draw() const{
    std::cout << "draw " << _type << std::endl;
}

#endif
