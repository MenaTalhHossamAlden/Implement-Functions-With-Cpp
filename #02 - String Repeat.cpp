#include <iostream>
using namespace std;

// String Repeat

/**
 * stringRepeat
 * This Function Will Repeat The String
 * string st: The String That Will Be Repeated
 * int r: The Number OF Repeatings
 * string sep: The Separator Between The Repeated Strings
 * bool showEnd: Show THe Separator At The End Of The String
 * return string 
*/

string stringRepeat(string st, int r = 2, string sep = "", bool showEnd = true)
{
    string result;
    for(int i = 0; i < r; i++)
    {
        result += st;
        if(i < r - 1)
        {
            result += sep;
        }
    }
    if(showEnd)
    {
        result += sep;
    }
    return result;
}

int main()
{
    cout << stringRepeat("Mena") << endl;
    return 0; 
}