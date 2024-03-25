/*Introduzione alla ricorsione
GALDINI MATTEO*/

#include <iostream>

using namespace std;



int sommaRicorsiva(int min, int max, int somma){
    if (min>max){
        return somma;
    }
    else{
        somma = somma + min;
        min++;
        sommaRicorsiva (min, max, somma);
    }

}


/*int sommaRicorsivaprof(int min, int max){
    if (min>max){
        return 0;
    }
    if (min == max){
        return max;
    }
    return m + sommaRicorsivaprof(n, m-1);
}*/

int main(){

    int min;
    int max;
    int somma_uno = 0;


    cout<<"Welcome!!, insert two numbers in order to know the sum of all the numbers in between, including the numbers you'll insert"<<endl;

    cout<<"Insert the first number: ";
    cin>>min;
    cout<<"Insert the second number: ";
    cin>>max;

    int somma = sommaRicorsiva(min, max, somma_uno);

    cout<<"Here's the sum of the numbers between ["<<min<<"] and ["<<max<<"] : ";
    cout<<somma;

    return 0;
}