#include <cstdlib>
#include<iostream>
#include<math.h>
#include<iomanip>
#include<string>
using namespace std;
float salario, tempo, aumento, SA;


int main() {
  system("clear");
  cout << "\nInsira seu salário atual: ";
  cin >> salario;
  cout << "\nInsira quantos anos você atua na empresa: ";
  cin >> tempo;
  if(tempo < 3 && salario <= 1000){
      aumento = 10;
    }
  else if(tempo < 3 && salario > 1000){
      aumento = 5;
      }
  else if(tempo >= 3 && tempo < 5){
      aumento = 6;
      }
  else if(tempo >= 5){
      aumento = 5;
    }
  SA = salario + (salario*(aumento/100));
  cout << "\nSeu novo salário é de: R$" << SA <<endl; 
}