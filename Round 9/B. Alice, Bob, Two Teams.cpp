#include <bits/stdc++.h>
using namespace std;

#define forn(i, n) for(int (i) = 0; (i) < (n); ++(i))

int main() {
    int n;
    string s;
    cin >> n;
    vector<int> a(n);
    forn(i, n) cin >> a[i];
    cin >> s;
    long long int ans = 0, left = 0, right = 0, left_max = 0, right_max = 0;
    forn(i, n){
        if(s[i] == 'B') ans += a[i];                
    }
    forn(i, n){
        if(s[i] == 'A') left += a[i];
        else left -= a[i];
        left_max = max(left_max, left);
    }
    for(int i = n - 1; i >= 0; --i){
        if(s[i] == 'A') right += a[i];
        else right -= a[i];
        right_max = max(right_max, right);
    }
    cout << ans + max(left_max, right_max);
}
