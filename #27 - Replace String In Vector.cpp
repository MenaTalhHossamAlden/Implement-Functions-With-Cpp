#include <iostream>
#include <vector>
using namespace std;

/* 
    Replace String In vector
    {"Menatalh", "HA", "Said"} --> "HA" --> "Said"
*/

vector<string> replaceSt(vector<string>sts, string ol, string ne, int count = 1)
{
    for(int i = 0 ; i < sts.size(); i++)
    {
        if(sts[i] == ol && count > 0)
        {
            sts[i] = ne;
            count--;
        }
    }
    return sts;
}

int main()
{
    vector<string> words = {"Hello", "World", "Hello", "World", "Hello", "World"};
    words = replaceSt(words, "Hello", "Hi", 2); 
    for(int i = 0 ; i < words.size(); i++)
    {
        cout << words[i] << endl;
    }
    return 0;
}