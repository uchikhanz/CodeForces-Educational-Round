#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)

int main(){
	int T;
  	cin >> T;
	while(T--){
		long long n;
		cin >> n;
		long long ans = (n + 1) * n / 2LL;
		int pw = 0, res = n;
		while(res > 0){
			res /= 2;
			pw++;
		}
		long long current = 1LL;
		while(pw--) current *= 2LL;
		ans -= 2 * (current - 1);
		cout << ans << '\n';
	}
}
