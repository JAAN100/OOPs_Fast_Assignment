#include <iostream>
#include <fstream>
#include <map>
using namespace std;
class NumberAssemble
{
private:
   static int count;
   int n;
   int * ptr;
   map<int , int>myMap;
    void setDynamically(int n)
    {
        ptr = new int[n];
    }
    void inputFile(ifstream & fin)
    {
        for (int i = 0; i < n; i++)
        {
            fin >> ptr[i];
            myMap[ptr[i]]++;   
        }    
    }
public:
    NumberAssemble()
    {
        count = 1;
        n = 0;
        ptr = nullptr;
    }
    void fileSet(ifstream & fin)
    {
        fin >>n;
        setDynamically(n);
        inputFile(fin); 
    }
    void showInputFile()
    {
        cout << "Input Array " << count <<endl;
        for (int i = 0; i < n; i++)
        {
            cout << ptr [i] << " ";
        }
            cout << endl;
    }
    void showSortedArray() 
    {
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
    }
    void showDistinctElement()
    {
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
    }
    void showUnion()
    {
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
    }
~NumberAssemble()
{
    if (ptr != nullptr)
    {
        delete[]ptr;
        ptr = nullptr;
    }
    
}
};
int NumberAssemble :: count;
int main()
{
   ifstream fin;
   fin.open("Input.txt");
   if (!fin)
   {
    cout  << "Error" <<endl;
   }
   
   while (fin.peek() != EOF)
   {
    static NumberAssemble N;
    N.fileSet(fin);
    N.showInputFile();
    N.showSortedArray();
    N.showDistinctElement();
    N.showUnion();
   }
   fin.close();
    return 0;
}