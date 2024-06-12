#include <iostream>
#include <string>
using namespace std;

/*
    Money Format
    100 -> 100
    1000 -> 1,000
    100000 -> 100,000
    1000000 -> 1,000,000
*/

string moneyFormat(int n)
{
    string snum = to_string(n);
    string result = "";
    int count = 0;
    for(int i = snum.size() - 1; i >= 0; i--)
    {
        result = snum[i] + result;
        count++; 
        if(count % 3 == 0 && i != 0)
        {
            result = "," + result;
        }
    }    
    return result;
}

int main()
{
    cout << moneyFormat(100) << endl;
    cout << moneyFormat(1000) << endl;
    cout << moneyFormat(10000) << endl;
    cout << moneyFormat(100000) << endl;
    cout << moneyFormat(1000000) << endl;
    cout << moneyFormat(10000000) << endl;
    cout << moneyFormat(100000000) << endl;
    cout << moneyFormat(1000000000) << endl;
    return 0;
}