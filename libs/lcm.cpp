#include <bits/stdc++.h>
using ll = int64_t;

ll extgcd(ll a, ll b, ll &x, ll &y) {
  if (b == 0) {
    x = 1, y = 0;
    return a;
  }
  ll g = extgcd(b, a % b, y, x);
  y -= a / b * x;
  return g;
}
