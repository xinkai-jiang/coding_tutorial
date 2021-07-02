#include <vector>
#include "person.h"

int main(){

  // ==============================================================
  // 1. Record the number from 1 to 10, and caculate their sum
  // ==============================================================
  // Firstly, to record this array, you have to define a vector.
  // the difference between array and vector is that the capacity of
  // array should be specified before using it, but you don't need
  // to do that in vector because their capacity is dynamic.
  // --------------------------------------------------------------

  // We set a vector.
  std::vector<int> int_v;

  // load number from 1 to 10
  for (int i = 0; i < 10; i++)
  {
    // the function push_back is put a value in the end of vector
    int_v.push_back(i + 1);
  }
  
  int result = 0;  
  // caculate the sum of them.
  // You can walk through the vector by index,
  // that is making index from 0 to 9
  // function .size() means solve the size of current vector
  for (int i = 0; i < int_v.size(); i++)
  {
    result += int_v[i];
  }
  std::cout << "The result is " << result << std::endl;

  result = 0;
  // or using like this
  for (auto item : int_v)
  {
    result += item; 
  }
    std::cout << "The result is " << result << std::endl;
  

  // ==============================================================
  // 2. Use the class as elements of vector
  // ==============================================================
  // You can also use the class you created as the elements of vector
  // but the regular way of it is using pointers rather value for saving memory.
  // --------------------------------------------------------------

  std::vector<person*> person_ptr_v;
  for (int i = 0; i < 10; i++)
  {
    // Using the fuction std::to_string() to transform digital to string
    std::string name = std::to_string(i);
    // allocate the memory to store person
    person* person_ptr = new person(name, i);
    // push it
    person_ptr_v.push_back(person_ptr);
  }
  
  // Finally, we check every member of this vector
  for (auto item : person_ptr_v)
  {
    item->show();
  }
  
}