#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>
#include <cassert>

// #include <boost/range/algorithm/remove_if.hpp>
// #include <boost/algorithm/string/classification.hpp>
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
template <class T, class U>
std::string replace(std::string s, const T &target, const U &replacement, bool replace_first = 0, bool replace_empty = 0)
{
  using S = std::string;
  using C = std::string::value_type;
  using N = std::string::size_type;
  struct
  {
    auto len(const S &s) { return s.size(); }
    auto len(const C *p) { return std::char_traits<C>::length(p); }
    auto len(const C c) { return 1; }
    auto sub(S *s, const S &t, N pos, N len) { s->replace(pos, len, t); }
    auto sub(S *s, const C *t, N pos, N len) { s->replace(pos, len, t); }
    auto sub(S *s, const C t, N pos, N len) { s->replace(pos, len, 1, t); }
    auto ins(S *s, const S &t, N pos) { s->insert(pos, t); }
    auto ins(S *s, const C *t, N pos) { s->insert(pos, t); }
    auto ins(S *s, const C t, N pos) { s->insert(pos, 1, t); }
  } util;

  N target_length = util.len(target);
  N replacement_length = util.len(replacement);
  if (target_length == 0)
  {
    if (!replace_empty || replacement_length == 0)
      return s;
    N n = s.size() + replacement_length * (1 + s.size());
    s.reserve(!replace_first ? n : s.size() + replacement_length);
    for (N i = 0; i < n; i += 1 + replacement_length)
    {
      util.ins(&s, replacement, i);
      if (replace_first)
        break;
    }
    return s;
  }

  N pos = 0;
  while ((pos = s.find(target, pos)) != std::string::npos)
  {
    util.sub(&s, replacement, pos, target_length);
    if (replace_first)
      return s;
    pos += replacement_length;
  }
  return s;
}
//---------------------------------------------------------------------------------------------------
void solve()
{
}

string RemoveChars(const string &source, const string &chars)
{
  string result = "";
  for (unsigned int i = 0; i < source.length(); i++)
  {
    bool foundany = false;
    for (unsigned int j = 0; j < chars.length() && !foundany; j++)
    {
      foundany = (source[i] == chars[j]);
    }
    if (!foundany)
    {
      result += source[i];
    }
  }
  return result;
}
//---------------------------------------------------------------------------------------------------
signed main()
{
  lli a = 0, b = 0, c = 0, h = 0, n = 0, w = 0, ans = 0, count = 0;
  string s = "", t = "";
  vector<pair<lli, lli>> pr;
  map<lli, lli> ma;
  set<lli> st;

  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cin >> n;
  cin >> s;

  while (count < s.size())
  {
    t.push_back(s[count]);
    if (t.size() >= 3)
    {
      if (t[t.size() - 3] == 'f' && t[t.size() - 2] == 'o' && t[t.size() - 1] == 'x')
      {
        t.pop_back();
        t.pop_back();
        t.pop_back();
      }
    }
    count++;

    // out(count);
  }
  out(t.size());
}