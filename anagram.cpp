#include <bits/stdc++.h>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

bool areAnagram(string &str1, string &str2)
{

    // frequency approach !!!

    int size1 = str1.size();
    int size2 = str2.size();

    if (size1 != size2)
    {
        return 0;
    }

    int char_arr[256] = {0}; // Extended ASCII chars are 0-255
    for (int i = 0; i < size1; i++)
    {

        char_arr[str1[i]]++;
        char_arr[str2[i]]--;
    }
    /*After adding and subtracting the frequency of chars,
    if end char_array is 0 for all ASCII indices then, it's an
    ANAGRAM :)
    */

    for (int i = 0; i < 256; i++)
    {
        if (char_arr[i])
        {
            return 0;
        }
    }
    return 1; // returns true or 1 if they are anagrams for eg. silent and listen.
}

class Runner
{
    int t;
    vector<vector<string>> arr;

public:
    void takeInput()
    {
        cin >> t;

        for (int c = 0; c < t; c++)
        {
            vector<string> temp(2);
            for (int i = 0; i < 2; i++)
                cin >> temp[i];
            arr.push_back(temp);
        }
    }

    void execute()
    {
        vector<vector<string>> arrCopy = arr;
        for (int i = 0; i < t; i++)
        {
            areAnagram(arrCopy[i][0], arrCopy[i][1]);
        }
    }

    void executeAndPrintOutput()
    {
        for (int i = 0; i < t; i++)
        {
            cout << areAnagram(arr[i][0], arr[i][1]) << endl;
        }
    }
};

int main()
{
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();
    return 0;
}
