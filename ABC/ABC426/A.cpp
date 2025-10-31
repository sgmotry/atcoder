#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int judge(string s) {
  if (s == "Ocelot") {
    return 0;
  } else if (s == "Serval") {
    return 1;
  }else{
    return 2;
  }
}
int main() {
  string x, y;
  cin >> x >> y;
  if (judge(x) < judge(y)) {
    puts("No");
  } else {
    puts("Yes");
  }
  return 0;
}