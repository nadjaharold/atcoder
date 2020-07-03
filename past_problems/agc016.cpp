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
  lli a, b, h, n, w, ans = 0, count = 0;
  string s, t;
  vector<pair<char, vlli>> pr;
  cin >> t;
  vlli d(26, 0), e;
  vvli g(26, vlli(0, 0));
  a = t.size();
  vector<vector<char>> f(a, vector<char>(0));
  rep(j, 0, a)
  {
    if (j == a - 1)
    {
      f[j].pb(t[j]);
    }
    else
    {
      f[j].pb(t[j]);
      f[j].pb(t[j + 1]);
    }
  }
  rep(i, 0, a)
  {
    for (char c = 'a'; c <= 'z'; ++c)
    {
      if (t[i] == c)
      {
        d[count]++;
        ans = max(ans, d[count]);
        g[count].pb(i + 1);
      }
      count++;
    }
    count = 0;
  }
  lli diff = 0, sum = 0;
  rep(i, 0, 26)
  {
    if (d[i] == ans)
    {
      b = i + 1;
      e.pb(b);
    }
    rep(j, 0, g[i].size() - 1)
    {
      diff += g[i][j + 1] - g[i][j];
    }
    cout << "diff: " << i + 1 << " : " << diff << endl;
    sum = max(sum, diff);
    diff = 0;
  }
  rep(i, 0, 26)
  {
    rep(j, 0, g[i].size())
    {
      diff += g[i][j + 1] - g[i][j];
    }
    if (diff == sum)
    {
      w = i + 1;
      // cout << w << endl;
    }
    // cout << "diff: " << diff << endl;
    diff = 0;
    // cout << "g: " << g[i] << endl;
  }
  rep(i, 0, 26)
  {
    rep(j, 0, g[i].size())
    {
      cout << "g: " << i + 1 << " : " << g[i][j] << endl;
    }
  }
}