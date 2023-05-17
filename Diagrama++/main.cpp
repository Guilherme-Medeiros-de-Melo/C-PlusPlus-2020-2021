#include <cstdlib>
#include<iostream>
#include<math.h>
#include<iomanip>
#include<string>
using namespace std;
float a, b, c;
bool triangulo = false;
int item;

int main() {
  A:
  system("clear");
  cout<<"\n1. Ler e Exibir";
  cout<<"\n2. Sair\n\n";
  cin>>item;
  switch(item){
    case 1:
    cout<<"\nDigite o valor de A: ";
    cin>>a;
    cout<<"\nDigite o valor de B: ";
    cin>>b;
    cout<<"\nDigite o valor de C: ";
    cin>>c;   
    if(a<b+c && b<a+c && c<a+b){
      triangulo = true;
    }
    if (triangulo == true){
      cout<<"\n Se trata de um Triângulo!";
    }
    else{
      cout<<"\nUma figura qualquer de três lados.";
    }
    cout<<"\nDeseja repetir o programa?"<<"\n\n1. Sim"<<"\n2. Não\n\n";
    cin>>item;
    if(item==1){
      goto A;
    }
    else{
      exit(0);
    }
    break;
    case 2:
    exit(0);
    break;
  }
}