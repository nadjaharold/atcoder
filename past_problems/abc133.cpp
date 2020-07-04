// C - Remainder Minimization 2019
// 0になるときあるよねって話。l, r区間内のi*jを2019で割ったときの最小値。2017like numberに似てる。
#include <bits/stdc++.h>
using namespace std;
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
#pragma GCC optimize("Ofast")
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

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  lli a, b, c, h, n, w, l, r, ans = 0, count = 2020;
  string s, t;
  vector<pair<string, pair<lli, lli>>> pr;
  cin >> l >> r;
  repe(i, l, r)
  {
    repe(j, i + 1, r)
    {
      ans = (i * j) % 2019;
      if (ans == 0)
      {
        cout << 0 << endl;
        return 0;
      }
      count = min(count, ans);
    }
  }
  cout << count << endl;
}

// https://atcoder.jp/contests/abc133/tasks/abc133_b
// むずすぎ。平方根、ルート、sqrt。多重ループ。repマクロ。sqrtの切り捨てに注意。

// #include <bits/stdc++.h>
// #define rep(i, n) for (int i = 0; i < (n); i++)
// #define ALL(x) (x).begin(), (x).end()
// #define SIZE(x) ((x).size())
// #define MAX(x) *max_element(ALL(x))
// #define INF 1000000000000 //10^12
// #define MOD 10000007      //10^9+7
// using namespace std;
// typedef long long ll;

// signed main()
// {
//   int n, d, ans = 0;
//   cin >> n >> d;
//   vector<vector<int>> x(n, vector<int>(d));
//   rep(i, n)
//   {
//     rep(j, d)
//     {
//       cin >> x[i][j];
//     }
//   }
//   rep(i, n)
//   {
//     rep(j, i)
//     {
//       int sq = 0;
//       rep(k, d)
//       {
//         int s = x[i][k] - x[j][k];
//         sq += s * s;
//       }
//       int t = sqrt(sq);
//       if (t * t == sq)
//         ans++;
//     }
//   }
//   cout << ans << endl;
// }

// #include <bits/stdc++.h>
// using namespace std;
// #define rep(i, n) for (int i = 0; i < (n); ++i)
// int main()
// {
//   int n, d, ans = 0;
//   cin >> n >> d;
//   vector<vector<int>> x(n, vector<int>(d));
//   rep(i, n)
//   {
//     rep(j, d) cin >> x[i][j];
//   }
//   rep(i, n)
//   {
//     rep(j, i)
//     {
//       int sq = 0;
//       rep(k, d)
//       {
//         int s = x[i][k] - x[j][k];
//         sq += s * s;
//       }
//       int t = sqrt(sq) + 0.5;
//       if (t * t == sq)
//         ans++;
//     }
//   }
//   cout << ans << endl;
// }