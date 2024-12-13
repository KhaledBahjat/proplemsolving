#include <cmath>
#include <bits/stdc++.h>
using namespace std;
#define Khaled  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

inline void IN_OU(){
}
typedef long long ll;
#define sz(v) (ll) v.size()
#define all(a) a.begin(), a.end()
#define all_r(a) a.rbegin(), a.rend()
#define mem(x, val) memset((x), (val), sizeof(x))
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))
#define int long long 
#define el '\n'
/********************************  FUNCTIONS  *****************************/
const int N = 2e5 , mod = 1e9 + 7;
int frq [N] {};


//********************************   Just المعلم سامي برهومة  *********************************/
void NoSt0n_ ( int tc ){
    int n, k, ans = 0;
    cin >> n >> k;
    map<int, int> frq;
    for (int i = 0; i < n;i++){
        int x;
        cin >> x;
        ans += frq[x ^ k];
        frq[x]++;
    }
    cout << ans;
}
signed main(){
  Khaled
  IN_OU();
  int _ = 1;
  cin >> _;
  for (int __ = 1; __ <= _; __++){
    // cout << "Case #" << __ << " : ";
    NoSt0n_(__);
    if (__ < _)
      cout << '\n';
  }
    return 0;
}