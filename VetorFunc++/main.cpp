#include <cstdlib>
#include<iostream>
#include<math.h>
#include<iomanip>
#include<string>
using namespace std;
double vprinc[]={};
double vpagar[]={};
double dia[]={};
void controle(double vprinc[], double dia[], double vpagar[]);
double inserir(double vprinc[], double dia[]), 
calcular(double vprinc[], double dia[], double vpagar[]), 
mostrar(double vprinc[], double dia[], double vpagar[]);

double inserir(){
  double dias, pagar;
  cout<<"Insira o valor da percela atrasada: ";
  cin>>pagar;
  vprinc[0] = pagar;
  cout<<"Insira a os dias atrasados: ";
  cin>>dias;
  dia[1] = dias;
  return 0;}

double calcular(){
  vpagar[2] = vprinc[0]; 
  double juros = (dia[1]/30);
  if (juros >= 1){int a = juros; juros = a;
    vpagar[2] *= (juros+100)/100;}
  double multa = (dia[1] * 2)/100;
  vpagar[2] *= multa + 1;
return 0;}

double mostrar(){
  cout<<"Valor original da parcela: R$" << vprinc[0] << "\nDias de atraso: " << dia[1] << "\nNovo valor a ser pago: R$" << vpagar[2]; return 0;}

void controle(){
  int a;
  cout<<"\n1.Inserir parcela atrasada\n2.Calcular novo valor\n3.Mostrar resultados\n4.Sair";
  Menu:
  cout<<"\nEscolha: ";
  cin>>a; cout<<"\n";
  switch(a){
    case 1:inserir(); goto Menu; break;
    case 2:calcular(); goto Menu; break;
    case 3:mostrar(); goto Menu; break;
    case 4:exit(0); break;}}

int main(){ controle(); }