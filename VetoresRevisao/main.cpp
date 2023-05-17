#include <iostream>
#include <cstdlib>
#include <math.h>
#include "string"
#include "iomanip"
using namespace std;

int soma(int x, int y){
  if (x == y){return 0;}
  else return(x + soma(x+1, y));}

int fatorialD(int x){
  if (x <= 1){ return 1; }
  else return(x * fatorialD(x-2));}

int fibonacci(int x){
  if (x == 1) return 1;
  else if (x == 0) return 0;
  else return fibonacci(x-1) + fibonacci(x-2);}

int inverte(int v[], int x, int y, int i){
  if (y==x){ return x;}
  else{ v[i] = y;
    cout<<v[i]<<" ";
    return inverte(v, x, y-1, i+1);}}

int binario(int x){
  if (x == 0){return 0;}
  else{ return (x % 2 + 10 * binario(x / 2)); }}

int main(){
  int a, x, y, v[]={};
  system("clear");
  cout<<"1.Soma de inteiros de X a Y\n2.Fatorial Duplo de X\n3.Número X na escala Fibonacci\n4.Lista inversa de números de X a Y\n5.Representação binária de um número X decimal\n6.Sair\n";
  MENU:
  cout<<"Escolha: ";
  cin>>a;
  switch(a){
    case 1: cout<<"X = "; cin>>x;
            cout<<"Y = "; cin>>y;
            cout<<soma(x, y)<<"\n";
      goto MENU; break;
    case 2: cout<<"X = "; cin>>x;
            cout<<fatorialD(x)<<"\n";
      goto MENU; break;
    case 3: cout<<"X = "; cin>>x;
            cout<<fibonacci(x)<<"\n";
      goto MENU; break;
    case 4: cout<<"X = "; cin>>x;
            cout<<"Y = "; cin>>y;
            cout<<inverte(v, x, y, 0)<<"\n";
      goto MENU; break;
    case 5: cout<<"X = "; cin>>x;
            cout<<binario(x)<<"\n";
      goto MENU; break;
    case 6: exit(0); break;}}

