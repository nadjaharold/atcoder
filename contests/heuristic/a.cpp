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

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  lli a, b = 0, D, h, n, w, ans = 0, count = 0, res = 0, sum = 0, origin = 0;
  cin >> D;
  vlli c(26), r(26), f(26, 0), A, B;
  // vvli s(D, vlli(26));
  set<lli> g;

  rep(i, 0, 26)
  {
    cin >> c[i];
    origin += c[i];
  }
  rep(i, 0, D)
  {
    b++;
    w = 0;
    ans = 0;
    // count = 0;
    vector<pair<lli, lli>> pr;
    repe(j, 1, 26)
    {
      cin >> a;
      if (g.count(j))
      {
        w = f[j - 1];
        count = c[j - 1] * (b - w);
      }
      else
      {
        count = c[j - 1] * (b - 0);
      }
      // a -= count;
      pr.eb(make_pair(-a, j));
    }
    SORT(pr);
    ans = pr[0].first;
    res += -ans;
    res -= count;
    A.pb(res);
    sum = max(sum, res);
    for (auto x : pr)
    {
      if (x.first == ans)
      {
        // cout << x.second << endl;
        g.insert(x.second);
        f[x.second - 1] = b;
        origin -= c[x.second - 1];
        B.pb(origin);
        break;
      }
    }
  }
  lli t;
  rep(i, 0, D)
  {
    cin >> t;
  }
  rep(i, 0, A.size())
  {
    // cout << A[i] - B[i] << endl;
    cout << A[i] << endl;
  }
}