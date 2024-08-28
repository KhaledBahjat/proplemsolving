#include <bits/stdc++.h>

using namespace std;

#define NoSt0n_on_da_code std::ios::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);

typedef long long ll;

#define MP make_pair
#define PB push_back
#define EmB emplace_back
#define Em emplace
#define len(s) (ll) s.length()
#define sz(v) (ll) v.size()
#define all(a) a.begin(), a.end()
#define all_r(a) a.rbegin(), a.rend()
#define mem(x, val) memset((x), (val), sizeof(x))
#define MIN(v) *min_element(all(v))
#define MAX(v) *max_element(all(v))

#define tst     \
    ll t;       \
    cin >> t;   \
    ll i_t = 0; \
    while (i_t++ < t)
#define SetPre(n, x) cout << fixed << setprecision(n) << x

#define int long long

#define FOR(i, a, b) for (int i = a; i <= b; i++)
#define F0R(i, a) for (int i = 0; i < a; i++)
#define F1R(i, a) for (int i = 1; i <= a; i++)
#define cin(v)        \
    for (auto &i : v) \
        cin >> i;
        
#define cout(v)      \
    for (auto i : v) \
        cout << i << " ";
#define el "\n";




void Do_it(int TC){
  int n;
  cin >> n;
  if(n&1){
    cout << (n - 1) / 2 << el;
    int cnt = (n/2)-1;
    while(cnt--){
      cout << 2 << " ";
    }
    cout << '3' << ' ';
  }
  else {
    cout << n / 2 << el;
    n/=2;
    while(n--){
      cout << 2 << " ";
    }
  }
}

signed main(){
    NoSt0n_on_da_code int _ = 1;
    // cin >> _;
    for (int __ = 1; __ <= _; __++){
        // cout << "Case #" << __ << " : ";
        Do_it(__);
        if (__ < _){
            cout << '\n';
            // cout << '\n';
        }
    }
    return 0;
}
// I Can Do It
// Fight not to be the Winner,but to be the last one to lose