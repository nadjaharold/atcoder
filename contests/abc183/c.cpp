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
  lli a = 0, b = 0, c = 0, h = 0, n = 0, k, w = 0, ans = 0, count = 0;
  string s = "", t = "";
  vector<pair<lli, lli>> pr;
  map<lli, lli> ma;
  set<lli> st;

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> n >> k;
  vvli d(n, vlli(n));
  vlli e(n);
  rep(i, 0, n)
  {
    rep(j, 0, n)
    {
      cin >> d[i][j];
    }
  }
  rep(i, 0, n)
  {
    e[i] = i;
  }
  SORT(e);
  // for (lli bit = 0; bit < (1 << n); ++bit)
  // {
  //   count = 0;
  //   for (int i = 0; i < e.size(); ++i)
  //   {
  //     // for (int j = 0; j < n; ++j)
  //     // {
  //     //   if (bit & (1 << i))
  //     //   { // i が S に入っているなら足す
  //     //     count += d[i][j];
  //     //   }
  //     // }
  //     if (bit & (1 << i))
  //     { // i が S に入っているなら足す
  //       count += e[i];
  //     }
  //   }
  //   if (count == k)
  //     ans++;
  // }
  // lli sum = 0;
  // while (count != n)
  // {
  //   sum = 0;
  //   rep(i, 0, n)
  //   {
  //     if (d[count][i] != 0)
  //     {
  //       sum += d[count][i];
  //     }
  //   }
  //   if (sum == k)
  //     ans++;
  //   count++;
  // }
  do
  {
    if (e[0] != 0)
      break;
    ll cost = 0;
    lli before = -1;
    for (lli now : e)
    {
      if (before >= 0)
        cost += d[before][now];
      before = now;
    }
    cost += d[before][0];
    if (cost == k)
      ans++;
  } while (next_permutation(e.begin(), e.end()));

  out(ans);
}

//---------------------------------------------------------------------------------------------------
signed main()
{
  solve();
}