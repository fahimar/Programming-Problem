#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
#include <queue>
#include <algorithm>
#include <iomanip>
#include <map>
#define LL long long
using namespace std;
const int N = 505;
bool st[N][N] = {0};
int a[N][N] = {0},b[N][N] = {0};

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);
    int h,w;
    for(int i = 1;i <= h;i++)
        for(int j = 1;j <= w; j++)
    {
        char c;
        cin >> c;
        if(c == '.') st[i][j]=1;
    }
    for(int i=1;i<=h;++i)
        for(int j=1;j<=w;++j)
    {
        if(st[i][j] && st[i-1][j]) a[i][j]++;

        if(st[i][j] && st[i][j-1]) b[i][j]++;
        a[i][j] += a[i-1][j] + a[i][j-1] - a[i-1][j-1];

        b[i][j] += b[i-1][j] + b[i][j-1] - b[i-1][j-1];

    }
   int n;
   cin >> n;
   while(n--)
   {
       int x1,x2,y1,y2,ans = 0;
       cin >> x1 >> y1 >> x2 >> y2;
       ans = a[x2][y2] - a[x1][y2] - a[x2][y1-1] + a[x1][y1-1];

       ans += b[x2][y2] - b[x1-1][y2] - b[x2][y1] + b[x1 - 1][y1];
       cout << ans << '\n';
   }

   return 0;
}



