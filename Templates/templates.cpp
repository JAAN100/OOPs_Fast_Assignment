#include <iostream>
#include <cstring>
#include "myArray.h"
using namespace std;
template <class T>
void getSwap(T & v1 , T & v2)
{
    T temp;
    temp = v1;
    v2 = temp; 
}

    void getSwap(char * v1 , char * v2)
    { 
        char c[100];
        strcpy(c , v1);
        strcpy(v1 , v2);
        strcpy(v2, c);
    }
int main()
{
    // int a1 = 12 , b1 = 24;  
    // char a[] ="abc";
    // char b[] ="ade";
    // char  c[]= "ae";
    // getSwap(a,b);
    // cout << a << " " << b;
    // cout << "\nAfter a and b" <<endl;
    // getSwap(a1 ,b1);
    // cout << a1 << "  " << b1 <<endl;
    myArray<int> a(12 , 2);
    myArray<int> b(5);
    myArray <myArray<int>> table(5 , a);
    cout  << table;
    table [0][0] = 100;
    cout << table;
    //a[2] = 50;
//     b = a;
//     cout << b;
//    cout << a;    
    return 0;
}

