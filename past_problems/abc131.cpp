// D - Megalomania
// pairで値を保持し、納期までに完了できるか確認。mapだと重複でバグるので注意。pairの場合はソート忘れずに。
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
  lli a, b, c, h = 0, n, w, ans = 0, count = 0;
  string s, t;
  vector<pair<string, pair<lli, lli>>> pr;
  cin >> n;
  vlli d(n);
  vector<pair<lli, lli>> g;
  lli time = 0, cost = 0;
  rep(i, 0, n)
  {
    cin >> a >> b;
    if (b < a)
    {
      cout << "No" << endl;
      return 0;
    }
    g.eb(mp(b, a));
    cost += a;
    time = max(time, b);
  }
  // if (time < cost)
  // {
  //   cout << "No" << endl;
  //   return 0;
  // }
  SORT(g);
  for (auto x : g)
  {
    h += x.second;
    if (h > x.first)
    {
      cout << "No" << endl;
      return 0;
    }
    // cout << "h: " << h << endl;
  }
  cout << "Yes" << endl;
}

// C - Anti-Division
// 巨大な数がCの倍数か、Dの倍数か判定。約数の個数。良問！
// #include <bits/stdc++.h>
// using namespace std;
// #define lli long long int
// #define uli unsigned long long int
// #define rep(i, m, n) for (lli i = m; i < (n); i++)
// #define repe(i, m, n) for (lli i = m; i <= (n); i++)
// #define ALL(x) (x).begin(), (x).end()
// #define SIZE(x) ((lli)(x).size())
// #define MAX(x) *max_element(ALL(x))
// #define MIN(x) *min_element(ALL(x))
// #define _GLIBCXX_DEBUG
// const lli INF = 2147483647;
// const lli MINF = -2147483648;
// const lli LINF = 9223372036854775807;
// const lli MOD = 1000000007; //10^9+7
// const double PI = acos(-1);
// #define SORT(n) sort(n.begin(), n.end())
// #define SORTR(n) sort(n.begin(), n.end(), greater<int>())
// #define REV(n) reverse(n.begin(), n.end())
// #define pb push_back
// #define eb emplace_back
// #define mp make_pair
// #pragma GCC optimize("Ofast")
// using vi = vector<int>;
// using vvi = vector<vi>;
// using vvvi = vector<vvi>;
// using vlli = vector<lli>;
// using vvli = vector<vlli>;
// using vs = vector<string>;
// using vvs = vector<vs>;
// using vb = vector<bool>;
// using vvb = vector<vb>;
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
//   lli a, b, c, d, h, n, w, ans = 1, count = 0;
//   string s, t;
//   vector<pair<string, pair<lli, lli>>> pr;
//   cin >> a >> b >> c >> d;

//   lli sum = b - a + 1;
//   lli x, y, z;
//   lli e = lcm(c, d);

//   if (a % c == 0)
//     x = b / c - a / c + 1;
//   else
//     x = b / c - a / c;

//   if (a % d == 0)
//     y = b / d - a / d + 1;
//   else
//     y = b / d - a / d;

//   if (a % e == 0)
//   {
//     z = b / e - a / e + 1;
//   }
//   else
//   {
//     z = b / e - a / e;
//   }

//   ans = sum - (x + y - z);
//   cout << ans << endl;
// }