# include <iostream>   // biblioteca necessária para a função std::cout

using namespace std;

int main()
{
   int red, green, blue;
    
    cin >> red;
    cin >> green;
    cin >> blue;

   if ((red >= 128) && (green >= 128) && (blue >= 128)){
   		cout << "BRANCO";
   }
   else{
       cout << "PRETO";
   }
}