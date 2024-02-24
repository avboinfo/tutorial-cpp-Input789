/* Prima introduzione alle classi
Galdini Matteo 17/02/2024*/


#include <iostream>

using namespace std;


const int L = 3;

class Tris_classe{
    public: // Permette di utilizzare gli attributi delle variabili al di fuori delle classi
        string griglia [L][L]; // Variabile nella classe
    
        void nuovaGriglia (){
            for (int i = 0; i<L; i++){
                for (int j = 0; j<L; j++){
                    griglia[i][j] = "0"; // Riempimento griglia con zeri
                }
            }

        }

        /*void piazzaX(){
            int i = 0; int j = 0;
            cin>>i;
            cin>>j;
            while (i > L || j > L){
                cin>>i;
                cin>>j;
            }

        }*/

        void stampaGioco(){
                for (int i = 0; i<L; i++){
                    for (int j = 0; j<L; j++){
                        cout<<griglia[i][j]<<"\t";
                    }
                    cout<<endl;
                }
            }

        bool piazzaX(int x, int y){
            if (x > 2 || x < 0){ // Oltre i valori possibili
                return false;
            }
            if (y > 2 || y < 0){ // Oltre i valori possibili
                return false;
            }
            if (griglia[y][x] != "0"){ // Cella già occupata
                return false;
            }
            griglia[y][x] = "X";
            return true;


        }

        bool piazzaO(int x, int y){
        if (x > 2 || x < 0){ // Oltre i valori possibili
                return false;
            }
            if (y > 2 || y < 0){ // Oltre i valori possibili
                return false;  
            }
            if (griglia[y][x] != "0"){ // Cella già occupata
                return false;
            }
            griglia[y][x] = "O";
            return true;
        }

        int vincenteGioco(int x, int y){
            int primo = x;
            int secondo = y;
            int risultato;
            for (int i = 0; i<L; i++){
                risultato = controlla_colonna(i);
                if (risultato != 0){
                    return risultato;
                }
                risultato = controlla_riga(i);
                if (risultato != 0){
                    return risultato;
                }
                risultato = controlla_diagonale(x, y);
                if (risultato != 0){
                    return risultato;
                }
            }
        }
    private:
        int controlla_colonna(int colonna){
            int uno = 0;
            int due = 0;
            for (int i = 0; i<L; i++){
                string casella = griglia[i][colonna];
                if (casella == "X"){
                    uno++;
                }
                else if (casella == "O"){
                    due++;
                }
            }
            if (uno == 3){
                return 1;
            }
            else if (due == 3){
                return 2;
            }
            else{
                return 0;
            }

        }

        int controlla_riga(int riga){
            int uno = 0;
            int due = 0;
            for (int i = 0; i<L; i++){
                string casella = griglia[riga][i];
                if (casella == "X"){
                    uno++;
                }
                else if (casella == "O"){
                    due++;
                }
            }
            if (uno == 3){
                return 1;
            }
            else if (due == 3){
                return 2;
            }
            else{
                return 0;
            }

        }
    

        int controlla_diagonale(int x, int y){
            for (int i = 0; i<L; i++){
                if ((griglia[0][0] == "X" && griglia[1][1]=="X" && griglia[2][2]=="X") || (griglia[2][0]=="X" && griglia[1][1]=="X" && griglia[0][2]=="X")){
                    return 1;
                }
                if ((griglia[0][0]=="O" && griglia[1][1]=="O" && griglia[2][2]=="O") || (griglia[2][0]=="O" && griglia[1][1]=="O" && griglia[0][2]=="O")){
                    return 2;
                }
            }
            return 0;
        }


}; // Va messo il ; dopo la parentesi di chiusura di una classe

int main(){

    // Presentazione gioco
    cout<<"Tris:"<<endl;

    // Dichiarazione classi
    Tris_classe Tris;

    Tris.nuovaGriglia ();

    Tris.stampaGioco();

    // Dichiarazione variabili
    int x;
    int y;
    bool valido;
    int end = 0;
    int Cont = 0;
    int b = 1;

    // Gioco
    while (end == 0 && b != 0){
        do{ // Do while
        cout<<"Giocatore 1 tocca a te: valori da (da 0 a 2): "<<endl;
        cout<<"X: ";
        cin>>x;
        cout<<"Y: ";
        cin>>y;
        valido = Tris.piazzaX(x, y);
        } while (!valido);

        Tris.stampaGioco();

        end = Tris.vincenteGioco(x, y);
        if (end!=0){
            break;
        }
        Cont++;

        do{ // Do while
        cout<<"Giocatore 2 tocca a te: valori da (da 0 a 2): "<<endl;
        cout<<"Y: ";
        cin>>x;
        cout<<"X: ";
        cin>>y;
        valido = Tris.piazzaO(x, y);
        } while (!valido);

        Tris.stampaGioco();

        end = Tris.vincenteGioco(x, y);
        if (end != 0){
            b=0;
        }
        Cont++;
        if (Cont >= 9){
            b=0;
        }
    }

    if (end == 1){
        cout<<"Giocatore 1 hai vinto";
    }
    else if (end == 2){
        cout<<"Giocatore 2 hai vinto";
    }
    else {
        cout<<"Pareggio";
    }

    return 0;
}