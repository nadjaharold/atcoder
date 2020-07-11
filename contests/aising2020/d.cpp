#include <bits/stdc++.h>
using namespace std;
#define BITCOUNT(x) __builtin_popcount(x)
using ll = long long;
//---------------------------------------------------------------------------------------------------
signed main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n;
  cin >> n;
  string x;
  cin >> x;
  for (ll i = 0; i < n; i++)
  {
    string s = x;
    if (s[i] == '1')
    {
      s[i] = '0';
    }
    else
    {
      s[i] = '1';
    }
    const char *y = s.data();     // string型をchar配列に変換。不要かも
    ll xi = stoll(y, nullptr, 2); // 2進数文字列を10進数の整数(long long)に変換。
    ll count = 0;
    while (xi > 0)
    {
      ll c_one = BITCOUNT(xi); // 該当の整数を2進数に変換した場合に1が何個含まれるか計測。
      xi %= c_one;
      count++;
    }
    cout << count << endl;
  }
}
