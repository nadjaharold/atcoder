#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
using namespace std;
#define out(x) cout << x << '\n'
#define lli long long int
#define uli unsigned long long int
#define rep(i, m, n) for (lli i = m; i < (n); i++)
#define repe(i, m, n) for (lli i = m; i <= (n); i++)
#define ALL(x) (x).begin(), (x).end()
#define SIZE(x) ((lli)(x).size())
#define MAX(x) *max_element(ALL(x))
#define MIN(x) *min_element(ALL(x))
#define _GLIBCXX_DEBUG
const lli INF = 2147483647;
const lli MINF = -2147483648;
const lli LINF = 9223372036854775807;
const lli MOD = 1000000007; //10^9+7
const double PI = acos(-1);
#define SORT(n) sort(n.begin(), n.end())
#define SORTR(n) sort(n.begin(), n.end(), greater<int>())
#define REV(n) reverse(n.begin(), n.end())
#define pb push_back
#define eb emplace_back
#define mp make_pair
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vlli = vector<lli>;
using vvli = vector<vlli>;
using vs = vector<string>;
using vvs = vector<vs>;
using vb = vector<bool>;
using vvb = vector<vb>;
using ll = long long;
//---------------------------------------------------------------------------------------------------
// vector入力
template <typename T>
istream &operator>>(istream &is, vector<T> &vec)
{
  for (T &x : vec)
    is >> x;
  return is;
}
// vector出力
template <typename T>
ostream &operator<<(ostream &os, vector<T> &vec)
{
  // os << '{';
  for (int i = 0; i < vec.size(); i++)
  {
    os << vec[i] << (i + 1 == vec.size() ? "" : "");
  }
  // os << '}';
  return os;
}
// aよりもbが大きいならばaをbで更新する(更新されたならばtrueを返す)
template <typename T>
bool chmax(T &a, const T &b)
{
  if (a < b)
  {
    a = b; // aをbで更新
    return true;
  }
  return false;
}
// aよりもbが小さいならばaをbで更新する(更新されたならばtrueを返す)
template <typename T>
bool chmin(T &a, const T &b)
{
  if (a > b)
  {
    a = b; // aをbで更新
    return true;
  }
  return false;
}
//---------------------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------------------
void solve()
{
  lli a = 0, b = 0, c = 0, h = 0, n = 0, w = 0, ans = 0, count = 0;
  string s = "", t = "";
  vector<pair<lli, lli>> pr;
  map<lli, lli> mp;
  set<lli> st;

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> n;
  vlli d(n), e(n);
  rep(i, 0, n)
  {
    cin >> d[i];
    // e[i] = d[i];
  }
  // SORT(e);
  // a = e[n / 2];
  ans = 1000;

  rep(i, 0, n - 1)
  {
    if (d[i] < d[i + 1])
    {
      a = ans / d[i];
      ans += a * (d[i + 1] - d[i]);
    }
  }

  // cout << e << endl;
  // cout << a << endl;
  // bool z = false, xx = false, yy = false;
  // rep(i, 0, n)
  // {
  //   b = d[i];
  //   rep(j, i + 1, n)
  //   {
  //     if (d[j] > b)
  //     {
  //       z = true;
  //       // cout << "e: " << d[j] << endl;
  //     }
  //   }
  //   // cout << "z: " << z << endl;
  //   if (d[i] < a && z == true)
  //   {
  //     count += (ans / d[i]);
  //     ans -= (ans / d[i]) * d[i];
  //   }
  //   else if (d[i] >= a)
  //   {
  //     // cout << "ans2: " << ans << " count: " << count << endl;
  //     rep(j, i + 1, n)
  //     {
  //       if (d[j] > b)
  //       {
  //         xx = true;
  //         // cout << "e: " << d[j] << endl;
  //       }
  //       else if (d[j] < b)
  //       {
  //         yy = true;
  //       }
  //     }
  //     if (xx == false)
  //     {
  //       ans += count * d[i];
  //       count = 0;
  //     }
  //     else if (xx == true && yy == true)
  //     {
  //       ans += count * d[i];
  //       count = 0;
  //     }
  //     xx = false;
  //     yy = false;
  //   }
  //   z = false;
  // }

  out(ans);

  // else
  // {
  //   out(1000);
  // }
}
//---------------------------------------------------------------------------------------------------
signed main()
{
  solve();
}