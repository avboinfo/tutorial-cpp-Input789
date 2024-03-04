/*Classi e vettori
GALDINI MATTEO 3CIN 04/03/2024
*/

#include <iostream>

using namespace std;


class vettore{
    protected:
        int L, len;
        int * array;

    public:
        vettore(int l){
            L = l;
            len = 0;
            array = new int (L);

        }
        void add (int N){
            if (len == L){ cout<<"Il vettore è pieno, con: ["<<L<<"] numeri"; return;}
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

    vettore array(100);

    array.add(2);
    array.add(4);
    array.print();

    return 0;
}