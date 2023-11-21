#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; i++)

bool isNumber(const string& s){
	if((s.size() > 1 && s[0] == '0') || s.size() == 0){
		return false;
	}
	if(s.size() == 1 && isdigit(s[0]) == 1){
		return true;
	}
	for (char const &ch : s) {
        	if (std::isdigit(ch) == 0) 
            	return false;
    	}
	return true;
}

int main() {
	string s;
	cin >> s;
	int n = size(s), start = 0;
	std::vector<string> num, str;
	forn(i, n){
		if(s[i] == ',' || s[i] == ';'){
			int sz = i - start;
			string current = s.substr(start, sz);
			if(isNumber(current) == true) num.push_back(current);
			else str.push_back(current);
			start = i + 1;
		}
	}
	string current = s.substr(start, n - start);
	if(isNumber(current) == true) num.push_back(current);
	else str.push_back(current);
	
	if (num.empty()) {
		cout << "-\n";
	} else {
		cout << "\"";
		for (size_t i = 0; i < num.size(); i++) {
	    		cout << num[i];
	    		if (i != num.size() - 1) {
	        		cout << ',';
	    		}
		}
		cout << "\"";
		cout << '\n';
	}

	if (str.empty()) {
		cout << "-\n";
	} else {
		cout << "\"";
		for (size_t i = 0; i < str.size(); i++) {
	    		cout << str[i];
	    		if (i != str.size() - 1) {
	        	cout << ',';
	    		}
		}
		cout << "\"";
		cout << '\n';
	}
}
