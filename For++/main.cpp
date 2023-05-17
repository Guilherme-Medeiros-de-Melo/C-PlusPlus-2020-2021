#include <cstdlib>
#include<iostream>
#include<math.h>
#include<iomanip>
#include<string>
using namespace std;
void Controle();
double calpar(double n), calimpar(double n), exibir(double n, double totpar, double totimpar), lern();

double calpar(double n){
  int par = 0;
  for(int cont = 0; cont < n; cont++){
    if (cont % 2 == 0){par += cont;}} return par;}

double calimpar(double n){
  int impar = 0;
  for(int cont = 0; cont < n; cont++){
    if (cont % 2 != 0){impar += cont;}} return impar;}

double exibir(double n, double totpar, double totimpar){
  cout<<"\nN: " << n << "\nSoma dos pares antes de n: " << totpar << "\nSoma dos ímpares antes de n: " << totimpar; return 0;}

double lern(){
  double n;
  cout<<"Insira N: ";
  cin>> n;
  return n;}

void Controle(){
  int tecla = 0;
  double totpar, totimpar, n, par, impar;
  while (tecla != 4){
    cout<<"\n\n1.Ler\n2.Calcular\n3.Exibir\n4.Sair\n";
    cin>> tecla;
    switch(tecla){
      case 1: n = lern(); break;
      case 2: totpar = calpar(n); totimpar = calimpar(n); break;
      case 3: exibir(n, totpar, totimpar); break;}}}

int main(){ Controle();}