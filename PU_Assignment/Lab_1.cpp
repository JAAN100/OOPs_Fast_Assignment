#include <iostream>
using namespace std;
class Array
{
private:
    int * date;
    int size; 
    bool isValidIndex(int index)const;
public:
    Array(int = 0 , int * = nullptr );
    Array(const Array & ref);
    int & getSet(int index);
    const int & getSet(int index)const;
    int getCapacity()const;
    ~Array();
    void reSize(int newCap);
};
bool Array::isValidIndex(int index) const
{
    if (index >= size)
    {
        return false;
    }
    else
    {
        return true;
    }
}
Array ::Array(int S, int * D)
{
    size = S;
    if (D != nullptr)
    {    
    date =  new int[size];
    for (size_t i = 0; i < size; i++)
    {
        date[i] = D[i];
    }
} 
}
Array ::Array(const Array & ref)
{
    size = ref.size;
    date = new int[size];
    for (int i = 0; i < size; i++)
    {
        date[i] = ref.date[i];
    }
}
int & Array:: getSet(int index)
{
    if (!(isValidIndex(index)))
    {       
        reSize(index + 1);
        return date[index];
    }
    else if (index < 0)
    {
        exit(0);
    }
    else
    {
        return date[index];
    }
    
}
const int & Array :: getSet(int index)const
{
    return date[index];
}
int Array :: getCapacity()const
{
    return size;
}
Array :: ~Array()
{
    if (date != nullptr)
    {
        delete[] date;
        date = nullptr;
    }
}
void Array:: reSize(int newCap)
{
    int * newDate = new int[newCap]();
    if (date != nullptr)
    {    
    for (int i = 0; i < size; i++)
    {
        newDate[i] = date[i];
    }
    delete[] date;
    date = nullptr;
    }
    date = new int [newCap]();
    size = newCap;
    for (int i = 0; i < size; i++)
    {
        int n = newDate[i];
        date[i] = n;
    }
    delete [] newDate;
    newDate = nullptr;
    
}
int main()
{
    const int n =6;
    int arr[n] ={5 ,1 , 2, 3, 4, 5};
    Array a;
    cout << a.getCapacity() << endl;
    a.getSet(0) = 21;
    cout << a.getCapacity() <<endl;
    cout << a.getSet(0) << endl;
    return 0;   
}