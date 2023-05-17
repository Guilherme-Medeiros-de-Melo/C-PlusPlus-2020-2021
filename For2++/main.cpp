#include <cstdlib>
#include<iostream>
#include<math.h>
#include<iomanip>
#include<string>
using namespace std;
double ni10(), np10(), npp10(), npxy();
void controle();

double ni10(){
  int i;
  for (i=0; i<=10; i++){cout<< i << endl;} 
  system("sleep 5"); return 0;}

double np10(){
  int i;
  for (i=0; i<=10; i++){
  if(i % 2 == 0){cout<< i << endl;}} 
  system("sleep 5"); return 0;}

double npp10(){
  int i;
  for (i=1; i<=10; i++){
  if(i % 2 == 0){cout<< i << endl;}} 
  system("sleep 5"); return 0;}

double npxy(){
  int i, x, y, soma;
  cout<<"Insira o valor de X e Y: " << endl;
  cin>> x >> y;
  for (i=x; i<=y; i++){
  if(i % 2 == 0){cout<< i <<" "; soma += i;}}
  cout<< "\nSoma: " << soma << endl;
  system("sleep 8"); return 0;}

void controle(){
  int a;
  Menu:
  system("clear");
  cout<<"1.Números inteiros de 0 a 10\n2.Números pares de 0 a 10\n3.Números pares de 1 a 10\n4.Números pares de X a Y\n5. Sair...\n  ";
  cin>> a;
  switch(a){
    case 1:ni10(); goto Menu; break;
    case 2:np10(); goto Menu; break;
    case 3:npp10(); goto Menu; break;
    case 4:npxy(); goto Menu; break;
    case 5:exit(0); break;}}

int main(){controle();}