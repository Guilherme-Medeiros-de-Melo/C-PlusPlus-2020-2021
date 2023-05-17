#include <cstdlib>
#include<iostream>
#include<math.h>
#include<iomanip>
#include<string>
using namespace std;
float a, b, c, delta, x1, x2;
int item;

int main() {
  A:
  system("clear");
  cout<<"\n1. Leitura";
  cout<<"\n2. Cálculo";
  cout<<"\n3. Impressão";
  cout<<"\n4. Saída";
  cout<<"\nEscolha uma função: ";
  cin>>item;
  switch(item){
    case 1: 
    Repete:
    cout<<"\nDigite o valor de A: ";
    cin>>a;
    if(a==0){
      cout<<"\nInsira um valor diferente de 0.";
      goto Repete;}
    cout<<"\nDigite o valor de B: ";
    cin>>b;
    cout<<"\nDigite o valor de C: ";
    cin>>c;
    break;
    case 2: delta = b*b - 4*a*c;
    if(delta==0){
      x1 = (-b)/(2*a);
      cout<<"\nSua raiz é: "<< x1;
      break;}
    else{
      x1 = (-b + sqrt(delta))/(2*a);
      x2 = (-b - sqrt(delta))/(2*a);
      break;}
    case 3: if(delta<0){
      cout<<"\na = "<<a <<"  b = "<<b <<"  c = "<<c <<"  Delta = "<<delta;
      cout<<"\nSem solução no conjunto dos números Reais!";}
    else if(delta==0){
      cout<<"\na = "<<a <<"  b = "<<b <<"  c = "<<c <<"  Delta = "<<delta;
      cout<<"\nA raiz da sua equação é: "<< x1;}
    else{
      cout<<"\na = "<<a <<"  b = "<<b <<"  c = "<<c <<"  Delta = "<<delta;
      cout<<"\nAs raizes da sua equação são: "<< x1<< " e "<< x2;}
    case 4: exit(0);
    break;}
  goto A;}