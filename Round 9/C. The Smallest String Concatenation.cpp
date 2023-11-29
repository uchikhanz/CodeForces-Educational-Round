#include <bits/stdc++.h>
using namespace std;

#define forn(i, n) for(int (i) = 0; (i) < (n); ++(i))

inline bool cmp(const string& a, const string& b) {
        return a + b < b + a;
}

int main() {
        int n;
        cin >> n;
        vector<string> v(n);
        forn(i, n) cin >> v[i];
        sort(begin(v), end(v), cmp);
        forn(i, n) cout << v[i];
}
