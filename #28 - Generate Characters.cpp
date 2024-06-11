#include <iostream>
using namespace std;

/*
    // Generate Characters
*/

string generateChars(bool caps = true, bool lows = false, bool nums = false)
{
    string result;

    if(caps)
    {
        for(int i = 65; i < 91; i++)
        {
            result += i;
        }
    }
    if(lows)
    {
        for(int i = 97; i < 122; i++)
        {
            result += i;
        }
    }
    if(nums)
    {
        for(int i = 48; i < 58; i++)
        {
            result += i;
        }
    }

    return result;
}

int main()
{
    string chars = generateChars(true, true, true);
    cout << chars;
    return 0;
}