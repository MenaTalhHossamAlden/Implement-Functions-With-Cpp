#include <iostream>
using namespace std;

/*
    String Starts With
    "Hello World" -> "Hello" -> True
    "Hell World" -> "Hello" -> False -> Prefix > Main String
*/

bool startsWith(string str, string prefix, bool caseSensitive = true)
{
    if(str.length() < prefix.length())
        return false;
    for(int i = 0; i < prefix.length() ; i++)
    {
        if(caseSensitive)
        {
            if(str[i] != prefix[i])
            {
                return false;
            }
        }
        else // case insensitive
        {
            if(str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] += 32;
            }
            if(prefix[i] >= 'A' && prefix[i] <= 'Z')
            {
                prefix[i] += 32;
            }
            if(str[i] != prefix[i])
            {
                return false;
            }
        }
    }
    return true;
}

int main()
{
    cout << boolalpha;
    cout << startsWith("Hell", "Hello") << endl;                // False
    cout << startsWith("Hello", "Hello") << endl;               // True
    cout << startsWith("Hello World", "Hello") << endl;         // True
    cout << startsWith("Hello World", "hello") << endl;         // False
    cout << startsWith("Hello World", "hello", false) << endl;  // True
    return 0;
}