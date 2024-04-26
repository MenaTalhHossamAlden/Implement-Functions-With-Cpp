#include <iostream>
using namespace std;

// zFill

// 00150
// 06500
// 11350

// Example String => "6500" => Length -> 4
// Example Width => 7

string zFill(string st, int width, string fill = "0")
{
    int len = st.length();
    if(len < width)
    {
        for (int i = 0; i < width - len; i++)
        {
            st = fill + st;
        }
    }
    return st;
}

int main()
{
    cout << zFill("150", 7, "@") << endl;
    cout << zFill("6550", 7, "@") << endl;
    cout << zFill("11650", 7, "@") << endl;
    cout << zFill("155650", 7, "@") << endl;
    return 0;
}