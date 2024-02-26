/* Prove con struct
GALDINI MATTEO 3CIN*/


#include <iostream>

using namespace std;

/* Il tipo di dato "struct" serve per memorizzare dati di tipi uguali o diversi
** nella stessa struttura, per poter accedere a ciascuno dei membri 
** attraverso il nome unico della struttura.
*/

struct persona{
  string nome1;
  int mese_di_nascita;
  int anno_di_nascita;
};

typedef struct ciao{
  int c1;
  int c2;
}CIAO;

typedef int ciaone;

typedef struct {int c1; int c2;} C;

int main()
{
  C caratteristica; // Usa una variabile
  caratteristica.c1; // Usa le caratteristiche di C
  caratteristica.c2;
  ciaone ciaooo = 120; // Ora gli interi si chiamano ciaone
  CIAO ciaoo; // Versione alternativa dello struct semplice
  struct persona nm, nm2; // Struct semplice
  cin>>nm.nome1;
  cin>>nm.mese_di_nascita;
  cin>>nm.anno_di_nascita;
  cin>>nm2.nome1;
  cin>>nm2.mese_di_nascita;
  cin>>nm2.anno_di_nascita;
  nm.anno_di_nascita = 2024 - nm.anno_di_nascita;
  nm2.anno_di_nascita = 2024 - nm2.anno_di_nascita;
  cout<<"Il primo nome è: "<<nm.nome1<<endl<<"Il secondo nome è: "<<nm2.nome1<<endl;
  cout<<nm.nome1<<" quest'anno compie "<<nm.anno_di_nascita<<" anni"<<endl<<nm2.nome1<<" quest'anno compie "<<nm2.anno_di_nascita<<" anni"<<endl;
  return 0;
}
