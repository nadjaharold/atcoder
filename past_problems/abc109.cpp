// C - Skip
// 各隣り合う座標間の距離の公約数を求める。
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

lli x;
bool cmp(int a, int b)
{
  return abs(a - x) < abs(b - x);
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  lli a, b, c, h, n, w, ans = 0, count = 0;
  string s, t;
  vector<pair<string, pair<lli, lli>>> pr;
  cin >> n >> x;
  vlli d(n), e(n, 0);
  rep(i, 0, n)
  {
    cin >> d[i];
  }
  d.pb(x);
  SORT(d);

  rep(i, 0, d.size() - 1)
  {
    ans = d[i + 1] - d[i];
    e[i] = ans;
  }
  lli g = e[0];
  rep(i, 1, n)
  {
    g = gcd(g, e[i]);
  }
  cout << g << endl;
}

// B - Shiritori
// #include <bits/stdc++.h>
// using namespace std;
// #define lli long long int
// #define uli unsigned long long int
// #define rep(i, m, n) for (lli i = m; i < (n); i++)
// #define repe(i, m, n) for (lli i = m; i <= (n); i++)
// #define ALL(x) (x).begin(), (x).end()
// #define SIZE(x) ((lli)(x).size())
// #define MAX(x) *max_element(ALL(x))
// #define _GLIBCXX_DEBUG
// const lli INF = 2147483647;
// const lli MINF = -2147483648;
// const lli LINF = 9223372036854775807;
// const lli MOD = 1000000007; //10^9+7
// const long double PI = acos(-1);
// #define SORT(n) sort(n.begin(), n.end())
// #define SORTR(n) sort(n.begin(), n.end(), greater<int>())
// #define REV(n) reverse(n.begin(), n.end())
// #define Vec(K, L, N, S) vector<L> K(N, S)
// #define rt sqrt
// #define pb push_back
// #define ppb pop_back
// #define eb emplace_back
// #pragma GCC optimize("Ofast")
// using vi = vector<int>;
// using vvi = vector<vi>;
// using vvvi = vector<vvi>;
// using vlli = vector<lli>;
// using P = pair<lli, lli>;
// // vector<P> vp;
// // vp.emplace_back(a[i], b[i]);
// using vs = vector<string>;
// using ll = long long;
// // vector入力
// template <typename T>
// istream &operator>>(istream &is, vector<T> &vec)
// {
//   for (T &x : vec)
//     is >> x;
//   return is;
// }
// // vector出力
// template <typename T>
// ostream &operator<<(ostream &os, vector<T> &vec)
// {
//   // os << '{';
//   for (int i = 0; i < vec.size(); i++)
//   {
//     os << vec[i] << (i + 1 == vec.size() ? "" : "");
//   }
//   // os << '}';
//   return os;
// }
// // aよりもbが大きいならばaをbで更新する(更新されたならばtrueを返す)
// template <typename T>
// bool chmax(T &a, const T &b)
// {
//   if (a < b)
//   {
//     a = b; // aをbで更新
//     return true;
//   }
//   return false;
// }
// // aよりもbが小さいならばaをbで更新する(更新されたならばtrueを返す)
// template <typename T>
// bool chmin(T &a, const T &b)
// {
//   if (a > b)
//   {
//     a = b; // aをbで更新
//     return true;
//   }
//   return false;
// }

// int main()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(0);
//   lli a, b, c, h, k, n, w, ans = 0, count = 0;
//   string s, t, v, x, y, z;
//   cin >> n;
//   vs d(n);
//   set<string> g;
//   rep(i, 0, n)
//   {
//     cin >> d[i];
//     // cout << d[i] << endl;
//     g.insert(d[i]);
//     if (i != 0)
//     {
//       x = d[i];
//       y = x[d[i].size() - 1];
//       z = x[0];
//       // cout << "z: " << z << endl;
//       if (z != t)
//       {
//         cout << "No" << endl;
//         return 0;
//       }
//       else
//       {
//         t = y;
//       }
//     }
//     else
//     {
//       s = d[i];
//       t = s[d[i].size() - 1];
//       // v = s[0];
//       // cout << "t: " << t << endl;
//     }
//   }
//   if (g.size() != n)
//   {
//     cout << "No" << endl;
//     return 0;
//   }

//   cout << "Yes" << endl;
//   // cout << d << endl;
// }