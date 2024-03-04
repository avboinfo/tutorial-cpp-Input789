/*Classi e vettori
GALDINI MATTEO 3CIN 04/03/2024
*/

#include <iostream>

using namespace std;


class vettore{
    protected:
        int L, len, D;
        int * array;

    public:
        vettore(int l, int D){
            L = l;
            len = 0;
            array = new int (L);
            D = 10;

        }
        void add (int N){
            if (len == L){ 
                cout<<""<<L<<" --> "<<D<<""<<endl;
                int * newa = new int (L + D);
                for (int i = 0; i<L; i++){
                    newa[i] = array[i];
                    array = newa;
                    delete[] array;

                }
                L = L + D;
                cout<<"Il vettore è pieno, con: ["<<L<<"] numeri"; 
                return;
                }
            array[len] = N;
            len++;
        }
        void print(){
            for (int i = 0; i<len; i++){
                cout<<"Vettore: ["<<array[i]<<"]"<<endl;
            }
        }
};

int main(){

    vettore array(100, 50);

    array.add(2);
    array.add(4);
    array.print();

    return 0;
}