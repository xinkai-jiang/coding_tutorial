#include <include/string.h>
#include <cstring>

namespace simple
{

string::string(const char* cstr)
{
    if (cstr) {
        m_data = new char[strlen(cstr)+1];
        strcpy(m_data, cstr);
    }else{
        m_data = new char[1];
        *m_data = '\0';
    }
}

string::string(const string& str)
{
    m_data = new char[strlen(str.m_data)+1];
    strcpy(m_data, str.m_data);
}

inline string& string::operator=(const string& str)
{   
    if (this == &str){
        return *this;}
    delete[] m_data;
    m_data = new char[strlen(str.m_data)+1];
    strcpy(m_data, str.m_data);
    return *this;
}

string::~string()
{
    delete[] m_data;
}

std::ostream& operator<<(std::ostream& os, const string& str)
{
    return os << str.get_c_str();
}


}