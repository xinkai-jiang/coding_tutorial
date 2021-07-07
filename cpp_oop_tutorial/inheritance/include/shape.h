#ifndef __SHAPE__
#define __SHAPE__

#include <iostream>
#include <string>

typedef std::string Msg;

class shape
{
private:
    int ID;

protected:
    Msg _type;

public:
    shape(/* args */);
    virtual ~shape() = 0;
    
    // non-virtual function
    void createLog() const { std::cout << "class " << _type << " is created" << std::endl; };
    void destroyLog() const { std::cout << "class " << _type << " is destroyed" << std::endl; };

    // pure virtual function
    virtual void draw() const = 0;

};

shape::shape(/* args */)
{
    _type = "shape";
    // createLog();
}

shape::~shape()
{
    destroyLog();
}

#endif
