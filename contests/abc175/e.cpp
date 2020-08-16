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

//---------------------------------------------------------------------------------------------------
signed main()
{
  lli a = 0, b = 0, c = 0, h = 0, n = 0, r, k, w = 0, ans = 0, count = 0;
  string s = "", t = "";
  vector<pair<lli, lli>> pr;
  set<lli> st;

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> r >> c >> k;
  vlli R(k), C(k), V(k);
  vector<vlli> z(r, vlli(c, 0));
  rep(i, 0, k)
  {
    cin >> R[i] >> C[i] >> V[i];
    z[R[i] - 1][C[i] - 1] = V[i];
  }

  const lli dx[] = {0, 1};
  const lli dy[] = {1, 0};

  lli sx, sy, gx, gy;
  sx = 0;
  sy = 0;
  gx = r - 1;
  gy = c - 1;

  vector<vector<lli>> dist(3000, vector<lli>(3000, -1));
  dist[sx][sy] = 0; // スタートを 0 に

  vector<vector<lli>> prev_x(3000, vector<lli>(3000, -1));
  vector<vector<lli>> prev_y(3000, vector<lli>(3000, -1));

  queue<pair<lli, lli>> que;
  que.push(mp(sx, sy)); // スタートを push

  while (!que.empty())
  {
    pair<lli, lli> current_pos = que.front(); // キューの先頭を見る (C++ ではこれをしても pop しない)
    lli x = current_pos.first;
    lli y = current_pos.second;
    que.pop(); // キューから pop を忘れずに

    // 隣接頂点を探索
    for (lli direction = 0; direction < 2; ++direction)
    {
      lli next_x = x + dx[direction];
      lli next_y = y + dy[direction];
      if (next_x < 0 || next_x >= 3000 || next_y < 0000 || next_y >= 3000)
        continue; // 場外アウトならダメ

      // まだ見ていない頂点なら push
      if (dist[next_x][next_y] == -1)
      {
        que.push(make_pair(next_x, next_y));
        dist[next_x][next_y] = dist[x][y] + 1LL; // (next_x, next_y) の距離も更新
        prev_x[next_x][next_y] = x;              // どの頂点から情報が伝播して来たか、縦方向の座標をメモ
        prev_y[next_x][next_y] = y;              // どの頂点から情報が伝播して来たか、横方向の座標をメモ
      }
    }
  }
  lli x = gx, y = gy;
  while (x != -1 && y != -1)
  {
    ans += z[x][y];
    // 前の頂点へ行く
    lli px = prev_x[x][y];
    lli py = prev_y[x][y];
    x = px, y = py;
  }
  out("ans: " << ans);
  rep(i, 0, r)
  {
    rep(j, 0, c)
    {
      cout << z[i][j];
    }
    cout << endl;
  }
}