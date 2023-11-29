#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; i++)
#define lint long long 

int main(){
        string s;
        cin >> s;
        lint a;
        cin >> a;
        lint h = (s[0] - '0') * 10 + (s[1] - '0'), m = (s[3] - '0') * 10 + (s[4] - '0');
        lint tot = h * 60 + m + a;
        tot %= 60 * 24;
        h = tot / 60;
        m = tot % 60;
        if(h < 10) cout << '0' << h <<":";
        else cout << h << ":";
        if(m < 10) cout << '0' << m;
        else cout << m;

}
