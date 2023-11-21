#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; i++)

int main() {
	string s;
	cin >> s;
	std::vector<int> c(26, 0);
	int n = size(s);
	forn(i, n){
		int a = s[i] - 'a';
		c[a] ++;
	}
	forn(i, 26){
		int last = -1;
		for(int i = 25; i >= 0; i--){
			if(c[i] % 2 == 1){
				last = i;
				break;
			}
		}
		if(c[i] % 2 == 1 && last != i){
			c[i] ++;
			c[last] --;
		}
	}
	s = "";
	char spec = '*';
	forn(i, 26){
		if(c[i] == 0) continue;
		if(c[i] % 2 == 0){
			char ch = i + 'a';
			for(int j = 0; j < c[i] / 2; j ++) s += ch;
		}else{
			char ch = i + 'a';
			spec = ch;
			for(int j = 0; j < c[i] / 2; j ++) s += ch; 
		}
	}
	for(int i = 0; i < size(s); i++) cout << s[i];
	if(spec != '*') cout << spec;
	for(int i = size(s) - 1; i >= 0; i--) cout << s[i];

}
