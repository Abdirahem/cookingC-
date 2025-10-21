#include <iostream>
using namespace std;

struct Stash {

  std::string names[3];
  int next = 0;  

  void add(std::string value)
  {
    if(next<3)
    {
      names[next] = value;
      next++;
    }
    else
    {
      std::cout<<"Stash is full\n";
    }
  }

  void show()
  {
    for(int i=0; i<next; i++)
    {
      std::cout<<"Item "<<i<<": "<<names[i]<<std::endl;
    }
  }

};

int main() {

 Stash myStash;

 myStash.add("Mohamed");
 myStash.add("Ahmed");
 myStash.add("Mustafa");
 myStash.add("Sophia");


 myStash.show();

  
    return 0;
}

