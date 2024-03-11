/*First Stack
GALDINI MATTEO 3CIN 04/03/2024
*/

#include <iostream>

using namespace std;


class stack{
    protected:
        int L, len, D;

    public:
        int * array;
        stack(int l, int D){
            this-> L = L;
            this->D = D;
            len = 0;
            array = new int (L);

        }
        void push (int N){
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

        int pop(){
            if (len == 0) {
                cout<<"Stack vuoto"<<endl; 
                return 1;
            }
            return array[--len];
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
                cout<<array[i]<<"\t"<<" ";
            }
            cout<<endl;
        }
};

int main(){
    stack array (10, 10);
    for (int i = 0; i<100; i++){
        array.push(i);
    }
    for (int i = 0; i<101; i++){
        cout<<array.pop()<<" ";
    }
    cout<<endl;

    //array.print();

    return 0;
}