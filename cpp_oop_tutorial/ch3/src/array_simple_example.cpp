#include <array>
#include <iostream>

int main()
{
  // array is just non-dynamic vector and you have to specify the size of
  // this array, the other usage is really similar with vector
  std::array<float, 10> a;
  std::cout << "The size of initial array is " << a.size() << std::endl;
  std::cout << "The max size of initial array is " << a.max_size() << std::endl;
  
  // you'd better put the item into the array by index
  for (int i = 0; i < 10; i++)
  {
    a[i] = i + 1;
  }
  std::cout << "The size of this array is " << a.size() << std::endl;
  std::cout << "The max size of this array is " << a.max_size() << std::endl;
}