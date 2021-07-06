#ifndef __SIMPLE_STRING__
#define __SIMPLE_STRING__

#include <iostream>

namespace simple
{

class string
{
private:
    char* m_data;

public:
    string(const char* cstr = NULL);
    string(const string& str);
    string& operator=(const string& str);
    ~string();

    char* get_c_str() const { return m_data; };

};

std::ostream& operator<<(std::ostream&, const string&);

}

#endif