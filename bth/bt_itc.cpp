#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    string s, t = "";
    cout<<"nhap chuoi s: ";
    cin >> s;
    /*int cnt[256] = {};  // char 0 -> 255
    // aaabbcc
    for (int i = 0; i < s.size(); ++i)
    {
        cnt[int(s[i])]++;
        // i = 0, cnt[a] = 1
        // i = 1, cnt[a] = 2
        // i = 2, cnt[a] = 3
        // i = 3, cnt[b] = 1
        // i = 4, cnt[b] = 2
    }
    for (int i = 0; i < s.size(); ++i)
    {
        if (cnt[s[i]])
        {
            cout << s[i] << ' ' << cnt[s[i]] << '\n';
            cnt[s[i]] = 0;
        }
    }*/
    for (int i = 0; i < s.size(); i++)
    {
        /*if(s[i] == '.')
        cout<<"[.]";
        else
        cout<<s[i];*/
        if(isdigit(s[i]))
            t+=s[i];
        else
            t+="[.]";
    }
    cout<<t;
    return 0;
}