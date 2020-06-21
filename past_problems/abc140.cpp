// C - Maximal Value

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
  lli a, b, c, h, k, n, w, ans = 0, count = 0;
  string s, t;
  cin >> n;
  vlli d(n - 1), e;
  rep(i, 0, n - 1)
  {
    cin >> d[i];
  }
  ans += d[0];
  rep(i, 1, n - 1)
  {
    c = min(d[i - 1], d[i]);
    ans += c;
  }
  ans += d[n - 2];

  cout << ans << endl;
}

// https://atcoder.jp/contests/abc140/tasks/abc140_b
//

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//   int n, ans = 0;
//   cin >> n;
//   vector<int> a(n);
//   vector<int> b(n);
//   vector<int> c(n - 1);
//   for (int i = 0; i < n; i++)
//   {
//     cin >> a[i];
//   }
//   for (int i = 0; i < n; i++)
//   {
//     cin >> b[i];
//     ans += b[i];
//   }
//   for (int i = 0; i < n - 1; i++)
//   {
//     cin >> c[i];
//   }
//   for (int i = 0; i < n - 1; i++)
//   {
//     if (a[i + 1] == a[i] + 1)
//     {
//       ans += c[a[i] - 1];
//     }
//   }
//   cout << ans << endl;
// }