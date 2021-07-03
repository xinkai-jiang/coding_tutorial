
namespace simple
{

class string
{
private:
    char* m_data;


public:
    string(const char* cstr = 0);
    string(const string& str);
    string& operator=(const string& str);
    ~string();

    char* get_c_str() const { return m_data; };

};





}

/* args */