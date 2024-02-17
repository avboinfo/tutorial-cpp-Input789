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
                        if (griglia[i][j] == "1"){
                            griglia[i][j] = "X";
                        }
                        if (griglia[i][j] == "2"){
                            griglia[i][j] = "O";
                        }
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
            if (griglia[x][y] != "0"){ // Cella già occupata
                return false;
            }
            griglia[x][y] = "1";
            return true;


        }

        bool piazzaO(int x, int y){
        if (x > 2 || x < 0){ // Oltre i valori possibili
                return false;
            }
            if (y > 2 || y < 0){ // Oltre i valori possibili
                return false;
            }
            if (griglia[x][y] != "0"){ // Cella già occupata
                return false;
            }
            griglia[x][y] = "2";
            return true;
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
    int x, y;
    bool valido;
    bool end = true;

    // Gioco
    while (end){
        do{ // Do while
        cout<<"Giocatore 1 tocca a te: valori da (da 0 a 2): "<<endl;
        cout<<"X: ";
        cin>>x;
        cout<<"Y: ";
        cin>>y;
        valido = Tris.piazzaX(x, y);
        } while (!valido);

        Tris.stampaGioco();

        do{ // Do while
        cout<<"Giocatore 2 tocca a te: valori da (da 0 a 2): "<<endl;
        cout<<"X: ";
        cin>>x;
        cout<<"Y: ";
        cin>>y;
        valido = Tris.piazzaO(x, y);
        } while (!valido);

        Tris.stampaGioco();
    }

    return 0;
}