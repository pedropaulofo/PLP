#include iostream
#include string

using namespace std;

int main() {
  string menor, maior, pal;

  cin  pal;
  menor = pal;
  maior = pal;

  for(int i = 0; i  4; i++){
    cin  pal;

    if (pal.length()  menor.length()) menor = pal;
    if (pal.length()  maior.length()) maior = pal;
  }

  cout  menor  endl;
  cout  maior;

return 0;
}
