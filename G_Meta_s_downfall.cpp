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

#define cin(v)        \
    for (auto &i : v) \
        cin >> i;

#define cout(v)      \
    for (auto i : v) \
        cout << i << " ";

#define el '\n'

#define cin_2d(vec, n, m) for(int i = 0; i < n; i++) for(int j = 0; j < m && cin >> vec[i][j]; j++);
#define cout_2d(vec, n, m) for(int i = 0; i < n; i++, cout << "\n") for(int j = 0; j < m && cout << vec[i][j] << " "; j++);
#define cout_map(mp) for(auto& [f, s] : mp) cout << f << "  " << s << "\n";
#define Time cerr << "Time Taken: " << (float)clock() / CLOCKS_PER_SEC << " Secs" << "\n";

#define Num_of_Digits(n) ((int)log10(n) + 1)

#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define sz(x) int(x.size())
#define debug(x) cout << #x << ": " << (x) << "\n";



void Solve(int __){
  unordered_set<string> st = {"Facebook", "Instagram", "Messenger", "WhatsApp"};
  string a, b, c;
  cin >> a >> b >> c;
  st.erase(a);
  st.erase(b);
  st.erase(c);
  for(auto &i:st)
    cout << i;
}

signed main ( ) {
    Khaled 
    int _ = 1;
    // cin >> _;
    for (int __ = 1; __ <= _; __++){
        // cout << "Case #" << __ << " : ";
        Solve(__);
        if (__ < _){
            cout << '\n';
        }
    }
    return 0;
}