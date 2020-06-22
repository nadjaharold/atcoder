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
  lli a, b, c, h, n, w, ans = 0, count = 0, tmp = 1;
  string s, t = "";
  vector<pair<string, pair<lli, lli>>> pr;
  cin >> n;
  ans = n;
  count = to_string(n).size();
  // cout << count << endl;
  while (tmp <= n)
  {
    b = ans % 26;
    // cout << b << endl;
    if (b == 1)
      t += 'a';
    if (b == 2)
      t += 'b';
    if (b == 3)
      t += 'c';
    if (b == 4)
      t += 'd';
    if (b == 5)
      t += 'e';
    if (b == 6)
      t += 'f';
    if (b == 7)
      t += 'g';
    if (b == 8)
      t += 'h';
    if (b == 9)
      t += 'i';
    if (b == 10)
      t += 'j';
    if (b == 11)
      t += 'k';
    if (b == 12)
      t += 'l';
    if (b == 13)
      t += 'm';
    if (b == 14)
      t += 'n';
    if (b == 15)
      t += 'o';
    if (b == 16)
      t += 'p';
    if (b == 17)
      t += 'q';
    if (b == 18)
      t += 'r';
    if (b == 19)
      t += 's';
    if (b == 20)
      t += 't';
    if (b == 21)
      t += 'u';
    if (b == 22)
      t += 'v';
    if (b == 23)
      t += 'w';
    if (b == 24)
      t += 'x';
    if (b == 25)
      t += 'y';
    if (b == 0)
    {
      t += 'z';
      ans /= 26;
      ans -= 1;
      tmp *= 26;
      h++;
      continue;
    }
    ans /= 26;

    tmp *= 26;
  }
  REV(t);
  set<lli> g;
  rep(i, 1, 20)
  {
    w = pow(26, i);
    g.insert(w);
  }
  if (g.count(n))
  {
    rep(i, 1, t.size())
    {
      cout << t[i];
    }
    cout << endl;
  }
  else if (h >= 2)
  {
    rep(i, 1, t.size())
    {
      cout << t[i];
    }
    cout << endl;
  }
  else
  {
    cout << t << endl;
  }
}