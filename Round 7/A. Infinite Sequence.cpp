#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; i++)
#define lint long long 

int main(){
        lint n, cur = 1;
        cin >> n;
        while(n > cur){
                n -= cur;
                cur ++;
        }
        cout << n;
}
