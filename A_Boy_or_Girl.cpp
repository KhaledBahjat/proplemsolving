#include <cmath>
#include <bits/stdc++.h>
using namespace std;


#define Khaled  ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
inline void IN_OU(){

}
typedef long long ll;

typedef pair< int , int > pi;
typedef pair< int , pi > p3i;

typedef pair< ll , ll > pll;

typedef vector< int > vi;
typedef vector< pi > v2i;

typedef vector< string > vs;
typedef vector< bool > vb;

typedef vector< vi > vvi;

typedef priority_queue< int > pq_max;
typedef priority_queue< int , vi , greater< int > > pq_min;

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
#define Product(v, ans) cout << accumulate(all(v), ans, multiplies<int>());

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

#define el '\n'








void NoSt0n_ ( int tc ){
    string s;
    cin >> s;
    int cnt = 0;
    sort(all(s));
    for (int i = 0; i < sz(s); i++)
    if(s[i]==s[i+1])
            cnt++;
    int ans = sz(s) - cnt;
    cout << (ans & 1 ? "IGNORE HIM!" : "CHAT WITH HER!");
}




signed main ( ) {
  Khaled
  IN_OU();
  int _ = 1;
//   cin >> _;
  for (int __ = 1; __ <= _; __++){
    // cout << "Case #" << __ << " : ";
    NoSt0n_(__);
    if (__ < _){
      cout << '\n';
    }
    }
    return 0;
}

/*=================================== NoSt0n_ =============================*/
