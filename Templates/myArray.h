#ifndef MYARRAY_H
#define MYARRAY_H
#include <iostream>
using namespace std;
template <class T>
class myArray
{
private:
   T * aPtr;
   int arraySize;
   void subScriptError();
public:
    myArray(int);
    myArray(const myArray&);
    ~myArray();
    int size ()const{ return arraySize;}
    T &operator[](const int&);
    
void myArray :: subScriptError()
{
    cout << "Error invalid input" <<endl;
    exit(0);
}
myArray :: myArray(int a)
{
    arraySize = a;
    aPtr = new T [arraySize];
}
myArray :: myArray(const myArray& orig)
{
  this->arraySize = orig.arraySize;
  this->aPtr = new int[orig.arraySize]; 
  for (int i = 0; i < arraySize; i++)
  {
    this->aPtr[i] = orig.aPtr[i];
  }
}
myArray :: ~myArray()
{
    if (aPtr != nullptr)
    {
        delete [] aPtr;
        aPtr = nullptr;
    }
}
T & myArray :: operator[](const int& rhs)
{
    if (rhs < 0 || rhs >= arraySize)
    {
        subScriptError();
    }   
   return aPtr[rhs];   
}
};
#endif