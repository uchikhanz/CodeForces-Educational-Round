#include<bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int (i) = 0; (i) < (n); (i)++)

int main(){
	string s;
	int q;
	cin >> s >> q;
	while(q--){
		int l, r, c;
    		cin >> l >> r >> c;
    		l--, r--;
		int sz = r - l + 1;
		string substr = s.substr(l, sz);
		c %= sz;
		string a = substr.substr(sz - c, c);
		string b = substr.substr(0, sz - c);
		substr = a + b;
		//cout << "substr - " << substr << ',' << a << ',' << b << '\n';
		for(int i = l, j = 0; i <= r; i ++, j ++){
			s[i] = substr[j];
		}
	}
	cout << s;
}
