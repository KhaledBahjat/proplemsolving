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
    set<int> s;
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int suf[n];
    for (int i = n - 1; i >= 0; i--){
        s.insert(arr[i]);
        suf[i] = s.size();
    }
        int a;
        for (int i = 0; i < m; i++){
            cin >> a;
            cout << suf[a - 1] << endl;
        }
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