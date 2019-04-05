#include <iostream>
#include <string>

using namespace std;

int main() {
  string result;
  float nota1, nota2, media;

  cin >> nota1;
  cin >> nota2;

  media = (nota1 + nota2)/2.0;

  if (media >= 7){
    cout << "pass: True!";
  }
  else{
    cout <<  "pass: False!";
  }

return 0;
}
