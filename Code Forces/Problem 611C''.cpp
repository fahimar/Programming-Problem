#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include<bits/stdc++.h>
#define pb push_back
#define F first
#define S second
#define all(v) v.begin(), v.end()
#define FILL(a, x) memset(a, x, sizeof(a))
#define ll long long
#define Fast ios_base::sync_with_stdio(false);cin.tie(NULL);
#define INF INT_MAX
#define mx 1000010

/*#include <ext/pb_ds/assoc_container.hpp>
 *#include <ext/pb_ds/tree_policy.hpp>
 * using namespace __gnu_pbds;
 * #define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
 * #define ordered_multiset tree<int, int>. null_type,less<pair<int, int>>, rb_tree_tag, tree_order_statics_node_upd
 * 
 */


const double Pi= acos(-1);
using namespace std;
int debug = 01;
int main()
{
	int n,m;
	cin >> n >> m;
	string g[n];
	int x[n][m], y[n][m];
	for(int i = 0; i<n; i++) cin >> g[i];
	FILL(x, 0),FILL(y, 0);
	for(int i = 0; i<n; i++ ) for(int j = 1; j < m ; j++){x[i][j] = x[i][j-1]; if(g[i][j]=='.' && g[i][j-1]=='.') x[i][j]++;}
	for(int i = 0; i<m; i++ ) for(int j = 1; j < n ; j++){y[j][i]=y[j-1][i]; if(g[j][i]=='.' && g[j-1][i] == '.') y[j][i]++;}
	int q;
	cin >> q;
	while(q--)
	{
		int x1,y1,x2,y2, ans = 0;
		
		cin >> x1 >> y1 >> x2 >> y2;
		
		x1--, x2--, y1--, y2--;
		for(int i=x1; i <= x2; i++) ans += (x[i][y2]-x[i][y1]);
		for(int i=y1; i <= y2; i++) ans += (y[x2][i]-x[x1][i]);
		
		
		cout << ans << "\n";
		}
	
	
	
	
	}
 
