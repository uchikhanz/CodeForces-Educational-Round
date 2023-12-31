#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; i++)
const long double EPS = 1e-18;

int main() {
	int n;
  	cin >> n;
	long double ans = 1e9;
	vector<pair<long double,int>> v;
	forn(i, n){
		int x, y;
    		cin >> x >> y;
		long double alpha = atan2l(y, x);
		v.push_back({alpha, i + 1});
                //cout << i + 1 << " --- " << alpha << '\n';
	}
	sort(begin(v), end(v));
	pair<int,int> id;
	v.push_back({v[0].first, v[0].second});
	for(int i = 0; i < n; i++){
		long double mn = v[i + 1].first - v[i].first;
                if(mn < 0) mn += 2 * acos(-1);
                else if(mn > acos(-1)) mn = 2 * acos(-1) - mn; 
		if(mn < ans){
			ans = mn;
			id = {v[i + 1].second, v[i].second};
		}
    		//cout << i + 1 << " --- " << mn << '\n';
	}
	cout << id.first << ' ' << id.second << '\n';
        //cout << atan2l(10, -1) << "AA";
}
