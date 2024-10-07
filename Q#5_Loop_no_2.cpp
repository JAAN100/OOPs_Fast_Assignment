#include <iostream> 
using namespace std; 
int main()
{
    char alp[] = "ABCDEFG";
    char alp_1[] = "ABCDEF";
    int a = 7 , space = 0 , b = 6 ;
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < a; j++)
        { 
            cout << alp[j];
        } 
        for (int i = 0; i < space; i++)
        {
            cout << " ";
            if(true)
            {
                cout << " ";
            }
        
        }   
      
        for (int k = b; k >= 0; k--)
        {
            cout << alp[k];
        }
        cout << endl;
        space++;
        a--;
        b--;
    }
    
    return 0; 
}
