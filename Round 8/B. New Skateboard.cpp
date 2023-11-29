#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int (i) = 0; (i) < (n); (i) ++)

int main(){
	string s;
	cin >> s;
	int n = size(s);
	long long int ans = 0;
	vector<int> dig;
	forn(i, n){
		dig.push_back(s[i] - '0');
	}
	for(int i = 1; i < n; i ++){
		if((dig[i - 1] * 10 + dig[i]) % 4 == 0){
	    		ans += i;
		}
		if(dig[i - 1] % 4 == 0) ans ++;
	}
	if(dig[n - 1] % 4 == 0) ans ++;
	cout << ans;
}
