#include <bits/stdc++.h>
using namespace std;
#define Khaled  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
inline void IN_OU(){
//     #ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin), freopen("output.txt", "w", stdout);
// #endif
}
typedef long long ll;
#define int long long 
#define sz(v) (ll) v.size()
#define all(a) a.begin(), a.end()
#define all_r(a) a.rbegin(), a.rend()
#define mem(x, val) memset((x), (val), sizeof(x))
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))
#define el '\n'
/**********************************  FUNCTIONS  *************************************************/
const int N = 2e5 , mod = 1e9 + 7;
int frq [N] {};


//********************************   Just المعلم سامي برهومة  *********************************/
void NoSt0n_ ( int tc ){
        int n,m,k;
        cin >> n >> m >> k;
        vector<int>arr(n);
        for (int i = 0;i<n;i++)
            cin >> arr[i];
        pair<int, pair<int, int>> ope[m];
        for(int i=0;i<m;i++){
            cin >> ope[i].first >> ope[i].second.first >> ope[i].second.second;
        }

    ll b[m]={0};
    for(int i=0;i<k;i++){
    ll x,y; cin>>x>>y;
    b[x-1]++;
    if(y!=m)b[y]--;
    }
    for(int i=1 ; i<m ; i++)
        b[i] += b[i - 1];
    ll temp[n] = {0};
    for(int i=0;i<m;i++){
        temp[ope[i].first - 1] += ope[i].second.second * b[i];
        if (ope[i].second.first != n)
            temp[ope[i].second.first] -= ope[i].second.second * b[i];
    }
    for(int i=1 ; i<n  ; i++)
        temp[i] += temp[i - 1];
    for (int i = 0; i < n; i++)
        cout << arr[i] + temp[i] << " ";
}
signed main(){
  Khaled
  IN_OU();
  int _ = 1;
  // cin >> _;
  for (int __ = 1; __ <= _; __++){
    // cout << "Case #" << __ << " : ";
    NoSt0n_(__);
    if (__ < _)
      cout << '\n';
  }
    return 0;
}