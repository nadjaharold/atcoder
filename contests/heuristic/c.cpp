#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define FOR(i, l, r) for (ll i = (l); i < (r); ++i)
#define REP(i, n) FOR(i, 0, n)
#define REPS(i, n) FOR(i, 1, n + 1)
#define RFOR(i, l, r) for (ll i = (l); i >= (r); --i)
#define RREP(i, n) RFOR(i, n - 1, 0)
#define RREPS(i, n) RFOR(i, n, 1)
#define pb push_back
#define eb emplace_back
#define SZ(x) ((ll)(x).size())
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
template <class T = ll>
using V = vector<T>;
template <class T = ll>
using VV = V<V<T>>;
template <class T>
inline bool chmin(T &a, T b)
{
  if (a > b)
  {
    a = b;
    return true;
  }
  return false;
}
template <class T>
inline bool chmax(T &a, T b)
{
  if (a < b)
  {
    a = b;
    return true;
  }
  return false;
}
inline void Yes(bool b = true) { cout << (b ? "Yes" : "No") << '\n'; }
inline void YES(bool b = true) { cout << (b ? "YES" : "NO") << '\n'; }
inline void err(bool b = true)
{
  if (b)
  {
    cout << -1 << '\n';
    exit(0);
  }
}
template <class T>
inline void fin(bool b = true, T e = 0)
{
  if (b)
  {
    cout << e << '\n';
    exit(0);
  }
}
template <class T>
T Roundup_div(T x, T y) { return (x + (y - 1)) / y; }
const ll INF = 1e18;
const ld eps = 1e-4;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  int d;
  cin >> d;
  int c[26];
  REP(i, 26)
  cin >> c[i];
  int v[d][26];
  REP(i, d)
  REP(j, 26)
      cin >> v[i][j];
  V<> sol;
  V<> loss(26, 0);
  REP(i, d)
  {
    V<pair<ld, int>> score(26, {0.0, 0});
    REP(j, 26)
    score[j] = {v[i][j] + loss[j] + c[j] * eps, j};
    sort(rall(score));
    int r = score[0].second;
    sol.pb(r + 1);
    REP(j, 26)
    {
      if (j == r)
        loss[j] = 0;
      else
        loss[j] += c[j];
    }
  }
  REP(i, d)
  cout << sol[i] << endl;
  
}
