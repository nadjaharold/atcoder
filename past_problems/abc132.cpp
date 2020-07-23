// C - Divide the Problems
// https://atcoder.jp/contests/abc132/tasks/abc132_c
// Q. 入力をソートして中央+1-中央にて2分できる
// #include <bits/stdc++.h>
// #define lli long long int
// #define uli unsigned long long int
// #define rep(i, m, n) for (lli i = m; i < (n); i++)
// #define repe(i, m, n) for (lli i = m; i <= (n); i++)
// #define ALL(x) (x).begin(), (x).end()
// #define SIZE(x) ((lli)(x).size())
// #define MAX(x) *max_element(ALL(x))
// #define INF 1000000000000 //10^12
// #define MOD 10000007      //10^9+7
// #define SORT(n) sort(n.begin(), n.end())
// #define SORTR(n) sort(n.begin(), n.end(), greater<int>())
// #define REV(n) reverse(n.begin(), n.end())
// #define Vec(K, L, N, S) vector<L> K(N, S)
// #define rt sqrt
// using namespace std;
// using vi = vector<int>;
// using vvi = vector<vi>;
// using vvvi = vector<vvi>;
// using vlli = vector<lli>;
// using vs = vector<string>;
// using ll = long long;
// // vector入力
// template <typename T>
// istream &operator>>(istream &is, vector<T> &vec)
// {
//   for (T &x : vec)
//     is >> x;
//   return is;
// }
// // vector出力
// template <typename T>
// ostream &operator<<(ostream &os, vector<T> &vec)
// {
//   // os << '{';
//   for (int i = 0; i < vec.size(); i++)
//   {
//     os << vec[i] << (i + 1 == vec.size() ? "" : "");
//   }
//   // os << '}';
//   return os;
// }

// int main()
// {
//   ios::sync_with_stdio(false);
//   cin.tie(0);
//   lli a, b, c, h, k, n, w, ans = 0, count = 0;
//   string s, t;
//   cin >> n;
//   vlli d(n);
//   rep(i, 0, n)
//   {
//     cin >> d[i];
//   }
//   SORT(d);
//   cout << d[n / 2] - d[n / 2 - 1] << endl;
// }

// A - Fifty-Fifty

// #pragma GCC optimize("Ofast")
// #include <bits/stdc++.h>
// using namespace std;
// #define out(x) cout << x << '\n'
// #define lli long long int
// #define uli unsigned long long int
// #define rep(i, m, n) for (lli i = m; i < (n); i++)
// #define repe(i, m, n) for (lli i = m; i <= (n); i++)
// #define ALL(x) (x).begin(), (x).end()
// #define SIZE(x) ((lli)(x).size())
// #define MAX(x) *max_element(ALL(x))
// #define MIN(x) *min_element(ALL(x))
// #define _GLIBCXX_DEBUG
// const lli INF = 2147483647;
// const lli MINF = -2147483648;
// const lli LINF = 9223372036854775807;
// const lli MOD = 1000000007; //10^9+7
// const double PI = acos(-1);
// #define SORT(n) sort(n.begin(), n.end())
// #define SORTR(n) sort(n.begin(), n.end(), greater<int>())
// #define REV(n) reverse(n.begin(), n.end())
// #define pb push_back
// #define eb emplace_back
// #define mp make_pair
// using vi = vector<int>;
// using vvi = vector<vi>;
// using vvvi = vector<vvi>;
// using vlli = vector<lli>;
// using vvli = vector<vlli>;
// using vs = vector<string>;
// using vvs = vector<vs>;
// using vb = vector<bool>;
// using vvb = vector<vb>;
// using ll = long long;
// //---------------------------------------------------------------------------------------------------
// // vector入力
// template <typename T>
// istream &operator>>(istream &is, vector<T> &vec)
// {
//   for (T &x : vec)
//     is >> x;
//   return is;
// }
// // vector出力
// template <typename T>
// ostream &operator<<(ostream &os, vector<T> &vec)
// {
//   // os << '{';
//   for (int i = 0; i < vec.size(); i++)
//   {
//     os << vec[i] << (i + 1 == vec.size() ? "" : "");
//   }
//   // os << '}';
//   return os;
// }
// // aよりもbが大きいならばaをbで更新する(更新されたならばtrueを返す)
// template <typename T>
// bool chmax(T &a, const T &b)
// {
//   if (a < b)
//   {
//     a = b; // aをbで更新
//     return true;
//   }
//   return false;
// }
// // aよりもbが小さいならばaをbで更新する(更新されたならばtrueを返す)
// template <typename T>
// bool chmin(T &a, const T &b)
// {
//   if (a > b)
//   {
//     a = b; // aをbで更新
//     return true;
//   }
//   return false;
// }
// //---------------------------------------------------------------------------------------------------

// //---------------------------------------------------------------------------------------------------
// void solve()
// {
//   lli a = 0, b = 0, c = 0, h = 0, n = 0, w = 0, ans = 0, count = 0;
//   string s = "", t = "";
//   vector<pair<lli, lli>> pr;
//   map<lli, lli> mp;
//   set<lli> st;

//   ios::sync_with_stdio(false);
//   cin.tie(nullptr);
//   cin >> s;
//   n = s.size();
//   vlli d(26, 0);
//   rep(i, 0, n)
//   {
//     for (auto c = 'A'; c <= 'Z'; ++c)
//     {
//       if (s[i] == c)
//       {
//         d[count]++;
//       }
//       count++;
//     }
//     count = 0;
//   }
//   rep(i, 0, 26)
//   {
//     if (d[i] == 2)
//       ans++;
//   }
//   if (ans == 2)
//     out("Yes");
//   else
//   {
//     out("No");
//   }
// }

// //---------------------------------------------------------------------------------------------------
// signed main()
// {
//   solve();
// }

