// A - Shrinking
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
bool cmp(lli a, lli b)
{
  return abs(a - x) < abs(b - x);
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  lli a, b, c, h, n, w, ans = 0, count = 0;
  string s, t;
  vector<pair<char, vlli>> pr;
  cin >> t;
  vlli d(26, 0), e(26, 0);
  a = t.size();
  rep(j, 0, a)
  {
    vlli f;
    pr.eb(mp(t[j], f));
    for (char c = 'a'; c <= 'z'; ++c)
    {
      if (t[j] == c)
      {
        d[count]++;
        ans = max(ans, d[count]);
      }
      count++;
    }
    count = 0;
  }
  x = t.size() / 2;
  // sort(pr.begin(), pr.end(), cmp);
  rep(i, 0, 26)
  {
    if (d[i] == ans)
    {
      b = i + 1;
      cout << b << "!" << endl;
    }
  }
  // cout << ans << endl;
  // cout << a << endl;

  for (auto y : pr)
  {
    cout << y.first << " : " << y.second << endl;
  }
}