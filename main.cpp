#include <iostream>
using namespace std;



int main() {

    int arraySize = 0;
   cout<<"Enter array size: "<<endl;
   cin>> arraySize;

   int* myArray = new int[arraySize];

   for(int i=0; i<arraySize; i++)
   {
     myArray[i]=0;

     cout<<"My array "<<i<<" : "<<myArray[i]<<endl;

   }

   delete[] myArray;
    return 0;
}

