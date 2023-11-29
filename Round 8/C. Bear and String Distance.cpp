#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int (i) = 0; (i) < (n); (i) ++)

int main(){
        int n, k, cnt = 0;
        string s;
        cin >> n >> k >> s;
        vector<int> a(n);
        forn(i, n){
                cnt += max(s[i] - 'a', 'z' - s[i]);
                a[i] = s[i] - 'a' + 1;
        }
        if(cnt < k){
                cout << "-1"; return 0;
        }
        forn(i, n){
                int cur = max(a[i] - 1, 26 - a[i]);
                if(cur < k){
                        if(cur == a[i] - 1) a[i] = 1;
                        else a[i] = 26;
                        k -= cur;
                }else{
                        if(cur == a[i] - 1) a[i] -= k;
                        else a[i] += k;
                        break;
                }
        }
        forn(i, n) cout << char(a[i] + 'a' - 1); 
}
