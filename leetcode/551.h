#pragma once
#include <string>
#include <unordered_map>
using std::string;

bool checkRecord(string s)
{
    int a=0,l=0;
    for(int i=0;i<s.size();++i)
    {
        switch (s[i]) {
        case 'A':
            if(++a > 1)
                return false;
            l=0;
            break;
        case 'L':
            if(++l > 2)
                return false;
            break;
        default:
            l=0;
            break;
        }
    }
    return true;
}
