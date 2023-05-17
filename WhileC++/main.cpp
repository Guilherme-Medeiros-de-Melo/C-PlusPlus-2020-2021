#include "iostream"
#include "cstdlib"
using namespace std;

double lerbase(){ double base;
cout << "\nLer Base:";
cin >> base; return base; }
double leraltura(){ double altura;
cout << "\nLer Altura:";
cin >> altura; return altura; }
double calcarea(double base, double altura)
{ double area;
area = (base * altura)/2; return area; }
void exibir (double base, double altura,
double area )
{
cout << "\nBase..:" << base;
cout << "\nAltura:" << altura;
cout << "\nArea..:" << area;
}

int main ( ) { double base, altura, area, areaT, a;
int tecla = 0;
while (tecla != 4) {
cout << "\nmenu\n1 Ler\n2 Calcular\n3 Exibir\n4 Sair\nItem:";
cin >> tecla;

if (tecla == 1 ) { base=lerbase();
altura=leraltura(); }
else if (tecla ==2 )
{ area=calcarea(base,altura);
cout << "\nCálculo bem sucedido!";
areaT += calcarea(base,altura);
a += 1; }
else if (tecla ==3 )
{ exibir(base, altura, area );
  cout<<"\nMédia.:" << (areaT/a); }
}// fim while
cout << "\nPrograma finalizado!\n"; return 0; }