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
#define el '\n'
/********************************  FUNCTIONS  *****************************/
const int N = 2e5 , mod = 1e9 + 7;
int frq [N] {};

struct pers{
  string name;
  int a, b, c, d;
  ll total;
};

bool comp(pers &p1,pers &p2){
  if(abs(p1.total-p2.total>10))
    return p1.total > p2.total;
  return p1.name < p2.name;
}

//********************************   Just المعلم سامي برهومة  *********************************/
void NoSt0n_(int tc)
{
  ll n;cin>>n;
  vector<pers> v(n);
  for (int i = 0;i<n;i++){
    cin >> v[i].name >> v[i].a >> v[i].b >> v[i].c >> v[i].d;
    v[i].total = v[i].a + v[i].b + v[i].c + v[i].d;
  }
  sort(all(v),comp);
  for(auto &[name,total,a,b,c,d]:v)
  {
    cout<<name<<' '<<total<<' '
  }
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
/*=================================== NoSt0n_ =============================*/