#include <bits/stdc++.h>
using namespace std;
#define Khaled ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
inline void IN_OU(){
// #ifndef ONLINE_JUDGE
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
const int N = 2e5, mod = 1e9 + 7;
int frq[N]{};

// bitMask
bool count(int num){
  return __builtin_popcount(num);
}
bool turnOff (int mask, int bit) {
return mask & ~(1 << bit);
}
//********************************   Just المعلم سامي برهومة  *********************************/
void NoSt0n_(int tc){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> v(m + 1);
    for(auto &it:v)
        cin >> it;
    int x = v[m], ans = 0;
    bitset<32> a(x);
    for (int i = 0; i < m; i++){
        bitset<32> b(v[i]);
        int cnt = 0;
        for (int j = 0; j < 32;j++){
            if (a[j] != b[j])
                cnt++;
        }
        if (cnt <= k)
            ans++;
    }
    cout << ans;
}
signed main(){
  Khaled
  IN_OU();
  int _ = 1;
  // cin >> _;
  for (int __ = 1; __ <= _; __++)
  {
    // cout << "Case #" << __ << " : ";
    NoSt0n_(__);
    if (__ < _)
      cout << '\n';
  }
  return 0;
}