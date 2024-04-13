/*Esercizio 16 pagina A11_18
GALDINI MATTEO 3CIN
*/

#include <iostream>

#include "Poste.cpp"

using namespace std;


int main(){
    Poste prova = Poste(1000);
    string s;
    int c = 0;
    int end = 0;
    int i = 1;
    int i_finanze = 1;
    int i_spedizioni = 1; 
    int i_ricezioni = 1;
    int i_primario = 1;
    string s_primario = "NO";


    while(end != 1){

        cout<<"Premere [1] per inserirsi in una coda"<<endl<<"Premere [2] per vedere il prossimo numero dalla coda"<<endl<<"Premere [3] per vedere una coda"<<endl<<"Premere [4] se si ha la priorità"<<endl;
        cin>>c;


        if (c == 1){
            cout<<"Premere F per inserirsi nella coda Finanze, S per la coda spedizioni, R per la coda ricezioni: ";
            cin>>s;
            if (s == "F"){
                prova.Enter(i_finanze, s);
                i_finanze++;
            }
            if (s == "S"){
                prova.Enter(i_spedizioni, s);
                i_spedizioni++;
            }
            if (s == "R"){
                prova.Enter(i_ricezioni, s);
                i_ricezioni++;
            }
    
            cout<<"Premere [1] per uscire o qualsiasi altro numero per continuare: ";
            cin>>end;
            cout<<endl;
        }
        if (c == 2){
            cout<<"Premere F per vedere il prossimo da chiamare nella coda finanze, S per il prossimo da chiamare nella coda spedizioni e R per il prossimo da chiamare nella coda ricezioni: ";
            cin>>s;
            prova.Exit(s, s_primario);
            cout<<"Premere [1] per uscire o qualsiasi altro numero per continuare: ";
            cin>>end;
            cout<<endl;
        } 
        if (c == 3){
            cout<<"Premere F per vedere la coda finanze, S per la coda spedizioni e R per la coda ricezioni: ";
            cin>>s;
            prova.print(s);
            cout<<"Premere [1] per uscire o qualsiasi altro numero per continuare: ";
            cin>>end;
            cout<<endl;
        }
        if (c == 4){
            cout<<"Sei nella lista primaria, hai la precedenza, sei il numero "<<i_primario<<endl;
            cout<<"Il prossimo numero nella lista finanze è: "<<i_primario<<endl;
        }
    }



   // prova.print(s);
}