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
string sL[300];
lli h, w, sx, sy, gx, gy;
lli dy[4] = {0, 1, 0, -1};
lli dx[4] = {1, 0, -1, 0};
vector<vector<lli>> bfs(lli iy, lli ix, vector<vector<lli>> dist)
{
  queue<pair<lli, lli>> que;
  que.push({iy, ix});
  dist[iy][ix] = 0;
  while (!que.empty())
  {
    lli y = que.front().first;
    lli x = que.front().second;
    que.pop();
    rep(i, 0, 4)
    {
      lli ny = y + dy[i];
      lli nx = x + dx[i];
      if (ny < 0 || h <= ny || nx < 0 || w <= nx)
        continue;
      if (dist[ny][nx] != -1 || sL[ny][nx] == '#')
        continue;
      dist[ny][nx] = dist[y][x] + 1;
      que.push({ny, nx});
    }
  }
  return dist;
}
//---------------------------------------------------------------------------------------------------
void solve()
{
  pair<lli, lli> pr;
  map<lli, lli> ma;
  set<lli> st;

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  lli n, m;
  string s, t;
  cin >> n >> m;
  vlli d(n);
  vs s(n);
  rep(i, 0, n)
  {
    cin >> s[i];
    t = s[i];
    rep(j, 0, m)
    {
      if (t[j] == '.')
        sy = i, sx = j;
      // if (t[j] == 'G')
      //   gy = i, gx = j;
    }
  }

  rep(i, 0, n){
    rep(j, 0, m) {
      
    }
  }

      out(n);
}

//---------------------------------------------------------------------------------------------------
signed main()
{
  solve();
}