#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; i++)

int main() {
	int n, m;
	cin >> n >> m;
	vector<int> a(n);
	forn(i, n) cin >> a[i];
	sort(begin(a), end(a));
	forn(i,m){
		int x = read();
		int cur = distance(begin(a), upper_bound(begin(a), end(a), x));
		cout << cur << '\n';
	}
}
