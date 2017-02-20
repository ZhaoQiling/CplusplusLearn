#include <iostream>
#include <sstream>
#include <set>
#include <string>
using namespace std;
int main()
{
    string s, buf;
    set<string> dict;
    while(cin >> s)
    {
        for(int i = 0; i < s.length(); i++)
        {
            if(isalpha(s[i]))
            {
                s[i] = tolower(s[i]);
            }
            else{
                s[i] = ' ';
            }
        }
        stringstream ss(s);
        while(ss >> buf)
            dict.insert(buf);
    }
    for(set<string>::iterator it = dict.begin(); it != dict.end(); it++)
    {
        cout << *it << endl;
    }
    return 0;
}
