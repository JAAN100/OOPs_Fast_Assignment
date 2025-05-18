#include <iostream>
using namespace std;
int fictorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else if (n > 0)
    { 
        cout << n << endl;
        int temp = fictorial(n -1);
        int result = temp*n;
        return result;
    }  

}
void printMessage(int n)
{
    if(n > 0)
    {
        printMessage(n - 1);
        cout << "Hello world \n";
    }

}
int main()
{
    int n = 5;
    // cout << fictorial(n);
    printMessage(n);
    return 0;
}