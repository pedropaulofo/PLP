#include <iostream>
#include <string>

using namespace std;

int main() {
  string opstring;
  float ent1, ent2;
  char op;
  char ops[4] = {'+', '-', '/', '*'};
  bool check = false;

  cin >> opstring;
  op = opstring[0];

  for(int i=0; i<4; i++){
    if (op == ops[i]) check = true;
  }

  if (opstring.length() != 1 || !check) cout << "ENTRADA INVALIDA" << endl;

  cin >> ent1;
  cin >> ent2;

  if(op == '+') cout << ent1 + ent2;
  else if (op == '-') cout << ent1 - ent2;
  else if (op == '*') cout << ent1 * ent2;
  else if (op == '/' && ent2 == 0.0) cout << "ERRO";
  else if (op == '/') cout << ent1 / ent2;

return 0;
}
