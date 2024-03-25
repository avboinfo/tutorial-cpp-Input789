/*Ricorsione esercizio 2
GALDINI MATTEO*/

#include <iostream>

using namespace std;



float potenzaRicorsiva(float a, unsigned int b, int end, int n){
    if (end >= b){
        return a;
    }
    else {
        a = n*a;
        end++;
        potenzaRicorsiva (a, b, end, n);
    }
}





int main(){

    float a;
    unsigned int b;
    int end = 1;

    cin>>a;
    cin>>b;

    int n = a;

    a = potenzaRicorsiva (a, b, end, n);
    cout<<a;

    return 0;
}