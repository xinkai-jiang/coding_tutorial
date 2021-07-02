#include <map>
#include <iostream>

int main()
{
  // persume that we creat a map for name and age
  // set the alias for string and age
  typedef std::string name;
  typedef int age;

  // creat a new map, fisrt one is key, the second one is value
  std::map<name, age> map_example;

  // three way of insert a new element to a map
  map_example["Xiao_Hong"] = 23;
  map_example.insert(std::map<name, age>::value_type("Xiao_Ming", 22));
  map_example.insert(std::pair<name, age>("Xiao_Hua", 23));

  // the sample way to iterate a map
  std::cout << "\nUsing a normal way to iterate a map..." << std::endl;
  for (auto item : map_example)
  {
    std::cout << item.first << " : " << item.second << std::endl;
  }

  // use iterator to iterate a map (I recommand last one)
  std::cout << "\nUsing iterator to iterate a map..." << std::endl;  
  std::map<name, age>::iterator item;
  for (item=map_example.begin(); item!=map_example.end(); item++)  
  {  
    std::cout << item->first << " : " << item->second << std::endl;
  }

  // you can use erase function to delete a element by key
  std::cout << "\nErase Xiao_Hong from this map..." << std::endl;
  map_example.erase("Xiao_Hong");
  for (auto item : map_example)
  {
    std::cout << item.first << " : " << item.second << std::endl;
  }
}
