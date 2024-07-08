#include <iostream>
#include <string>
using namespace std;

void findOccur(string text, string window)
{
    int tsize = text.size();
    int wsize = window.size();
    for (int i = 0; i <= tsize - wsize; i++) // we can subtract their sizes to get the last substr formed on main string
    {
        bool flag = true;
        for (int j = 0; j < wsize; j++)
        {
            if (text[i + j] != window[j]) // matching chars of main string with substr
            {
                flag = false;
                break;
            }
        }
        if (flag) // if true it will print all the starting indices at which substr forms
        {
            cout << i << " ";
        }
    }
}
int main()
{

    string str;
    string pat;
    cin >> str;
    cin >> pat;
    findOccur(str, pat);
}
