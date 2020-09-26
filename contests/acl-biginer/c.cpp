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
  vector<int> par; // par[i]:iの親の番号 (例) par[3] = 2 : 3の親が2

  UnionFind(int N) : par(N)
  { //最初は全てが根であるとして初期化
    rep(i, 0, N)
    {
      par[i] = i;
    }
  }

  int root(int x)
  { // データxが属する木の根を再帰で得る：root(x) = {xの木の根}
    if (par[x] == x)
      return x;
    return par[x] = root(par[x]);
  }

  void unite(int x, int y)
  {                   // xとyの木を併合
    int rx = root(x); //xの根をrx
    int ry = root(y); //yの根をry
    if (rx == ry)
      return;     //xとyの根が同じ(=同じ木にある)時はそのまま
    par[rx] = ry; //xとyの根が同じでない(=同じ木にない)時：xの根rxをyの根ryにつける
  }

  bool same(int x, int y)
  { // 2つのデータx, yが属する木が同じならtrueを返す
    int rx = root(x);
    int ry = root(y);
    return rx == ry;
  }
};
//---------------------------------------------------------------------------------------------------
void solve()
{
  lli a = 0, b = 0, c = 0, h = 0, n = 0, m = 0, w = 0, ans = 0, count = 0;
  string s = "", t = "";
  vector<pair<lli, lli>> pr;
  map<lli, lli> ma;
  set<lli> st;

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> n >> m;
  UnionFind tree(n);

  // vvli d(n, vlli(0, 0));
  rep(i, 0, m)
  {
    cin >> a >> b;
    tree.unite(a - 1, b - 1);

    // pr.emplace_back(mp(a, b));
    // d[a - 1].push_back(b);
  }
  for (int i = 0; i < n; i++)
  {
    if (!tree.same(0, i))
    {
      tree.unite(0, i);
      count++;
    }
  }
  out(count);
  // lli count2 = 0;
  // rep(i, 0, n)
  // {
  //   if (d[i].size() == 0 && !st.count(i))
  //   {
  //     count++;
  //     out(i << "!");
  //   }
  //   else
  //   {

  //     rep(j, 0, d[i].size())
  //     {
  //       if (!st.count(i))
  //       {
  //         if (!st.count(d[i][j] - 1))
  //         {
  //           st.insert(d[i][j] - 1);
  //           if (count2 == 0)
  //           {
  //             count2++;
  //           }
  //         }
  //       }
  //       out(i << "" << d[i][j]);
  //     }
  //     count += count2;
  //     count2 = 0;
  //   }
  // }
  // ans = count - 1;
  // out(ans);
}
// SORT(pr);
// for (auto x : pr)
// {
//   if (!st.count(x.second))
//   {
//     ans++;
//     st.insert(x.second);
//   }
//   else
//   {
//   }
// }
// rep(i, 0, d.size())
// {
//   if (d[i] == 0)
//   {
//     ans++;
//     // out("d[i]" << i);
//   }
// }

//---------------------------------------------------------------------------------------------------
signed main()
{
  solve();
}

/*
5 3
1 2
4 5
2 4

*/