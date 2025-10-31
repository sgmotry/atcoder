#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  while (n--) {
    if (m-- > 0) {
      puts("OK");
    } else {
      puts("Too Many Requests");
    }
  }
  return 0;
}