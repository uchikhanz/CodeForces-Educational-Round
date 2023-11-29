#include <iostream>
using namespace std;
#define forn(i, n) for(int (i) = 0; (i) < (n); (i) ++)

int main(){
        int n, b, t;
        cin >> n >> b >> t;
        int tot = 0, r = n * t;
        while(n > 1){
    	        int cur = 1;
    	        while(cur * 2 <= n){
    		        cur *= 2;
    	        }
    	        n -= cur / 2;
                //cout << cur / 2 << '\n';
    	        tot += cur / 2;
        }
        cout << tot * b * 2 + tot << ' ' << r;
}
