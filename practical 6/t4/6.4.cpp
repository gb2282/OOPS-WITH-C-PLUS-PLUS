#include <bits/stdc++.h>
using namespace std;
void check(string s1, string s2)
{if (s1 != s2)
        cout << s1 << " is not equal to " << s2 << endl;
    else
        cout << s1 << " is equal to " << s2 << endl;
}
int main()
{
    string s1;
    getline(cin,s1);
    string s2;
    getline(cin,s2);
    check(s1, s2);
    return 0;
}
