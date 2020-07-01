// B - Problem Set
// https://atcoder.jp/contests/code-festival-2017-qualb/tasks/code_festival_2017_qualb_b
// 10^9のフラグ管理はメモリが死ぬ。mapで各要素の個数を計測して計算量を減らす。良問。
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
  lli a, b, c, h, n, m, w, ans = 0, count = 0;
  map<lli, lli> pr;
  cin >> n;
  vlli d(n);
  rep(i, 0, n)
  {
    cin >> d[i];

    count = pr[d[i]];

    count++;
    pr[d[i]] = count;
    count = 0;
  }

  // for (auto x : pr)
  // {
  //   cout << "before: " << x.first << " : " << x.second << endl;
  // }

  cin >> m;
  vlli t(m);
  rep(i, 0, m)
  {
    cin >> t[i];
    count = pr[t[i]];
    count--;
    pr[t[i]] = count;
    if (count < 0)
    {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  // for (auto x : pr)
  // {
  //   cout << x.first << " : " << x.second << endl;
  // }
}
// B - Similar Arrays
// https://atcoder.jp/contests/code-festival-2017-qualc/tasks/code_festival_2017_qualc_b
// 偶奇判定からの法則性観察。
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
//   lli b, c, h, k, n, w, ans = 0, count = 0;
//   string s, t;
//   cin >> n;
//   vi a(n);
//   rep(i, 0, n)
//   {
//     cin >> a[i];
//   }
//   rep(i, 0, n)
//   {
//     if ((a[i] - 1) % 2 == 1)
//     {
//       count++;
//     }
//     if (a[i] % 2 == 1)
//     {
//       count++;
//       ans++;
//     }
//     if ((a[i] + 1) % 2 == 1)
//     {
//       count++;
//     }
//   }
//   int even = n - ans;
//   int odd = ans;
//   cout << pow(3, n) - pow(2, even) << endl;
// }