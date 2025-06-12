#include <iostream>
using namespace std;
class TokenMachine
{
private:
    static unsigned int _tokenNumber;
    static const unsigned int MAX_LIVE_TOKEN;
    static const double _Average_Processing_Time_In_Minute;
    static unsigned int _Active_Token;
    static int setMaxLiveTokens(int num = 5)
    {
        cout << "Enter the No of live tokens : ";
        cin >> num;
        return num;
    }
    static double setAverageProcessingTime(double tm = 3)
    {
        cout << "Enter the average time processig : ";
        cin >> tm;
        return tm;
    }
public:
    static string getNextToken()
    {
        cout << "Token ID :" << _tokenNumber++ <<endl;
        cout << "Person before you in line are : " << _Active_Token <<endl;
        cout << "Expectred wait time is : " << _Average_Processing_Time_In_Minute <<endl; 
    }   
    static unsigned int getActiveTokensCount()
    {
        return _Active_Token;
    }
    static void personIsServiced()
    {
        setAverageProcessingTime(_Average_Processing_Time_In_Minute + 3);
    }   
    static unsigned int getCountOfPersonServiced()
    {
        return _Active_Token;
    }
    static void resetMachine()
    {
        _tokenNumber = 0;
        _Active_Token = 0;
    }

};
unsigned int TokenMachine::_tokenNumber = 15;
const unsigned TokenMachine::MAX_LIVE_TOKEN = TokenMachine :: setMaxLiveTokens();
const double TokenMachine::_Average_Processing_Time_In_Minute = TokenMachine::setAverageProcessingTime();
unsigned int TokenMachine::_Active_Token = 0;
int main()
{
    TokenMachine ::getNextToken();
    TokenMachine ::personIsServiced();
    TokenMachine ::getNextToken();
    TokenMachine ::personIsServiced();
}