#include <iostream>
using namespace std;
void inputArray (int * , int);

int main() 
{
    int num;
    cout << "Enter the elements\n";
    cin >> num;
    int* arr = nullptr;
    arr = new int[num];
    inputArray(arr, num);
    return 0;
}

void inputArray(int* arr, int num)
{
    for (int i = 0; i < num; i++)
    {
        cout << "Enter the " << i + 1 << " number :  ";
        cin >> arr[num];
    }   

}
