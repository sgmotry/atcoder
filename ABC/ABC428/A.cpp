#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  int s, a, b, x;
  cin >> s >> a >> b >> x;
  int total = 0;
  int state = 0; // 0 is run, 1 is stop
  while (x) {
    switch (state) {
      case 0:
        if(x >= a) {
          total += s*a;
          x -= a;
        }
        else {
          total += s*x;
          x -= x;
        }
        break;
      case 1:
        if(x >= b) {
          x -= b;
        }
        else {
          x -= x;
        }
        break;
    }
    if (state == 0) state = 1;
    else state = 0;
  }
  cout << total << endl;
  return 0;
}