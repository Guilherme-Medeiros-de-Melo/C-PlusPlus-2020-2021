#include <iostream>
#include<math.h>
#include<string.h>
using namespace std;

int main() {
  system("clear");
  setlocale(LC_ALL, "Portuguese");
  float larg=0, compr=0, altura=0, volume=0;
  cout << "\n\nDigite a largura do retângulo(cm): " ; 
  cin >> larg;
  cout << "\n\nDigite a altura(cm): "; 
  cin >> altura;
  cout << "\n\nDigite o comprimento(cm): " ; 
  cin >> compr;
  volume = compr * altura * larg;
  cout << "\n O volume do retângulo é de: " << volume << " cm³";
}