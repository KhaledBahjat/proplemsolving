#include <cmath>
#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>
namespace __gnu_pbds {
    typedef tree< long long ,
        null_type ,
        less< long long > ,
        rb_tree_tag ,
        tree_order_statistics_node_update > ordered_set;
}
using namespace __gnu_pbds;



#define Khaled std::ios::sync_with_stdio(0), std::cin.tie(0), std::cout.tie(0);

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
/*========================== Glopal Memory ============================*/

/*****************************  FUNCTIONS  *****************************/

//****************************  MAIN  *********************************/
void NoSt0n_ ( int tc );

signed main ( ) {
    Khaled 
    int _ = 1;
    // cin >> _;
    for (int __ = 1; __ <= _; __++){
        // cout << "Case #" << __ << " : ";
        NoSt0n_(__);
        if (__ < _){
            cout << '\n';
        }
        cout << '\n';
    }
    return 0;
}

/*=============================== NoSt0n_ =============================*/
void NoSt0n_ ( int __ ) {
  string s;
  cin >> s;
  cout << "Hello, " << s;
}

//================================= END   =============================*/
