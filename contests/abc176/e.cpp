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
  lli a = 0, b = 0, c = 0, h = 0, n = 0, w = 0, m, ans = 0, count = 0;
  string s = "", t = "";
  vector<pair<lli, lli>> pr;
  map<lli, lli> ma;
  map<lli, lli> ma2;
  set<lli> st;

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> h >> w >> m;
  vlli d(300010, 0), e(300010, 0);
  repe(i, 1, 300010)
  {
    ma[i] = 0;
  }
  rep(i, 0, m)
  {
    cin >> a >> b;
    d[a]++;
    e[b]++;
    ma[a]++;
    ma2[b]++;
    pr.eb(mp(a, b));
  }
  SORTR(d);
  SORTR(e);
  lli A = d[0], B = e[0];
  out(A << "=A, B=" << B);
  lli count2 = 0;
  for (auto x : ma)
  {
    if (x.second == A)
    {
      count = x.first;
    }
  }
  for (auto x : ma2)
  {
    if (x.second == B)
    {
      count2 = x.first;
    }
  }
  // lli ans2 = 0;
  lli x1_ans = 0, y1_ans = 0, z1 = 0;
  lli x2_ans = 0, y2_ans = 0, z2 = 0;
  lli x3_ans = 0, y3_ans = 0, z3 = 0;
  lli x4_ans = 0, y4_ans = 0, z4 = 0;

  for (auto x : pr)
  {
    if (x.first == count)
    {
      x1_ans++;
    }
    else if (x.second == count)
    {
      y1_ans++;
    }
    // out(x.first << " " << x.second);
  }
  z1 = x1_ans + y1_ans;
  for (auto x : pr)
  {
    if (x.first == count)
    {
      x2_ans++;
    }
    else if (x.second == count2)
    {
      y2_ans++;
    }
    // out(x.first << " " << x.second);
  }
  z2 = x2_ans + y2_ans;
  for (auto x : pr)
  {
    if (x.first == count2)
    {
      x3_ans++;
    }
    else if (x.second == count)
    {
      y3_ans++;
    }
    // out(x.first << " " << x.second);
  }
  z3 = x3_ans + y3_ans;
  for (auto x : pr)
  {
    if (x.first == count2)
    {
      x4_ans++;
    }
    else if (x.second == count2)
    {
      y4_ans++;
    }
    // out(x.first << " " << x.second);
  }
  z4 = x4_ans + y4_ans;
  out("count: " << count);
  out("count2: " << count2);
  // out(ans);
  // out("ans2: " << ans2);
  // ans += ans2;
  // out(ans);
  // out("z1: " << z1);
  // out("z2: " << z2);
  // out("z3: " << z3);
  // out("z4: " << z4);
  ans = max(ans, z4);
  ans = max(ans, z1);
  ans = max(ans, z2);
  ans = max(ans, z3);
  // out(max(z4, max(z1, max(z2, z3))));
  out(ans);
}

//---------------------------------------------------------------------------------------------------
signed main()
{
  solve();
}