#include <iostream>
#include <fstream>
#include <map>
using namespace std;
int main()
{
   int n , count = 1;
   int *ptr;
    map<int , int>myMap;
   ifstream fin;
   fin.open("Input.txt");
   while (fin >> n)
   {
    ptr =new int[n];
    for (int i = 0; i < n; i++)
    {
        fin >> ptr[i];
        myMap[ptr[i]]++;   
    }
    cout << "Input Array" << count <<endl;
    for (int i = 0; i < n; i++)
    {
      cout << ptr [i] << " ";
    }
    cout << endl;
    cout << "Sorted Array "<< count << endl;
    for (int i = 0; i < n; i++)
    {
     for (int j = i; j < n; j++)
     {
        if (ptr[i] > ptr[j])
        {
            int swap = ptr[i];
            ptr[i] = ptr[j];
            ptr[j] = swap;
        }
     }  
    }
    for (int i = 0; i < n; i++)
    {
        cout << ptr[i] << " ";
    }
    cout << endl;
    cout << "Distinct Elements in Array " << count <<endl;
    for (int i = 0 ; i < n ; i++)
    {
        int key = ptr[i];
        if (myMap[key] > 0)
        {
            cout <<  ptr[i] << " ";
            myMap[key] = 0;
        }
    }
    cout << endl;
    if (count > 1)
    {
        cout << "Union of both Arrays" <<endl;
        for (auto it = myMap.begin() ; it != myMap.end() ; ++it)
        {
            cout << it->first << " ";
        }
    }
    cout << endl;
    count++;
    delete[]ptr;
    ptr =nullptr;
   }
   fin.close();
    return 0;
}