#include <iostream>
#include <cmath>  

using namespace std;

int main() {
  int s01, s02, v1, v2, t;
  float s1, s2, dif;
    
  cin >> s01;
  cin >> v1;
  cin >> s02;
  cin >> v2;
  cin >> t;
   
  s1 = s01 + v1 * t;
  s2 = s02 + v2 * t;
  dif = abs(s1 - s2);

  cout<<dif;
    
}