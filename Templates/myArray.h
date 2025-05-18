#ifndef MYARRAY_H
#define MYARRAY_H
#include <iostream>
#include <ostream>
using namespace std;

template <class T> class myArray; 
template <class T>
ostream& operator<<(ostream&, const myArray<T>&);
template <class T>
class myArray { 
private:
    T* aPtr;
    int arraySize;
    void subScriptError();

public:
    myArray() 
    {
        arraySize = 3;
        aPtr = new T[arraySize];
    }
    myArray(int, T = 5);
    myArray(const myArray&);
    virtual ~myArray();
    int size() const { return arraySize; }
    T& operator[](const int&);
    void display() const;
    friend ostream& operator<< <T>(ostream&, const myArray<T>&);
    myArray<T>& operator= (const myArray<T>&);
};
template <class T>
myArray<T>& myArray<T>:: operator=(const myArray<T> & rhs)
{
    if (this == &rhs)
    {
        return *this;
    }
    else if(aPtr != nullptr)
    {
        delete []aPtr;
        aPtr = nullptr;
    }
    arraySize = rhs.arraySize;
    aPtr = new T[rhs.arraySize];
    for (int i = 0; i < arraySize; i++)
    {
        aPtr[i] = rhs.aPtr[i];
    }
    return *this;
            
}
template <class T>
ostream& operator<<(ostream &cout, const myArray<T>& rhs)
{
    cout << "Insertion operator" << endl;
    for (int i = 0; i < rhs.arraySize; i++)
    {
        cout << rhs.aPtr[i] << " ";
    }
    cout << endl;
    return cout;
}

template <class T>
void myArray<T> :: subScriptError()
{
    cout << "Error invalid input" <<endl;
    exit(0);
}

template <class T>
myArray<T> :: myArray(int a , T init)
{
    arraySize = a;
    aPtr = new T [arraySize]();
    for (int i = 0; i < arraySize; i++)
    {
        aPtr[i] = init;
    }
    
}

template <class T>
myArray<T> :: myArray(const myArray& orig)
{
  this->arraySize = orig.arraySize;
  this->aPtr = new T[orig.arraySize]; 
  for (int i = 0; i < arraySize; i++)
  {
    this->aPtr[i] = orig.aPtr[i];
  }
}

template <class T>
myArray<T> :: ~myArray()
{
    if (aPtr != nullptr)
    {
        delete [] aPtr;
        aPtr = nullptr;
    }
}

template <class T>
T & myArray<T>:: operator[](const int& rhs)
{
    if (rhs < 0 || rhs >= arraySize)
    {
        subScriptError();
    }   
   return aPtr[rhs];   
}
template <class T>
void myArray<T>:: display() const
{
    for (int i = 0; i < arraySize; i++)
    {
        cout <<aPtr[i] << " " ;
    }
    cout <<endl;
} 
#endif
