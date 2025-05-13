#include <iostream>
#include <cstring>
using namespace std;
template <class T>
void getSwap(T & v1 , T & v2)
{
    T temp;
    temp = v1;
    v1 =v2;
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
    int a1 = 12 , b1 = 24;  
    char a[] ="abc";
    char b[] ="ade";
    char  c[]= "ae";
    getSwap(a,b);
    cout << a << " " << b;
    cout << "\nAfter a and b" <<endl;
    getSwap(a1 ,b1);
    cout << a1 << "  " << b1 <<endl;
    return 0;
}