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
struct UnionFind
{
  vector<lli> par; // par[i]:iの親の番号 (例) par[3] = 2 : 3の親が2

  UnionFind(lli N) : par(N)
  { //最初は全てが根であるとして初期化
    rep(i, 0, N)
    {
      par[i] = i;
    }
  }

  lli root(lli x)
  { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
    if (par[x] == x)
      return x;
    return par[x] = root(par[x]);
  }

  void unite(lli x, lli y)
  {                   // xとyの木を併合
    lli rx = root(x); //xの根をrx
    lli ry = root(y); //yの根をry
    if (rx == ry)
      return;     //xとyの根が同じ(=同じ木にある)時はそのまま
    par[ry] = rx; //xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
  }

  bool same(lli x, lli y)
  { // 2つのデータx, yが属する木が同じならtrueを返す
    lli rx = root(x);
    lli ry = root(y);
    return rx == ry;
  }
};
//---------------------------------------------------------------------------------------------------
void solve()
{
  lli h = 0, n = 0, w = 0, ans = 0, count = 0;
  string s = "", t = "";
  vector<pair<lli, lli>> pr;
  set<lli> st;

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  lli q;
  cin >> n >> q;
  vector<map<lli, lli>> ma(n);
  vlli d(n);
  rep(i, 0, n)
  {
    cin >> d[i];
    d[i]--;
  }
  UnionFind ufd(n);
  rep(i, 0, n) ma[i][d[i]] = 1;

  rep(i, 0, q)
  {
    lli a, b, c;
    cin >> a >> b >> c;
    b--;
    c--;
    if (a == 1)
    {
      if (ufd.same(b, c))
        continue;
      lli x = ufd.root(b);
      lli y = ufd.root(c);
      ufd.unite(x, y);
      if (ma[x].size() < ma[y].size())
        swap(ma[x], ma[y]);
      for (const auto z : ma[y])
      {
        ma[x][z.first] += z.second;
      }
    }
    else
    {
      out(ma[ufd.root(b)][c]);
    }
  }
}

//---------------------------------------------------------------------------------------------------
signed main()
{
  solve();
}