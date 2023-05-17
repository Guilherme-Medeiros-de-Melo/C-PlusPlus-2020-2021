#include <cstdlib>
#include<iostream>
#include<math.h>
#include<iomanip>
#include<string>
using namespace std;
void controle();
int LerN();
bool ParN(int n), PrimoN(int n);
void FatorN(int n), SomaPrimoN(int n);

int LerN(){
  int n;
  cout<<"Insira o valor de N: ";
  cin>> n;
  return n;}

bool ParN(int n){
  if (n % 2 == 0){cout<<"N é Par.\n"; return true;}
  else{cout<<"N é Impar.\n"; return false;}}

bool PrimoN(int n){
  int i, cont;
  for(i = 1; i<=n;i++){
    if(n % i == 0){cont++;}}
  if(cont > 2){cout<<"N não é primo.\n"; return false;}
  else{cout<<"N é primo.\n"; return true;}}

void FatorN(int n){
  int i, fator = n;
  for(i = 1;i<n;i++){fator *= i; }
  cout<<"O fator de "<< n << " é " << fator << endl;}
  
void SomaPrimoN(int n){
int j, soma, numero;
  for (numero = 1; numero<= n;numero++){
    int i = 1, cont = 0;
    for(i = 1; i<=numero;i++){
      if(numero % i == 0){cont++;}}
    if(cont > 2){}
    else if (cont <= 2){cout<< numero << "\n"; soma += numero;}}
    cout<<"Soma: " << soma << "\n";}

void controle(){
  int a, n;
  cout<<"\n1.Ler N\n2.N é Par ou Impar\n3.Fatorial de N\n4.N é Primo\n5.Soma dos Primos até N\n6.Sair\n";
  Menu:
  cout<<"\n Seleção: "; cin>>a; cout<<"\n";
  switch(a){
    case 1:n = LerN(); goto Menu; break;
    case 2:ParN(n); goto Menu; break;
    case 3:FatorN(n); goto Menu; break;
    case 4:PrimoN(n); goto Menu; break;
    case 5:SomaPrimoN(n); goto Menu; break;
    case 6:exit(0); break;}}

int main(){controle();}