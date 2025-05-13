#include <istream>
#include "myArray.h"
using namespace std; 
// void myArray :: subScriptError()
// {
//     cout << "Error invalid input" <<endl;
//     exit(0);
// }
// myArray :: myArray(int a)
// {
//     arraySize = a;
//     aPtr = new T [arraySize];
// }
// myArray :: myArray(const myArray& orig)
// {
//   this->arraySize = orig.arraySize;
//   this->aPtr = new int[orig.arraySize]; 
//   for (int i = 0; i < arraySize; i++)
//   {
//     this->aPtr[i] = orig.aPtr[i];
//   }
// }
// myArray :: ~myArray()
// {
//     if (aPtr != nullptr)
//     {
//         delete [] aPtr;
//         aPtr = nullptr;
//     }
// }
// int & myArray :: operator[](const int& rhs)
// {
//     if (rhs < 0 || rhs >= arraySize)
//     {
//         subScriptError();
//     }   
//    return aPtr[rhs];   
// }