/* Prove per verifica
GALDINI MATTEO 3CIN
*/

#include <iostream>

#include <random>


#include <iomanip>

using namespace std;


const int DIM = 10;

class Array{

    private:
        char a[DIM][DIM];

    public:
        Array(){

            for (int i = 0; i<DIM; i++){
                for (int j = 0; j<DIM; j++){
                    a[i][j] = 97 + rand()%26;
                }
            }
        }
        Array(char n){
            
            for (int i = 0; i<DIM; i++){
                for (int j = 0; j<DIM; j++){
                    a[i][j] = n;
                }
            }

        }

    void print(){
        cout << setw(4) << "x |";
        for (int i=0; i<DIM; i++) cout << setw(4) << i;
        cout << endl;
        for (int i=0; i<DIM; i++) cout << "-----";
        cout << endl;

        for (int i=0; i<DIM; i++) {
            cout << setw(2) << i << " |";
            for (int j=0; j<DIM; j++) {
                cout << setw(4) << a[i][j];
            }
            cout << " |" << endl;
        }

        for (int i=0; i<DIM; i++) {
            cout << "-----";
        }
    }

    void bomb (int n ){
        int x = rand ()% (DIM);
        int y = rand()% (DIM);
        a[x][y] = 'X';
    }

    void colShipplacement(int len){
        int x = rand()% (DIM);
        int y = rand()% (DIM - len);
        for (int i = 0; i<len; i++) a[x][y+i] = 'O';
    }

    void rowShipplacement(int len){
        int x = rand()% (DIM);
        int y = rand()% (DIM - len);
        for (int i = 0; i<len; i++) a[x+i][y] = 'O';
    }

    char getBomb (int x, int y){
        return a[x][y];
    }

    void setBomb (int x, int y, char z){
        a[x][y] = z;
    }

    void putBomb(){
        
    }


};





int main(){
    char fill = '-';
    //cin>>fill;
    srand(time(NULL));
    Array second_array = Array();
    Array array = Array(fill);
    //array.print();
    //cout<<endl;
    array.print();
    array.colShipplacement(4);
    array.colShipplacement(3);
    array.colShipplacement(1);
    array.rowShipplacement(4);
    array.rowShipplacement(3);
    array.rowShipplacement(1);


    for (int i = 0; i<DIM + DIM; i++){
        int x = rand()% DIM;
        int y = rand()% DIM;
        if (array.getBomb(x,y)=='O') array.setBomb(x,y, 'X');
    }

    cout<<endl;
    array.print();
}

