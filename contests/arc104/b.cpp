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
  lli a = 0, b = 0, c = 0, h = 0, n = 0, w = 0, ans = 0, count = 0;
  string s = "", t = "", s1 = "AT", s2 = "TA", s3 = "CG", s4 = "GC", s5 = "AGCT", s6 = "TCGA", s7 = "ATAT", s8 = "TATA", s9 = "GCGC", s10 = "CGCG", s11 = "ACGT", s12 = "TGCA", s13 = "CATG", s14 = "CTAG", s15 = "GATC", s16 = "GTAC", z = "";
  vector<pair<lli, lli>> pr;
  map<lli, lli> ma;
  set<lli> st;

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> n;
  cin >> s;
  vlli d(n);
  rep(i, 0, n)
  {
    z = s.substr(i, 2);
    if (z == s1 || z == s2 || z == s3 || z == s4)
    {
      count++;
      for (lli j = 2; i + j <= n; j += 2)
      {
        string z1 = s.substr(i + j, 2);
        if (z1 != s1 || z1 != s2 || z1 != s3 || z1 != s4)
        {
          out("i: " << i << " j: " << j << z1);
          continue;
        }
        count++;
        out("i: " << i << " j: " << j << z1);
      }
    }
  }
  // if (s.substr(i, 4) == s5 || s.substr(i, 4) == s6 || s.substr(i, 4) == s7 || s.substr(i, 4) == s8 || s.substr(i, 4) == s9 || s.substr(i, 4) == s10 || s.substr(i, 4) == s11 || s.substr(i, 4) == s12 || s.substr(i, 4) == s13 || s.substr(i, 4) == s14)
  // {
  //   count++;
  // }
  // for (lli j = 2; i + j <= n; j += 2)
  // {
  //   z = s.substr(i, j);
  //   if (z == s1 || z == s2 || z == s3 || z == s4 || z == s5 || z == s6 || z == s7 || z == s8 || z == s9 || z == s10 || z == s11 || z == s12 || z == s13 || z == s14 || z == s15 || z == s16)
  //   {
  //     count++;
  //     // out("i: " << i << " j: " << j);
  //   }
  //   // ans++;
  //   if (j > 4)
  //   {
  //     break;
  //   }
  // }

  out(count);
  // out("kaisuu: " << ans);
}

//---------------------------------------------------------------------------------------------------
signed main()
{
  solve();
}