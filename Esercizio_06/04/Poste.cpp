/*Esercizio 16 pag. A11_18
GALDINI MATTEO 3CIN
*/

#include <iostream>

using namespace std;


class Poste{
    private:
    int DIM;
    int first, first_finanze, first_spedizioni, first_ricezioni, first_primario;
    int last, last_spedizioni, last_finanze, last_ricezioni, last_primario;
    int *array;
    int *finanze;
    int *spedizioni;
    int *ricezioni;
    int *primario;
    public:
    Poste(int DIM){

        this -> DIM = DIM; 
        array = new int [DIM];
        finanze = new int [DIM];
        spedizioni = new int [DIM];
        ricezioni = new int [DIM];
        primario = new int [DIM];
        first = last = 0;
        last_finanze = last_spedizioni = last_ricezioni = last_primario = 0;
        first_spedizioni = first_finanze = first_ricezioni = first_primario = 0;
    }

    void Enter(int n, string s){
        if (s == "F"){
            if (last_finanze >= DIM){
                cout<<" Non c'è più spazio nella sezione finanze";
                return;
            }
            finanze[last_finanze] = n;
            last_finanze++;
        }
        if (s == "S"){
            if (last_spedizioni >= DIM){
                cout<<" Non c'è più spazio nella sezione spedizioni";
                return;
            }
            spedizioni[last_spedizioni] = n;
            last_spedizioni++;
        }
        if (s == "R"){
            if (last_ricezioni >= DIM){
                cout<<" Non c'è più spazio nella sezione ricezione";
                return;
            }
            ricezioni[last_ricezioni] = n;
            last_ricezioni++;
        }
    }


    int Exit(string s, string s_primario){
        if (s == "F"){
            if (first_finanze >= last_finanze){
                cout<<"Non c'è nulla";
                return 0;
            }
            cout<<"Il prossimo è: "<<finanze[first_finanze]<<endl;
            first_finanze ++;
            return finanze[first_finanze + 1];
        }
        if (s == "S"){
            if (first_spedizioni >= last_spedizioni){
                cout<<"Non c'è nulla";
                return 0;
            }
            cout<<"Il prossimo è: "<<spedizioni[first_spedizioni]<<endl;
            first_spedizioni++;
            return spedizioni[first_spedizioni + 1];
        }
        if (s == "R"){
            if (first_ricezioni >= last_ricezioni){
                cout<<"Non c'è nulla";
                return 0;
            }
            cout<<"Il prossimo è: "<<ricezioni[first_ricezioni]<<endl;
            first_ricezioni++;
            return ricezioni[first_ricezioni + 1];
        }
        /*if (s == "RP"){
            if (first_primario >= last_primario){
                cout<<"Non c'è nulla";
                return 0;
            }
            cout<<"Il prossimo è: "<<primario[first_primario]<<endl;
            return primario[first_primario + 1];
        }*/
    }



    void print(string s){
        if (s == "F"){
            cout<<"Coda in finanza:"<<endl;
            for (int i = first_finanze; i<last_finanze; i++){
                cout<<finanze[i]<<endl;
            }
        }
        if (s == "S"){
            cout<<"Coda in spedizioni:"<<endl;
            for (int i = first_spedizioni; i<last_spedizioni; i++){
                cout<<spedizioni[i]<<endl;
            }
        }
        if (s == "R"){
            cout<<"Coda in ricezioni:"<<endl;
            for (int i = first_ricezioni; i<last_ricezioni; i++){
                cout<<ricezioni[i]<<endl;
            }
        }
    }

};
