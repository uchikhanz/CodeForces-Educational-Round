#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for(int i = 0; i < n; i++)

char s[1001][1001] = {};
int vis[1001][1001] = {};
int n, m, k;
int tot = 0, pos[1000001] = {};

void dfs(int x, int y, int id){
	if(x == 0 || x == n + 1 || y == 0 || y == m + 1) return;
	if(s[x][y] == '*'){
		tot++;
		return;
	}
	if(vis[x][y] != 0) return;
	vis[x][y] = id;
	dfs(x - 1, y, id);
	dfs(x + 1, y, id);
	dfs(x, y - 1, id);
	dfs(x, y + 1, id);
	return;
}

int main() {
	cin >> n >> m >> k;
	for(int i = 1; i <= n; i++) for(int j = 1; j <= m; j++) cin >> s[i][j];
	for(int i = 1; i <= k; i++){
		int x, y;
    		cin >> x >> y;
		tot = 0;
		if(!vis[x][y]) dfs(x, y, i);
		else tot = pos[vis[x][y]];
		pos[i] = tot;
		cout << tot << '\n';
	}
	return 0;
}
