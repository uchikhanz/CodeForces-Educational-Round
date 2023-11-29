#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int (i) = 0; (i) < (n); ++(i))

int main() {
        long long n, p, ans = 0, cur = 0, res = 0;
        cin >> n >> p;
        vector<string> s(n);
        forn(i, n) cin >> s[i];
        reverse(begin(s), end(s));
        forn(i, n){
                cur *= 2;
                if(s[i] == "halfplus") cur ++;
                ans += p * cur / 2;
        }
        cout << ans;
}
