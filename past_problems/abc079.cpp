// C - Train Ticket
// https://atcoder.jp/contests/abc079/tasks/abc079_c
// Q. 文字列,charの数値変換と場合分け
// #include <bits/stdc++.h>
// #define lli long long int
// #define uli unsigned long long int
// #define rep(i, m, n) for (lli i = m; i < (n); i++)
// #define repe(i, m, n) for (lli i = m; i <= (n); i++)
// #define ALL(x) (x).begin(), (x).end()
// #define SIZE(x) ((lli)(x).size())
// #define MAX(x) *max_element(ALL(x))
// #define INF 1000000000000 //10^12
// #define MOD 10000007      //10^9+7
// #define SORT(n) sort(n.begin(), n.end())
// #define SORTR(n) sort(n.begin(), n.end(), greater<int>())
// #define REV(n) reverse(n.begin(), n.end())
// #define Vec(K, L, N, S) vector<L> K(N, S)
// #define rt sqrt
// #define pb push_back
// #define eb emplace_back
// using namespace std;
// using vi = vector<int>;
// using vvi = vector<vi>;
// using vvvi = vector<vvi>;
// using vlli = vector<lli>;
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

// int main()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(0);
//   lli a, b, c, d, n, w, ans = 0, count = 0;
//   string s, t;
//   cin >> s;
//   a = (int)(s[0]) - 48;
//   b = (int)(s[1]) - 48;
//   c = (int)(s[2]) - 48;
//   d = (int)(s[3]) - 48;
//   vlli e = {a, b, c, d};
//   SORTR(e);
//   if (a + b + c + d == 7)
//   {
//     cout << a << '+' << b << '+' << c << '+' << d << "=7" << endl;
//   }
//   else if (a + b + c - d == 7)
//   {
//     cout << a << '+' << b << '+' << c << '-' << d << "=7" << endl;
//   }
//   else if (a + b - c - d == 7)
//   {
//     cout << a << '+' << b << '-' << c << '-' << d << "=7" << endl;
//   }
//   else if (a + b - c + d == 7)
//   {
//     cout << a << '+' << b << '-' << c << '+' << d << "=7" << endl;
//   }
//   else if (a - b + c - d == 7)
//   {
//     cout << a << '-' << b << '+' << c << '-' << d << "=7" << endl;
//   }
//   else if (a - b + c + d == 7)
//   {
//     cout << a << '-' << b << '+' << c << '+' << d << "=7" << endl;
//   }
//   else if (a - b - c - d == 7)
//   {
//     cout << a << '-' << b << '-' << c << '-' << d << "=7" << endl;
//   }
//   else
//   {
//     cout << a << '-' << b << '-' << c << '+' << d << "=7" << endl;
//   }
// }

// B - Lucas Number

#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define uli unsigned long long int
#define rep(i, m, n) for (lli i = m; i < (n); i++)
#define repe(i, m, n) for (lli i = m; i <= (n); i++)
#define ALL(x) (x).begin(), (x).end()
#define SIZE(x) ((lli)(x).size())
#define MAX(x) *max_element(ALL(x))
#define _GLIBCXX_DEBUG
const lli INF = 2147483647;
const lli MINF = -2147483648;
const lli LINF = 9223372036854775807;
const lli MOD = 1000000007; //10^9+7
const long double PI = acos(-1);
#define SORT(n) sort(n.begin(), n.end())
#define SORTR(n) sort(n.begin(), n.end(), greater<int>())
#define REV(n) reverse(n.begin(), n.end())
#define Vec(K, L, N, S) vector<L> K(N, S)
#define rt sqrt
#define pb push_back
#define ppb pop_back
#define eb emplace_back
#pragma GCC optimize("Ofast")
using vi = vector<int>;
using vvi = vector<vi>;
using vvvi = vector<vvi>;
using vlli = vector<lli>;
using P = pair<lli, lli>;
// vector<P> vp;
// vp.emplace_back(a[i], b[i]);
using vs = vector<string>;
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
  lli a = 0, b = 0, c, h, k, n, w, ans = 0, count = 0;
  string s, t;
  cin >> n;
  a = 2;
  b = 1;
  ans = 2;
  vlli d;
  d.pb(a);
  d.pb(b);
  rep(i, 0, n)
  {
    ans = a + b;
    a = b;
    b = ans;
    d.pb(ans);
  }
  cout << d[n] << endl;
}