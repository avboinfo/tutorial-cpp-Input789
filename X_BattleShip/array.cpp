/* Prove per verifica
GALDINI MATTEO 3CIN
*/

#include <iostream>

using namespace std;


const int DIM = 10;

class Array{

    private:
        int a[DIM][DIM];

    public:
        Array(int n){
            
            for (int i = 0; i<DIM; i++){
                for (int j = 0; j<DIM; j++){
                    a[i][j] = n;
                }
            }

        }

    void print(){
        for (int i = 0; i<DIM; i++){
            for (int j = 0; j<DIM; j++){
                cout<<a[i][j]<<" - ";
            }
            cout<<endl;
        } 
        cout<<endl;       
    }


};




int main(){
    Array array = Array(1);
    array.print();
}