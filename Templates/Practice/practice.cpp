#include <iostream>
#include <cstdlib>
#include <cstring>
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
bool  isEven(int n)
{
    if (n == 0)
    {
        return true;
    }
    else if (n == 1)
    {
        return false;
    }
    isEven(n - 2);
}

int numberCount(int n)
{
    if (n > 0  && n <= 9)  
    {
        return 0;
    }
    else
    {
        int temp = numberCount(n / 10) % 10; 
        cout << n <<" "; 
        return  temp +n;  
    }
    
}
void decimalToBinary(int n)
{
    if (n > 1)
    {
        decimalToBinary(n / 2);
        cout << n % 2;
    }
    else if(n % 2 == 1)
    {
        cout << 1;
    }   
    else if (n % 2 == 0)
    {
        cout << 0;
    }
    

}
int largest(int arr[], int size)
{
    if (size == 0)
    {
        return arr[size];
    }
    int val = largest(arr , size -1);
    if (val > arr[size])
    {
        return val;
    }
    else
    {
        return arr[size];
    }   
}
int Serach(int arr[] , int size , int key)
{
    if (size < 0)
    {
        return 0;
    }
    int count = Serach(arr ,size - 1 , key);
    if (arr[size] == key)
    {
        return count++;
    }
    
}
void TOH(int n , char sourceTower , char destination , char temp)
{
    if (n == 1)
    {
         cout << "Move disk " << n << " from " << sourceTower << " to  " << destination <<endl;
    }
    else
    {
        TOH(n -1 , sourceTower , temp , destination);
        cout << "Move disk " << n << " from " << sourceTower << " to  " << destination <<endl;
        TOH(n -1 , temp ,destination , sourceTower);
    }     
}
bool palindrom(const char str[] , int start , int end)
{
    if (start == end)
    {
        return true;
    }
    if (str[start] != str[end])
    {
        return false;
    }
    else
    {
        return (str , start + 1 , end - 1);
    }
       
}
int myAtoi(const char * str, int n)
{
    if (n == 1)
    {
        return str[0] - '0';
    }
    else
    {
        int temp =  myAtoi(str , n - 1);
        int num = str[n - 1] - '0';
        return temp * 10 +num;
    }
    

}
void displayArray(int arr[], int size)
{
    if (size >= 0)
    {
        displayArray(arr , size - 1);
        cout << arr[size] <<" ";
    }    
}
void binaryString (int n , int * arr , int index)
{
    if (index == n)
    {  
        displayArray(arr ,  n - 1);
        cout << endl;
     }
    else 
    {
        arr[index] = 0;
        binaryString(n , arr , index + 1);
        arr[index] = 1;
        binaryString(n , arr , index + 1);
   }
}
int coinChange(int coin[] , int numCoins , int amount)
{
    if (amount == 0)
    {
        return 1;
    }
    else if (numCoins <= 0 || amount < 0)
    {
        return 0;
    }
    else
    {
        int temp1 = coinChange(coin , numCoins , amount - coin[numCoins]);
        int temp2 = coinChange(coin , numCoins - 1 , amount);
        return temp1 + temp2;
    }   
}
int main()
{
    const int n = 3;
    int arr[n] = {1 ,2 ,3};
    //binaryString(n , arr , 0);  
    cout << coinChange(arr , n , 4);
    //delete []arr;
    //arr = nullptr;
    // const char * str = "123341223";
    //cout << myAtoi(str , strlen(str));
    //cout << palindrom ("bob" , 0 ,2);
    //TOH(3 , 'A' , 'C' , 'B');
    // char a = 'A';
    // char b ='B';
    // char c = 'C';
    // int n =3;
    // while (n > 0)
    // {
    //     cout << "Move disk " << n << "from " << a << " to " << c <<endl;
                                                                                                        
    // }
   //   int arr[5] = {1 , 1 , 2 ,4 , 3};
    //  cout << Serach(arr , 4 , 1);
    
     // int arr1[3] = {12 ,2 ,-21};
    // displayArray(arr , 4);
    // cout << endl;
    // displayArray(arr1 , 2);
    // int n = -5678;
    // cout << isEven(abs(n));
    // cout << fictorial(n);
    //printMessage(n);
    return 0;
}
