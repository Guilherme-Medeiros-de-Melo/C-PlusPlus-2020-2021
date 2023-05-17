#include <cstdlib>
#include<iostream>
#include<math.h>
#include<iomanip>
#include<string>
using namespace std;
void controle(int idade[], string situacao[], string nome[]);

int l=0;
int idade[10]={};
string nome[10]={}, situacao[10]={};

int registro(int idade[], string situacao[], string nome[], int l), 
exiest(int idade[], string situacao[], string nome[], int l), 
exiefe(int idade[], string situacao[], string nome[], int l), 
eximen(int idade[], string situacao[], string nome[], int l);

int registro(){
  string n, sn;
  int i, s;
  Menu:
  cout<<"Insira o nome: ";
  cin>> n;
  cout<<"Insira a situação (1.Estagiário, 2.Efetivo): ";
  S:
  cin>> s;
  if(s > 2){
    cout<<"Número inválido, insira novamente"; goto S;}
  cout<<"Insira a idade: ";
  cin>> i;
  nome[l]= n;
  if(s == 1){situacao[l]="Estagiário";};
  if(s == 2){situacao[l]="Efetivo";};
  idade[l]=i;
  l++;
  cout<<"Deseja adicionar outro funcionário? (S / N) ";
  cin>> sn;
  cout<<"\n";
  if (sn == "S" || sn == "s"){goto Menu;}
  else{return 0;}}

int exiest(){
  int i = 0;
  for(i = 0; i<l;i++){
    if (situacao[i] == "Estagiário"){
      cout<<"Nome: " << nome[i] << " Situação: " << situacao[i] << " Idade: " << idade[i] << "\n";}} return 0;}

int exiefe(){
  int i = 0;
  for(i = 0; i<l;i++){
    if (situacao[i] == "Efetivo"){
      cout<<"Nome: " << nome[i] << " Situação: " << situacao[i] << " Idade: " << idade[i] << "\n";}} return 0;}

int eximen(){
  int i = 0;
  for(i = 0; i<l;i++){
    if (idade[i] < 18){
      cout<<"Nome: " << nome[i] << " Situação: " << situacao[i] << " Idade: " << idade[i] << "\n";}} return 0;}

void controle(){
  int a;
  system("clear");
  cout<<"1.Registrar empregado\n2.Exibir Estagiários\n3.Exibir Efetivos\n4.Exibir Menores de Idade\n5.Sair";
  Menu:
  cout<<"\n";
  cin>> a;
  switch(a){
    case 1:registro(); goto Menu; break;
    case 2:exiest(); goto Menu; break;
    case 3:exiefe(); goto Menu; break;
    case 4:eximen(); goto Menu; break;
    case 5:exit(0); break;}}

int main(){controle();}