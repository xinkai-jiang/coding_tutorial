#include <string>
#include <iostream>

class person
{
private:
  std::string _name;
  int _age;

public:
  person(/* args */);
  person(std::string name, int age);
  void show();
  ~person();
};

person::person()
{
  _name = "No Name";
  _age = 0;
  std::cout << "Undifined Person" << std::endl;
}

person::person(std::string name, int age):
_name(name),
_age(age)
{
  std::cout << "Difined Person " << _name << std::endl;
}

void person::show()
{
  std::cout << "Person " << _name << std::endl;
}

person::~person()
{
}
