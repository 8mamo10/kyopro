#include <bits/stdc++.h>
using namespace std;

// #include <atcoder/modint>
// using namespace atcoder;
// using mint = modint998244353;

using ll = long long;
// using ull = unsigned long long;
// long long INF = 1000000000000000000;

int main()
{
  ll N;
  cin >> N;
  if (N == 1)
  {
    cout << "Yes" << endl;
    return 0;
  }
  if (N % 2 == 0)
  {
    cout << "Yes" << endl;
    return 0;
  }
  if (N % 3 == 0)
  {
    cout << "Yes" << endl;
    return 0;
  }
  cout << "No" << endl;
  return 0;
}