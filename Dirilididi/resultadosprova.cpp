#include <iostream>
#include <string>
#include <sstream>

using namespace std;


int main() {
  int maior = 0, menor = 1000, media, acima = 0, abaixo = 0, soma = 0;
  int nota;
  string aluno;
  string entrada;
  stringstream ss;

  while (true){
    getline(cin, entrada);
    if (entrada == "-") break;

    stringstream ss(entrada);
    ss >> aluno >> nota;

    if (nota > maior) maior = nota;
    if (nota < menor) menor = nota;
    if (nota < 700) abaixo += 1;
    else            acima += 1;
    soma += nota;
  }

  media = soma/(acima +  abaixo);

  cout << "maior: " << maior << endl;
  cout << "menor: " << menor << endl;
  cout << "media: " << media << endl;
  cout << "acima: " << acima << endl;
  cout << "abaixo: " << abaixo;

return 0;
}
