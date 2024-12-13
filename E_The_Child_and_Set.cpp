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
int Ons(ll n){
    string s="";
    while(n!=0){
        if(n%2==0)s+='0';
        else s+='1';
        n/=2;
    }
    for (int i = 0; i < sz(s); i++){
        if(s[i]=='1')return i;
    }
    return -1;
}
// bitMask
bool count(int num){
  return __builtin_popcount(num);
}
bool turnOff (int mask, int bit) {
return mask & ~(1 << bit);
}
//********************************   Just المعلم سامي برهومة  *********************************/
void NoSt0n_(int tc){
        int s,l;
        cin >> s >> l;
        set<int> ans;
        bitset<64> num(s);
        ll sum = 0;
        for (int j = l; j >= 1; j--){
            int x = Ons(j);
            if (pow(2, x) + sum <= s){
                sum += pow(2, x);
                ans.insert(j);
            }
    }
    if(sum==s){
        cout << sz(ans) << el;
        for (auto it : ans)
            cout << it << " ";
    }
    else
        cout << -1;
}
signed main()
{
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