#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main() {
  string s;
  cin >> s;
  s.erase(s.length()/2, 1);
  cout << s << endl;
  return 0;
}