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
    int n, k;
    cin >> n >> k;
    vector<int> arr, sarr(n);
    for (int i = 0; i < n;i++){
        cin >> arr[i];
        sarr[i] = arr[i];
    }
        sort(all(sarr));
        reverse(all(sarr));
        map<int,int>mp;
        for (int i = 0; i < k;i++)
            mp[sarr[i]]++;
        int sum=0,cnt=0;
        bool flag=0;
        vector<int>v;
        for (int i = 0; i < n; i++){
            cnt++;
            if (mp[arr[i]] != 0){
                sum += arr[i];
                v.push_back(cnt);
                mp[arr[i]]--;
                flag = 1;
                cnt = 0;
            }
        }
        v[sz(v)- 1] += cnt;
        cout << sum << endl;
        for (auto it : v)
            cout << it << " ";
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