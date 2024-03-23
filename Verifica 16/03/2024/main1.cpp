/* Verifica 16/03/2024
Primo esercizio GALDINI*/
#include <iostream>

using namespace std;

const int DIM = 10;


void printMat(int m[DIM][DIM]){
    for (int i = 0; i<DIM; i++){
        for (int j = 0; j<DIM; j++){
            cout<<m[i][j]<<" "<<"\t";
        }
        cout<<endl;
    }
}

int checkNumber(int m[DIM][DIM], int n){
    int Cont = 0;
    for (int i = 0; i<DIM; i++){
        for (int j = 0; j<DIM; j++){
            if (m[i][j] == n){
                Cont++;
                cout<<n<<" is in the cell: ["<<i<<"] ["<<j<<"]"<<endl;
            }
        }
    }
    return Cont;
}

int checkDiagonal(int m[DIM][DIM], int n){
    int ContD = 0;
    for (int i = 0; i<DIM; i++){
        for (int j = 0; j<DIM; j++){
            if (i == j){
                if (m[i][j] == n){
                    ContD++;
                    cout<<n<<" is in the cell in the main diagonal: ["<<i<<"] ["<<j<<"]"<<endl;
                }
            }
        }
    }
    return ContD;
}

int main(){


    //Dichiarazione random
    srand(time(NULL));

    //Dichiarazione matrice
    int Mat[DIM][DIM];

    //Dichiarazione variabili
    int n = 0;

    //Primo for per riempire di numeri la matrice Mat[DIM][DIM]
    for (int i = 0; i<DIM; i++){
        for (int j = 0; j<DIM; j++){
            Mat[i][j] = rand()% 100;
        }
    }
    
    //Richiamazione funzione "printMat"
    printMat(Mat);

    //Chiede all'utente il numero che vuole cercare nella matrice
    cout<<"Number: ";
    cin>>n;

    //Richiamazione seconda funzione
    int Cont = checkNumber(Mat, n);

    //Richiamazione terza funzione
    int ContD = checkDiagonal(Mat, n);

    //Cout finali
    cout<<"The "<<n<<" appears in the matrix "<<Cont<<" times"<<endl;
    cout<<"The "<<n<<" appears in the main diagonal "<<ContD<<" times"<<endl;


    return 0;
}