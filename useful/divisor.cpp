// https://atcoder.jp/contests/abc172/tasks/abc172_d
// 約数の個数全列挙 計算量はNlogN。1≤N≤10^7も間に合う。
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll n, ans = 0;
  cin >> n;
  vector<ll> d(n + 1);
  for (ll i = 1; i <= n; ++i)
  {
    for (ll j = i; j <= n; j += i)
    {
      d[j]++;
    }
  }
  for (ll i = 1; i <= n; ++i)
  {
    ans += d[i] * i;
    // cout << d[i] << endl;
  }

  cout << ans << endl;
}

// 4
// 0 1 2 2 3 のように出力される

// 下記も参考になる。
// a<=n<=b (MAX:10^18)の範囲に含まれる CでもDでも割り切れない数値の個数
// https://atcoder.jp/contests/abc131/tasks/abc131_c
