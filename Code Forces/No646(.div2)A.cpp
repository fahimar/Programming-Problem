#include <bits/stdc++.h>

using namespace std;

int main() {
	int T; cin >> T;
	while(T--) {
		int x, n; cin >> n >> x;
		int o = 0, e = 0;
		for(int i = 1; i <= n; i++) {
			int a; cin >> a;
			if(a & 1) o++;
			else e++;
		}

		if(!o) { puts("No"); continue; }

		if(n == x) {
			puts(o & 1 ? "Yes" : "No");
			continue;
		}

		if(!e) {
			if(x & 1) puts("Yes");
			else puts("No");
		}
		else puts("Yes");
	}
	return 0;
}
