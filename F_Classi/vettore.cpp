/*Classi e vettori
GALDINI MATTEO 3CIN 04/03/2024
*/

#include <iostream>

using namespace std;


class vettore{
    protected:
        int L, len, D;

    public:
        int * array;
        vettore(int l, int D){
            this-> L = L;
            this->D = D;
            len = 0;
            array = new int (L);

        }
        void add (int N){
            if (len == L){ 
                cout<<""<<L<<" --> "<<L + D<<""<<endl;
                int * newa = new int [L + D];
                for (int i = 0; i<L; i++){
                    newa[i] = array[i];
                }
                L = L + D;
                delete array;
                array = newa;
            }
            array[len] = N;
            len++;
        }

        void setElement(int index, int element){
            array[index] = element;;
        }

        int getElement(int index){
            return array[index];
        }

        void print(){
            cout<<"Vettore: ";
            for (int i = 0; i<len; i++){
                cout<<"Vettore: ["<<array[i]<<"]"<<endl;
            }
        }
};

int main(){

    vettore array(10, 2);

    /*array.add(2);
    array.add(4);
    array.print();*/

    for (int i = 0; i<100; i++){
        array.add(i);
    }

    array.array[10] = 333;

    array.print();

    return 0;
}