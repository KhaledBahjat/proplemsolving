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
    int n;
    bool flag = 0;
    cin >> n;
    vector<string> arr(n);
    string s, x;
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        if (arr[i] == "Header" || arr[i] == "EndHeader"){
            if (i != 0 && i != n - 1)
                flag = 1;
        }}
        if(n&1)
            return void(cout << "WA");
        if (arr[0] != "Header" || arr[n - 1] != "EndHeader" || flag == 1)
            return void(cout << "WA");
        stack<string> ss;
        for (int i = 1; i < n - 1; i++){
            if (arr[i] == "Cell" || arr[i] == "Row" || arr[i] == "Table")
                ss.push(arr[i]);
            else{
                if (ss.empty())
                    return void(cout << "WA");
                s = arr[i];
                x = ss.top();
                int cnt = 0;
                for (int j = 3; j < arr[i].size(); j++){
                    if (s[j] != x[cnt])
                        flag = 1;
                    cnt++;
                }
                if(flag==1)
                    return void(cout << "WA");
                ss.pop();
            }
            }
            cout << (ss.empty() ? "ACC" : "WA");
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