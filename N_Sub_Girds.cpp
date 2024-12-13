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
//********************************   Just المعلم سامي برهومة  *********************************/
void NoSt0n_(int tc){
   int w, h, n;
      cin >> w >> h >> n;
      // 2D 
      vector<vector<bool>> v(h, vector<bool>(w, false));

      for (int i = 0; i < n; ++i){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2; 
        --x1, --y1, --x2, --y2;  
        for (int j = min(y1, y2) ; j <= max(y1, y2) ; ++j){
          for (int k = min(x1, x2) ; k <= max(x1, x2) ; ++k){
            v[j][k] = true;
          }
        }
        }
        int ans = 0;
        for (int y = 1; y <= h; ++y) {
            for (int x = 1; x <= w; ++x) {
                if (!v[y][x]) {
                    ++ans;
                }
            }
        }

        cout << ans; 
}
signed main()
{
  Khaled
  IN_OU();
  int _ = 1;
  cin >> _;
  for (int __ = 1; __ <= _; __++)
  {
    // cout << "Case #" << __ << " : ";
    NoSt0n_(__);
    if (__ < _)
      cout << '\n';
  }
  return 0;
}