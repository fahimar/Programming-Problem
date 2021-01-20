#include <bits/stdc++.h>
    using namespace std;
    #define d(x)                cout << #x << " = " << (x) << endl;
    #define fr                  freopen("in.txt", "r", stdin);
    #define fw                  freopen("out.txt", "w", stdout);
    #define mem(x)              memset((x), 0, sizeof((x)));
    #define pb                  push_back
    #define LL                  long long
    #define fastIO              ios_base::sync_with_stdio(false)
    #define sf                  scanf
    #define pf                  printf
    #define SQR(x)              ((x)*(x))
    #define sc1(x)              scanf("%d", &x)
    #define scb(x, y)           scanf("%d %d", &x, &y)
    #define sc3(x, y, z)        scanf("%d %d %d", &x, &y, &z)
    #define FOR(i, x, y)        for(int i=int(x); i<int(y); i++)
    #define ROF(i, x, y)        for(int i=int(x-1); i>=int(y); i--)
    #define all(c)              (c.begin(), c.end())
    #define unq(v)              sort(all(v)), (v).erase(unique(all(v)),v.end())
    #define EPSILON    (1.0E-8)
    #define siz 100000

    int main(){

            
        int tc;
        cin >> tc;
        cin.ignore();
        for(int tr = 1; tr <= tc; tr++){
            string str;
            getline(cin, str);
            int words = 0;
            int n = str.size();
            vector<string> uq;
            vector<int> cnt;
            int total_words = 0;
            for(int i = 0; i < n; i++){
                string word = ""; 
                if(str[i] != ' '){
                    while(str[i] != ' '){
                        word+= str[i];
                        i++;
                        if(i >= n) break;
                    }
                    total_words++;
                    int flag = 0;
                    for(int x = 0; x < uq.size(); x++){
                        if(uq[x] == word){
                            cnt[x]++;
                            flag = 1;
                        }
                    }
                    if(flag == 0){
                        uq.push_back(word);
                        cnt.push_back(1);
                    }

                    i--;

                }

            }
            int fact = 1;
            for(int i = total_words; i > 0; i--){
                fact *= i;
            }
            int ans = fact;
            for(int i = 0; i < cnt.size(); i++){
                int fact = 1;
                for(int x = cnt[i]; x > 0; x--){
                    fact *= x;
                }
                ans/=fact;
            }
            cout << "1/" << ans << endl;

        }


    }
